#include <iostream>
using namespace std;
int main(){
    int n,i;
    cin>>n;
    string str;
    cin>>str;
    int ca=0;
    int cd=0;
    i=0;
    while(i<n){
        if(str[i]=='A'){
            ca++;
        }
        else{
            cd++;
        }
        i++;
    }
    if(ca>cd){
        cout<<"Anton";
    }
    else if(cd>ca){
        cout<<"Danik";
    }
    else{
        cout<<"Friendship";
    }
}