#include<iostream>
#include<string>
#include<stdio.h>
using namespace std;
void imprimir();

int suma(int a,int b){ //parameter
    int r;
    r = a + b;
    cout<<r;
    return r;
}

string upp(string a){//parameter
    for(char c:a){
        cout<<c<<"----"<<c;
        }


}

//write the functios above the main function
//we use void to functions with no type.
//if the function has a parameter is not nescesary to write that at the firs line of the code
main(){ //is not nescesary to put the type of the main function.
    suma(20,20);
    cout<<"\n";
    imprimir();
    upp("popaaytafafad6f5adf4a6f4a5f");//parameter of the function upp
    system("pause");


}

void imprimir(){
    cout<<"-------";
}

