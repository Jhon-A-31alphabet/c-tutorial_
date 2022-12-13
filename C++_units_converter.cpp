#include<iostream>
#include<string>
using namespace std;

float farenheit_to_celsius(){
    float a;

    float celsius;
    cout<<"ingrese grados farenheit:   ";cin>>a;

    celsius = (a-32)/1.8000;
    cout<<"celsius - "<<endl;cout<<celsius<<endl;

}
float celsius_to_farenheit(){
    float b;

    float farenheit;
    cout<<"ingrese grados celsius:   ";cin>>b;

    farenheit = (b*1.8)+32; cout<<"farenheit - "<<endl;cout<<farenheit<<endl;
}

int main(){
    int init =0;
    do{
    cout<<"-------------------------------------"<<endl;
    cout<<"1- farenheit to celsius"<<endl;
    cout<<"2- celsius to farenheit"<<endl;
    cout<<"-------------------------------------"<<endl;
    int x;cin>>x;

     switch(x){
            case 1:
                farenheit_to_celsius();
                break;
            case 2:
                celsius_to_farenheit();
                break;

            default:

                cout<<"not valid"<<endl;
        }}while(init<1);
}
