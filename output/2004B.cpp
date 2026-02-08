#include<iostream>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){ 
    int l,r,L,R;
    cin>>l>>r>>L>>R;
    if(L>r || R<l){
        cout<<1<<endl;
    }
    else if(L<r && r<R && l<L){
        cout<<(r-L)+2<<endl;

    }
    else if(l<R && R<r && L<l){
        cout<<(R-l)+2<<endl;
    }
    else if(R==r && L<l){
        cout<<(r-l)+1<<endl;
    }
    else if(r==R && L>l){
        cout<<(R-L)+1<<endl;

    }
    else if(l==L && R<r){
        cout<<(R-L)+1<<endl;
    }
    else if(l==L && R>r){
        cout<<(r-l)+1<<endl;
    }
    else if(L<l && l<R && L<r && r<R){
        cout<<(r-l)+2<<endl;
    }
    else if(L>l && r>R && l<R && L<r){
        cout<<(R-L)+2<<endl;

    }
    else if(r==L || l==R){
        cout<<2<<endl;
    }

    else {
        cout<<r-l<<endl;
    }
    }

}