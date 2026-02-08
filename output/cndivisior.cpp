// Given an integer ‘N’, your task is to write a program that returns all the divisors of ‘N’ in ascending order.
#include <iostream>
using namespace std;
int main (){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        if(n%i==0){
            cout<<i<<" ";
        }
        i++;
    }
}