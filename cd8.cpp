#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

map<char, vector<string>> grammar;
map<char, set<char>> FIRST, FOLLOW;
map<pair<char,char>, string> table;

set<char> nonTerminals;
set<char> terminals;

char startSymbol;

void computeFirst()
{
    bool changed = true;

    while(changed)
    {
        changed = false;

        for(auto rule : grammar)
        {
            char A = rule.first;

            for(string production : rule.second)
            {
                for(int i=0;i<production.length();i++)
                {
                    char symbol = production[i];

                    if(!isupper(symbol))
                    {
                        terminals.insert(symbol);

                        if(FIRST[A].insert(symbol).second)
                            changed = true;

                        break;
                    }
                    else
                    {
                        for(char c : FIRST[symbol])
                        {
                            if(c!='#')
                            {
                                if(FIRST[A].insert(c).second)
                                    changed = true;
                            }
                        }

                        if(FIRST[symbol].find('#') == FIRST[symbol].end())
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

    while(changed)
    {
        changed = false;

        for(auto rule : grammar)
        {
            char A = rule.first;

            for(string production : rule.second)
            {
                for(int i=0;i<production.length();i++)
                {
                    char B = production[i];

                    if(isupper(B))
                    {
                        bool epsilonFlag = true;

                        for(int j=i+1;j<production.length();j++)
                        {
                            char next = production[j];

                            if(!isupper(next))
                            {
                                if(FOLLOW[B].insert(next).second)
                                    changed = true;

                                epsilonFlag = false;
                                break;
                            }
                            else
                            {
                                for(char c : FIRST[next])
                                {
                                    if(c!='#')
                                    {
                                        if(FOLLOW[B].insert(c).second)
                                            changed = true;
                                    }
                                }

                                if(FIRST[next].find('#') == FIRST[next].end())
                                {
                                    epsilonFlag = false;
                                    break;
                                }
                            }
                        }

                        if(i == production.length()-1 || epsilonFlag)
                        {
                            for(char c : FOLLOW[A])
                            {
                                if(FOLLOW[B].insert(c).second)
                                    changed = true;
                            }
                        }
                    }
                }
            }
        }
    }
}

set<char> firstOfString(string s)
{
    set<char> result;

    for(char symbol : s)
    {
        if(!isupper(symbol))
        {
            result.insert(symbol);
            break;
        }

        for(char c : FIRST[symbol])
        {
            if(c!='#')
                result.insert(c);
        }

        if(FIRST[symbol].find('#') == FIRST[symbol].end())
            break;
    }

    return result;
}

void constructTable()
{
    for(auto rule : grammar)
    {
        char A = rule.first;

        for(string production : rule.second)
        {
            set<char> first = firstOfString(production);

            for(char t : first)
            {
                table[{A,t}] = production;
            }

            if(first.find('#') != first.end())
            {
                for(char b : FOLLOW[A])
                {
                    table[{A,b}] = production;
                }
            }
        }
    }
}

int main()
{
    int n;

    cout<<"Enter number of productions: ";
    cin>>n;

    cout<<"Enter productions (A->aB/b):\n";

    for(int i=0;i<n;i++)
    {
        string input;
        cin>>input;

        char lhs = input[0];

        if(i==0)
            startSymbol = lhs;

        nonTerminals.insert(lhs);

        string rhs = input.substr(3);
        string temp="";

        for(char c : rhs)
        {
            if(c=='/')
            {
                grammar[lhs].push_back(temp);
                temp="";
            }
            else
                temp+=c;
        }

        grammar[lhs].push_back(temp);
    }

    computeFirst();
    computeFollow();
    constructTable();

    terminals.insert('$');

    cout<<"\nPREDICTIVE PARSING TABLE\n\n";

    cout<<left<<setw(10)<<"NT/T";

    for(char t : terminals)
        cout<<left<<setw(12)<<t;

    cout<<endl;

    for(char nt : nonTerminals)
    {
        cout<<left<<setw(10)<<nt;

        for(char t : terminals)
        {
            if(table.find({nt,t}) != table.end())
                cout<<left<<setw(12)<<(string(1,nt)+"->"+table[{nt,t}]);
            else
                cout<<left<<setw(12)<<"-";
        }

        cout<<endl;
    }
}