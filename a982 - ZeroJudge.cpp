#include<iostream>
using namespace std;
#define big 10000
bool maze[100][100];//°g®c 
int n;
int dis[100][100]; //distance
void floyd(int x,int y){
	if(x==n-2 and y==n-2) return;
	if(dis[x][y]+1<dis[x+1][y] and maze[x+1][y]){
		dis[x+1][y]=dis[x][y]+1;
		floyd(x+1,y);
	}
	if(dis[x][y]+1<dis[x][y+1] and maze[x][y+1]){
		dis[x][y+1]=dis[x][y]+1;
		floyd(x,y+1);
	}
	if(dis[x][y]+1<dis[x-1][y] and maze[x-1][y]){
		dis[x-1][y]=dis[x][y]+1;
		floyd(x-1,y);
	}
	if(dis[x][y]+1<dis[x][y-1] and maze[x][y-1]){
		dis[x][y-1]=dis[x][y]+1;
		floyd(x,y-1);
	}
}
int main(){
	char ch;
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>ch;
			if(ch=='#') maze[i][j]=0;
			else maze[i][j]=1;
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			dis[i][j]=big;
		}
	}
	dis[1][1]=1;
	floyd(1,1);
	if(dis[n-2][n-2]==big) cout<<"No solution!";
	else cout<<dis[n-2][n-2];
	return 0;
 } 
