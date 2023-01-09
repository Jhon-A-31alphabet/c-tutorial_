#include <iostream>
using namespace std;

struct arbol{
    int data;
    arbol* left;
    arbol* right;
};

arbol* createnode(int data){
    arbol* newarbol=new arbol;
    newarbol->data=data;
    newarbol->left=newarbol->right =nullptr;
}
int main() {

    //root of the tree.
    arbol* root=createnode(2);

    root->left = createnode(1);
    root->right=createnode(10);
    root->left->right=createnode(20); //and so on....
}
