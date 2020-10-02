#include<bits/stdc++.h>
using namespace std;

int vis[100005];
vector<int> adj[100005];

void dfs(int x)
{
	cout<<x<<" ";
	vis[x] = 1;
	for(int i=0;i<adj[x].size();i++){
		int val = adj[x][i];
	if (val==0) dfs(val);
	else {cout<<x<<" ";continue;}
	}
	
	return;
}

int main(){

	int n, m;
	cin>>n>>m;
	

	for(int i=0;i<m;i++){
		int x, y;
		cin>>x>>y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}

	dfs(1);
	cout<<endl;
}
