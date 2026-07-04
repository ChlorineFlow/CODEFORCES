#include <bits/stdc++.h>
using namespace std;

map<char, vector<string>> grammar;
map<char, set<char>> FIRST, FOLLOW;
set<char> nonTerminals;
char startSymbol;

void computeFirst()
{
    bool changed = true;
    while (changed)
    {
        changed = false;
        for (auto rule : grammar)
        {
            char A = rule.first;
            for (string production : rule.second)
            {
                for (int i = 0; i < production.length(); i++)
                {
                    char symbol = production[i];

                    if (!isupper(symbol))
                    {
                        if (FIRST[A].insert(symbol).second)
                            changed = true;
                        break;
                    }
                    else
                    {
                        for (char c : FIRST[symbol])
                        {
                            if (c != '#')
                            {
                                if (FIRST[A].insert(c).second)
                                    changed = true;
                            }
                        }

                        if (FIRST[symbol].find('#') == FIRST[symbol].end())
                            break;
                    }
                }
            }
        }
    }
}

void computeFollow()
{
    FOLLOW[startSymbol].insert('$');

    bool changed = true;

    while (changed)
    {
        changed = false;

        for (auto rule : grammar)
        {
            char A = rule.first;

            for (string production : rule.second)
            {
                for (int i = 0; i < production.length(); i++)
                {
                    char B = production[i];

                    if (isupper(B))
                    {
                        bool epsilonFlag = true;

                        for (int j = i + 1; j < production.length(); j++)
                        {
                            char next = production[j];

                            if (!isupper(next))
                            {
                                if (FOLLOW[B].insert(next).second)
                                    changed = true;

                                epsilonFlag = false;
                                break;
                            }
                            else
                            {
                                for (char c : FIRST[next])
                                {
                                    if (c != '#')
                                    {
                                        if (FOLLOW[B].insert(c).second)
                                            changed = true;
                                    }
                                }

                                if (FIRST[next].find('#') == FIRST[next].end())
                                {
                                    epsilonFlag = false;
                                    break;
                                }
                            }
                        }

                        if (i == production.length() - 1 || epsilonFlag)
                        {
                            for (char c : FOLLOW[A])
                            {
                                if (FOLLOW[B].insert(c).second)
                                    changed = true;
                            }
                        }
                    }
                }
            }
        }
    }
}

int main()
{
    int n;

    cout << "Enter number of productions: ";
    cin >> n;

    cout << "Enter productions (e.g., S->AB):\n";

    for (int i = 0; i < n; i++)
    {
        string input;
        cin >> input;

        char lhs = input[0];
        startSymbol = lhs;

        nonTerminals.insert(lhs);

        string rhs = input.substr(3);
        string temp = "";

        for (char c : rhs)
        {
            if (c == '/')
            {
                grammar[lhs].push_back(temp);
                temp = "";
            }
            else
                temp += c;
        }

        grammar[lhs].push_back(temp);
    }

    for (auto nt : nonTerminals)
        FIRST[nt] = {};

    computeFirst();
    computeFollow();

    cout << "\nFIRST sets:\n";

    for (auto nt : nonTerminals)
    {
        cout << "FIRST(" << nt << ") = { ";
        for (char c : FIRST[nt])
            cout << c << " ";
        cout << "}\n";
    }

    cout << "\nFOLLOW sets:\n";

    for (auto nt : nonTerminals)
    {
        cout << "FOLLOW(" << nt << ") = { ";
        for (char c : FOLLOW[nt])
            cout << c << " ";
        cout << "}\n";
    }

    return 0;
}