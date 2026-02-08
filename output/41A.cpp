#include <iostream>
using namespace std;
int main (){
    string str1,str2;
    cin>>str1>>str2;
    int size1=str1.size();
    int size2=str2.size();
    if(size1!=size2){
        cout<<"NO";
    }
    else{
        bool flag=true;
        int i=0;
        int j=size2-1;
        while(i<=j){
            if(str1[i]!=str2[j-i]){
                flag=false;
                break;
                
            }
            i++;
            
        }
        if(flag){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    }
    
}
