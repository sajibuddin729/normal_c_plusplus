#include <bits/stdc++.h>
using namespace std;
int parent[1000];
void set(int n){
    for(int i=1;i<=n;i++){
         parent[i]=-1;
    }
}

int find(int n){
    while(parent[n] != -1){
        n=parent[n];
    }
    return n;
}
void dsu_union(int a, int b){
    int leaderA= find(a);
    int leaderB= find(b);
    if(leaderA  != leaderB){
        parent[leaderB]= leaderA;
    }
}
int main(){
    int n,e;
    cin>>n>>e;
    while(e--){
        int a,b;
        cin>>a>>b;
        dsu_union(a,b);
    
    }
    return 0;
}