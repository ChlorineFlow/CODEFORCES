#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        string s;
        cin >> n >> s;
        
        stack<char> st;
        for(char c : s){
            if(!st.empty() && st.top() == c){
                st.pop();
            } 
            else {
                st.push(c);
            }
        }
        
        cout << (st.empty() ? "YES" : "NO") << "\n";
    }
}