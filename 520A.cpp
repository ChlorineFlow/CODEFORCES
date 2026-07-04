#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    set<char> st;
    for (char c : s) {
        st.insert(c);
    }
    if(st.size()==26){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }


}