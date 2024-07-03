#include <iostream>
#include <string>

class TreeNode {
public:
	TreeNode(const std::string &s = "") : value(s), count(1), left(nullptr), right(nullptr) { }
	TreeNode(const TreeNode &rhs) {
		value = rhs.value;
		count = rhs.count;
		TreeNode *left = new TreeNode;
		TreeNode *right = new TreeNode;
		*left = *rhs.left;		
		*right = *rhs.right;
	}
private:
	std::string	value;
	int 		count;
	TreeNode 	*left;
	TreeNode	*right;
};

class BinStrTree{
public:
	BinStrTree(const std::string &s = "") : root(new TreeNode(s)), count(new int(1)) { }	
	BinStrTree(const BinStrTree &rhs) {
		count = rhs.count;
		++*count;
		root = rhs.root;
	}
private:
	TreeNode *root;
	int *count;
};