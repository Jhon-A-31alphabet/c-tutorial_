#include<iostream>
#include<string>
using namespace std;

struct datos_personales{
    string nombre;
    string apellido;
    int edad;
    char sexo[10];
    int cedula;
};datos_personales per_info;


int main(){
    for(int x=0;x<1;x++){

    cout<<"ingrese su nombre:  ";
    getline(cin,per_info.nombre);
    cout<<endl<<"ingrese su apellido:  ";
    getline(cin,per_info.apellido);
    cout<<endl<<"ingrese su edad:   ";cin>>per_info.edad;
    cout<<endl<<"genero:   ";cin>>per_info.sexo;
    cout<<endl<<"cedula:   ";cin>>per_info.cedula;}

    for(int x=0;x<1;x++){
        cout<<"*********************************************************************"<<endl;
        cout<<"nombre:    "<<per_info.nombre<<endl;
        cout<<"-----------------------------------------------"<<endl;
        cout<<"apellido:   "<<per_info.apellido<<endl;
        cout<<"-----------------------------------------------"<<endl;
        cout<<"edad:      "<<per_info.edad<<endl;
        cout<<"-----------------------------------------------"<<endl;
        cout<<"sexo:     "<<per_info.sexo<<endl;
        cout<<"-----------------------------------------------"<<endl;
        cout<<"cedula:   "<<per_info.cedula<<endl;
        cout<<"-----------------------------------------------"<<endl;
        cout<<endl;
        cout<<"***********************************************************************"<<endl;
    }
}
