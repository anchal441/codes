#ifndef _GRAPH_H
#define _GRAPH_H
#include <list>
#include <iostream>
using namespace std;
class Graph{
	list<int> * adjList;
	int nV;
public:
	Graph(int n){
		nV=n;
		adjList=new list<int>[nV+1];

	}
	void addEdge(int v1,int v2){
		adjList[v1].push_back(v2);
		adjList[v2].push_back(v1);
	}
	void printGraph(){
		for(int i=1;i<=nV;++i){
			//print list corresponding to the vertex
			list<int> l= adjList[i];
			for(list<int>:: const_iterator it=l.begin();it!= l.end();++it){
				cout<<*it<<"-->";
			}
			cout<<endl;
		}
	}
	~Graph(){
		cout<<"ctor called";
		delete adjList;
	}
};
#endif
int main(){
	int n;
	cin>>n;
	Graph g(5);
	g.addEdge(1,2);
	g.addEdge(1,3);
	g.addEdge(1,4);

	g.addEdge(2,5);
	g.addEdge(3,4);
	g.addEdge(3,5);
	g.addEdge(4,5);

	g.printGraph();
}