
#include <iostream>
#include<stdio.h> //conservar compatibilidad con c

using namespace std;

const int sumar_hasta = 1; //puedes colocar variables fuera

//variables
int main()


{
    
    //se pueden agregar doble tipo a una variable por ejemplo-------------- cont float x = 3.142364
    //variables
    int primer_variable = 64;
    float a;
    a = 1.2;
    float b = primer_variable + a; //suma estas dos variables
    const int sumar_hasta = 1;
    // constantes


    cout<<primer_variable<<endl;
    cout<<a<<endl; //imprime la variable a -1.2
    cout <<"imprime en pantalla cosas"<<endl;

    //salto de linea

    cout<<sumar_hasta<<endl;

    char palabra;
    cout<<"ingresa un valor"<<endl;
    cin>>palabra; //es cin es equivalente a input en python



    system("pause");
    //operadores aritmeticos +-*/=%

    return 0;//retorna cero


}

