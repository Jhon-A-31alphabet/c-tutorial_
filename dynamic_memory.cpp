#include<iostream>
#include<string>
#include<new>
//nothrow library
using namespace std;
void example();
int main(){
    int *foo; //variable puntero....
    foo = new (nothrow)int[5]; //nothrow is using when memry allocation fails.
    example();
    return 0;





}

void example(){

    int number,*num;
    cout<<"digits a number:  "<<endl;
    cin>>number;
    num = new int[number]; //array
    for(int i=0;i<number;i++){
        num[i];
        cout<<i<<endl;}
    delete num;

}
