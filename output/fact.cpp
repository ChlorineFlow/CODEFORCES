// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int factorial(int j){
    int i=1;
    int n=1;
    while(i<=j){
        n=i*n;
        i++;
    }
    return n;
}
int main() {
    int n,r;
    cout<<"ENTER THE VALUE OF N: ";
    cin>>n;
    cout<<"ENTER THE VALUE OF R: ";
    cin>>r;
    long long fact_n,fact_n_r,fact_r;
    fact_n=factorial(n);
    fact_r=factorial(r);
    fact_n_r=factorial(n-r);
    cout<<fact_n/(fact_r*(fact_n_r));
    return 0;
}