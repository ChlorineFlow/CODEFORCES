#include <bits/stdc++.h>
using namespace std;
int main (){
    int tt;
    cin>>tt;
    while(tt--){
        int n,m,x,y;
        cin>>n>>m>>x>>y;
        vector<int>arrN(n);
        vector<int>arrM(m);
        for(int i=0; i<n; i++){
            cin>>arrN[i];
        }
        for(int i=0; i<m; i++){
            cin>>arrM[i];
        }
        sort(arrN.begin(), arrN.end());
        sort(arrM.begin(), arrM.end());
        int countY=0;
        for(int i=0; i<n; i++){
            if(y>arrN[i]){
                countY++;
            }
        }
        int countX=0;
        for(int i=0; i<m; i++){
            if(x>arrM[i]){
                countX++;
            }
        }
        cout<<countX+countY<<endl;


    }
}