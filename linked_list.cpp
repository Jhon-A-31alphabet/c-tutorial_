#include<iostream>

using namespace std;

class nodo{
public:

    int value;
    nodo* Next;
};

void printlinked_list(nodo *n){
    for(int x=0;x<3;x++){
        cout<<n->value<<endl; //the value
        n=n->Next; //conect to the next value and print the next value//and so on.
    }


}
int main(){
    nodo* first = new nodo();
    nodo* second = new nodo();
    nodo* third = new nodo();

    first->value=1; // firs value of the linked list
    first->Next=second; //conect to the second value
//------------------------------------------------------------------//
    second->value=2; //second value
    second->Next=third; //conect to the third value

    third->value=3; //third value
    third->Next=first;// connect to the first value
    //you can connect to other value..............

    printlinked_list(first); //begin to the firs value (is not nescesary)...
}
