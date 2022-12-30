#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std;


int main()
{
  try{
    int a=1;
    int n;
    cin>>n;
    if(n==0){

      throw 0;}
  }
  catch(const int x){cerr<<"error >> "<<endl;} //cerr is to print a error message...
  //if parameter of cath is a char x. you have to write like this const char *x if throw has a string;
 }
