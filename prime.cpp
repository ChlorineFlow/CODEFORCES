#include <iostream>
using namespace std;
bool check(int j){
    int i=2;
    while(i<j){
        if(j%i==0){
            return false;
        }
        i++;
    }
    return true;

}
int main (){
    int n;
    cin>>n;
    bool flag=check(n);
    cout<<flag;

}