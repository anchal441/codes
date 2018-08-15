#ifndef _HASH_MAP_
#define _HASH_MAP_
#include <string>
using namespace std;

class Pair{
	public:
	string key;
	int value;
	Pair(){
		key="";
		value=0;
	}
	Pair(string k,int v){
		key=k;
		value=v;
	}
}

class HNode{
public:
	Pair P;
	HNode(Pair X){
		P=X;
		next=NULL;
	}
};


class HashMap{
	HNode* *table;
	int sze;
	int capacity;
	int hashfunction(string s){
		int ans=0;
		int mul=1;
		//ans
		for(int i=0;i<s.size();++i){
			ans=(ans+(s[i]*mul)%capacity)%capacity;
			mul=(mul*37)%capacity;
		}
	}
		double load_factor(){
			return(double)sze/capacity;
		}
		void rehash(){
			Node** oldTable=table;
			int old_capacity=capacity;
			capacity=2* capacity;
			table =new Node* [capacity](NULL);

			for(int i=0;i<old_capacity;++i){
				Node * head=oldTable[i];
				while(head){
					string k=head->P.key;
					int v=head->P.key;
					//int v=head->P.key;
					insert(k,v);
					Node * tmp=head;
					delete tmp;
					head=head->start;
				}
			}
		}
public:
	HashMap(){
		capacity=7; //prime is good
		sze=0;
		table=new HNode*[capacity](NULL); //all elements (or pointers) set to NULL

	}
	void insert(string k,int v){
		int idx=hashfunction(s);
		//if the list is empty,insert this element as head
		if(table[idx]==NULL){
			//
			table[idx]=newNode;
			++sze;
		}
		else{
			//list already exists
			newNode->next=table[idx];
			table[idx]=newNode;
			++sze;
		}


	}
	int find(string key){
		int idx = hashfunction(key);

		Node* head =table[idx];

		while(head!=NULL){
			Pair cur=head->P;
			if(P.key==key){
				return P.value;
			}
			head=head->next;
		}
		return -1;

	}
	Node* find(string key){
		//will be discussed
	}
	bool empty(){
		return sze==0;
	}

	bool size(){
		return sze;
	}
	bool remove(string s){
		int idx=hashfunction(s);
		Node * prev=NULL;
		Node* cur=table[idx];

		while(cur){
			if(cur->P.key==key){
				if(prev==NULL){
					table[idx]=cur->next;
					cur->next=NULL;
					delete cur;
					--sze;
				}
				else{
					prev->next=cur->next;
					cur->next=NULL;
					delete cur;
					--sze;
				}
			}
			prev=cur;
			cur=cur->next;
		}
	}
	~HashMap(){

	}
	}

};
#endif