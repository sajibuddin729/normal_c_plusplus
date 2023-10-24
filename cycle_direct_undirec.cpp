#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,e;
    cin>>n>>e;
    while(e--){
        int a,b;
        cin>>a>>b;
        int LeaderA=dsu_find(a);
        int LeaderB=dsu_find(b);
        if(LeaderA == LeaderB){
            cout<<"Cycel detected in between : "<<a<< " "<<b<<endl;

        }
        else{
            dsu_union(a,b);
        }
    }
}