#ifndef _BST_H
#define _BST_H

#include <iostream>
using namespace std;
class BSTNode{   
public:
	int data;
	BSTNode* left;
	BSTNode* right;
	BSTNode(int d){
		data=d;
		left=NULL;
		right=NULL;
	}
};