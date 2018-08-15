#include <bits/stdc++.h>
using namespace std;

char forest[25][25];
int m,n;

bool isSafe(int i,int j){
	if(i>=0&& i<m && j>=0 && j<n && forest[i][j]=='T'){
		return true;
	}
	return false;
}
int bfs(int sr,int sc){
	queue<int> r;
	queue<int> c;

	r.push(sr);
	c.push(sc);

	r.push(-1);
	c.push(-1);
	int ans=0;

	int rdir={};
	int cdir={};

	while(q.empty()==false){
		int ri=r.front();
		int ci=c.front();
		r.pop();
		c.pop();
		if(ri==-1){
			++ans;
			if(q.empty()==false){
				r.push(-1);
				c.push(-1);

			}
			continue;
		}
		for(int i=0;i<8;++i){
			if(isSafe(ri+rdir[i],ci+cdir[i])){
				r.push(ri+rdir[i]);
				c.push(ci+cdir[i]);
			}
		}

	}
}
int main(){
	cin>>m>>n;
	int srcR,srcC;

	int forest[m][n];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>forest[i][j];
		}
	}
	int ans=bfs(srcR,srcC);
}