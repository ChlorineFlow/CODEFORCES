#include <bits/stdc++.h>
using namespace std;

int main(){
    string nonterminal;
    int n;

    cout<<"enter non terminal\n";
    cin>>nonterminal;

    cout<<"enter no. of production\n";
    cin>>n;

    vector<string>prod(n);

    cout<<"enter production\n";
    for(int i=0; i<n; i++) 
        cin>>prod[i];

    vector<string>alpha,beta;

    for(string p: prod){
        if(p[0]==nonterminal[0]) 
            alpha.push_back(p.substr(1));
        else 
            beta.push_back(p);
    }

    if(!alpha.empty()){
        cout<<"\nleft recursion detected\n";

        cout<<nonterminal<<"->";
        for (int i = 0; i<beta.size(); i++){
            cout<<beta[i]<<nonterminal<<"'";
            if(i!=beta.size()-1) cout<<" | ";   // corrected separator (was "1")
        }

        cout<<"\n"<<nonterminal<<"'->";
        for(int i=0; i<alpha.size(); i++){
            cout<<alpha[i]<<nonterminal<<"'";
            if(i!=alpha.size()-1) cout<<" | ";  // corrected separator (was "1")
        }

        cout<<" | ep\n"; // corrected epsilon printing (was "/ep")
    }

    else{
        string prefix = prod[0];

        for(int i=1; i<prod.size(); i++){
            int j=0;
            while(j<prefix.size() && j<prod[i].size() && prefix[j]==prod[i][j]){
                j++;
            }
            prefix = prefix.substr(0,j);
        }

        if(prefix.length()>0){
            cout<<"\n left factoring applied\n";

            cout<<nonterminal<<"->"<<prefix<<nonterminal<<"'\n";  
            // corrected: new nonterminal should be S' not S

            cout<<nonterminal<<"'->";  
            // corrected: production belongs to S' not S

            for(int i=0; i<prod.size(); i++){
                string suffix = prod[i].substr(prefix.length());

                if(suffix=="") suffix="ep";  
                // corrected: check empty string instead of " "

                cout<<suffix;

                if(i!=prod.size()-1) cout<<" | ";  
                // corrected separator (was "1")
            }

            cout<<endl;
        }

        else{
            cout<<"\n no left recursion or left factoring needed \n";
        }
    }

    return 0;
}