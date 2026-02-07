#include<iostream>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int arr[10][10]={
            {1,1,1,1,1,1,1,1,1,1},
            {1,2,2,2,2,2,2,2,2,1},
            {1,2,3,3,3,3,3,3,2,1},
            {1,2,3,4,4,4,4,3,2,1},
            {1,2,3,4,5,5,4,3,2,1},
            {1,2,3,4,5,5,4,3,2,1},
            {1,2,3,4,4,4,4,3,2,1},
            {1,2,3,3,3,3,3,3,2,1},
            {1,2,2,2,2,2,2,2,2,1},
            {1,1,1,1,1,1,1,1,1,1}
        };
        char arr2[10][10];
        for(int i=0; i<10; i++){
            for(int j=0; j<10; j++){
                cin>>arr2[i][j];
            }
        }
        int count=0;
        for(int i=0; i<10; i++){
            for(int j=0; j<10; j++){
                if(arr2[i][j]=='X'){
                    count=count+arr[i][j];
                }
            }
        }
        cout<<count<<endl;
        
    }
}