#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int>s;
    s.insert(5);
    s.insert(1);
    s.insert(3);
    s.insert(5); // duplicate ignored

    for(int x : s){
        cout<<x<<" ";
    }
    auto it=s.find(5);
    cout<<*it<<endl; //it points to the memory location where 5 is stored so iterator is like a pointer 

}
