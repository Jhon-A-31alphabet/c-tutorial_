#include<iostream>
#include<string>
#include<stdio.h>


using namespace std;

int main(){
    int value;
    int *mypointer;

    mypointer =&value; //pointer stores the memory objects of an object.
    *mypointer = 20; // put values at the variable.

    cout<<mypointer; //print the memory addres

    int firstvalue = 5, secondvalue = 15;
    int * p1, * p2;
    p1 = &firstvalue;  // p1 = address of firstvalue.
    p2 = &secondvalue; // p2 = address of secondvalue.
    *p1 = 10;          // value pointed to by p1 = 10
    *p2 = *p1;         // value pointed to by p2 = value pointed to by p1
    p1 = p2;           // p1 = p2 (value of pointer is copied)
    *p1 = 20;          // value pointed to by p1 = 20

    cout << "firstvalue is " << firstvalue << '\n';
    cout << "secondvalue is " << secondvalue << '\n';




    system("pause");

    return 0;

}
