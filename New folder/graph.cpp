#ifndef _GRAPH_H
#define _GRAPH_H
#include <list>
#include <iostream>
#include <list>
using namespace std;

void bfs(int src){
	bool* visited =new bool[nV +1];
	nemsat(visited,false,nV+1);

	queue<int> q;
	q.push(src);
	visited[src] =true;

	while(q.empty() == false){
		int curVer=q.top();
		cout<< curVer << " ";

		//push unvisited neighbour
		for(lit it=adjList[curVer].begin(); it!=adjList[curVer].end(); ++it){
			int curNeighbour= "it";
			if(visited[curNeighbour]== false){
				visited[curNeighbour]=true;
				q.push(curNeighbour);
			}
		}
	}
}

void dfs(int src){
	//static bool* visited =new bool[nV + 1]{0};
	static vector<bool> visited(100,false);
	visited[src]=true;
	cout<<src<<" ";

	//for all neighbours
	for(lit it= adjList[src].begin(); it != adjList[src].end();++it){
		int curVer= *it;
		if(visited[curVer]==false){

			dfs(curVer);
		}
	}
}

int main(){
	
}