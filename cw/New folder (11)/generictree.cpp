#include <iostream>
using namespace std;
class Pair{
public:
	Node*  node;
	int sum;

};
Pair getMaxSum(Node * root){
	if(root==NULL){
		Pair P;
		P.node=NULL;
		P.sum=0;
		return P;
	}
	Pair curAns;
	curAns.node=root;
	curAns.sum=root->data;

	for(int i=0;i<root->nchild;++i){
		Pair X=getMaxSum(root->nchildArr[i]){
			curAns.sum+=root->childArr[i]
		}
	}
}

int main{
	Node * root=createTree();
	Pair solPair=getMaxSum(root);
	cout<<solPair.node<<" "<<solPair.sum;
}