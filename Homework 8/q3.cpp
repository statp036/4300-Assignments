#include <iostream>

using namespace std;

class TreeNode {
public:
    string data;
    int count;
    TreeNode *left, *right;
    TreeNode(string s, TreeNode* l = NULL, TreeNode *r = NULL): data{s}, left{l}, right{r}, count{1} {}
};

// /justin Jiang
// IMPLEMENT insert() AND count() HERE, WITH SIGNATURES AS IN THE PROBLEM STATEMENT.
TreeNode* insert(TreeNode *t, string s){
    if(t == NULL) {     
        return new TreeNode(s, NULL, NULL);
    } 
    else if(s==t->data){
        t->count += 1;
        return t;
    }
    else if (s < t->data) {
        t->left = insert(t->left, s);
        return t;
    } else {
        t->right = insert(t->right, s);
        return t;
    }
}

int count(TreeNode *t, string s){
    if (t == NULL) {
        return 0;
    } else if (t->data > s) {
        return count(t->left, s);
    } else if (t->data < s) {
        return count(t->right, s);
    } else {
        return t->count;
    }
}
//


int main() {
    TreeNode* the_tree = new TreeNode(""); // the root of the tree will be the empty string.
    the_tree = insert(the_tree, "middle");
    the_tree = insert(the_tree, "ant");
    the_tree = insert(the_tree, "dog");
    the_tree = insert(the_tree, "greetings");
    the_tree = insert(the_tree, "cat");
    the_tree = insert(the_tree, "dog");
    the_tree = insert(the_tree, "rhinoceros");
    the_tree = insert(the_tree, "dog");

    cout << "dog appears " << count(the_tree, "dog") << " times (should be 3)" << endl;
    cout << "cat appears " << count(the_tree, "cat") << " times (should be 1)" << endl;
    cout << "AHeta5h535q!# appears " << count(the_tree, "AHeta5h535q!#") << " times (should be 0)" << endl;
}