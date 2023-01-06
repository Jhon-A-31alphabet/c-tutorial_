#include<stack>
#include<iostream>

using namespace std;

void printelement(stack<int> stac){
    while(!stac.empty()){
        cout<<stac.top()<<endl;
        stac.pop(); //we have to delete a the top to print the next element.
    }

}

int main(){
    //empty,size,push,pop,top
    stack<int>pila;
    //empty return true id stack is does not have elementes(vacia).
    pila.push(1);
    pila.push(2);
    pila.push(3);
    pila.pop(); //delete a element.

    cout<<pila.size()<<endl; //print the size of the stack....
    cout<<pila.top()<<endl<<endl;//print the top of the stack
    printelement(pila);
}
