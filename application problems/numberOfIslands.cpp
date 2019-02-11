//https://www.techiedelight.com/count-the-number-of-islands/

#include <bits/stdc++.h>
using namespace std;

#define M 10
#define N 10
int r[] = {-1,-1,-1,0,1,0,1,1};
int c[] = {-1,1,0,-1,-1,1,0,1};

bool isSafe(int mat[M][N],int x,int y,bool prc[M][N]){
    return (x>=0) && (x<M) && (y>=0) && (y<N) && (mat[x][y] && !prc[x][y]);
}
void BFS(int mat[M][N], bool prc[M][N], int i,int j){
    queue<pair<int, int>>q;
    q.push(make_pair(i,j));
    
    prc[i][j] = true;
    
    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        for(int k=0;k<8;k++){
            if(isSafe(mat, x+r[k],y+c[k],prc)){
                prc[x+r[k]][y+c[k]] = 1;
                q.push(make_pair(x+r[k],y+c[k]));
            }
        }
    }
}
int main(){
    int mat[M][N]={
        { 1, 0, 1, 0, 0, 0, 1, 1, 1, 1 },
		{ 0, 0, 1, 0, 1, 0, 1, 0, 0, 0 },
		{ 1, 1, 1, 1, 0, 0, 1, 0, 0, 0 },
		{ 1, 0, 0, 1, 0, 1, 0, 0, 0, 0 },
		{ 1, 1, 1, 1, 0, 0, 0, 1, 1, 1 },
		{ 0, 1, 0, 1, 0, 0, 1, 1, 1, 1 },
		{ 0, 0, 0, 0, 0, 1, 1, 1, 0, 0 },
		{ 0, 0, 0, 1, 0, 0, 1, 1, 1, 0 },
		{ 1, 0, 1, 0, 1, 0, 0, 1, 0, 0 },
		{ 1, 1, 1, 1, 0, 0, 0, 1, 1, 1 }
        
    };
    bool prc[M][N];
    int cnt=0;
    memset(prc,0,sizeof(prc));
    for(int i=0;i<M;i++){
        for(int j=0;j<M;j++){
            //cout<<prc[i][j]<<" ";
            if(mat[i][j] && prc[i][j] == 0){
                BFS(mat, prc, i, j);
                cnt++;
            }
        }
        //cout<<endl;
    }
    cout<<"the number of islands : "<<cnt<<endl;
    return 0;
}
