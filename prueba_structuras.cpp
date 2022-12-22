
#include <iostream>
#include<string>
using namespace std;

struct persona //this is a strucuture of datas.
{
    string nombre;
    int edad;
    string direccion_residencia;

}; persona humano; //username of structure


int main()
{
    cin>>humano.nombre; //input  a data to that structure.
    cin>>humano.direccion_residencia;

    cout<<humano.direccion_residencia<<endl;
    cout<<humano.nombre<<endl;
}
