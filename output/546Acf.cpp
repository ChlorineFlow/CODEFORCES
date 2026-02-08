
#include <iostream>
using namespace std;
int main() {
    int k,n,w;
    cin>>k>>n>>w;
    int tc=0;
    for(int i=1; i<=w; i++){
        tc=tc+(i*k);
    }
    if(tc<n){
        cout<<0;
    }
    else{  
        cout<<tc-n;
    }
    return 0;
}