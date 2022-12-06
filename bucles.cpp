#include<iostream>
#include<string>
using namespace std;
void bucle_for();
int main(){//este es un bucle while
    const string o ="lol";
    int b = 1;
    int a;
    a = 10;
    while(a<100){
        a ++;
        cout<<a<<endl;
        }

    bucle_for();
    while(b=1){

        cout<<"------"<<o;
    }


}

void bucle_for(){
    //esta es una funcion con un bucle for.
    float inicio = 0.1;
    int strr = 10;
    bool r =true;
    int att = 100;



    for(strr=10;strr<30;strr=strr+1){
        att ++;

        cout<<"-"<<endl;
        cout<<"\n";
        cout<<"xxxxxxxxxxxxxxxxxxxxxxxxx";
        cout<<"\n";

    }
    for(inicio=0.1;inicio<10;inicio=inicio+1){ //primer parametro inicio,segundo parametro mientras que,tercer parametro sumar 1(en este caso).
    cout<<"\n";
    cout<<"------";
    cout<<"\n";
    string d ="abcdefg";

    for(char c : d){ //aqui estoy recorriendo un texto.
        cout<<"["<<c<<"]"<<endl;}
    }



}

