/*
सरस्वति नमस्तुभ्यं वरदे कामरूपिणि।
विद्यारम्भं करिष्यामि सिद्धिर्भवतु मे सदा॥
*/
#include <iostream>
using namespace std;
int main(){
    long long n;
    cin>>n;
    int count=0;
    while(n>0){
        if(n%10==4||n%10==7){
            n=n/10;
            count++;
        }
        else{
            n=n/10;
        }
    }
    if(count==4||count==7){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}