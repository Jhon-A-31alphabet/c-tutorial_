#include<iostream>
#include<stdio.h>
using namespace std;
void condicional_do();

int main(){
    cout<<"ingresa un numero mayor a 70"<<endl;
    int a;
    cin>>a;
    if(a==70){cout<<"este numero es igual a 70"<<endl;}

    else if(a>100){cout<<"\n";cout<<"este es un limite"<<endl;}

    else
        {cout<<"\n";

        cout<<"------------------";
        cout<<"\n";
        }

//puedes usar las llaves en los condicionales,no son nescesarios
//pero son recomendables.
     int b;
     cout<<"------------------------"<<endl;
     cin>>b;
     float c = a + b;
     cout<<" "<<endl;
     cout<<c;
     cout<<""<<endl;
     cout<<""<<endl;


    system("pause");


    return 0;



}

void condicional_do(){
    int numero;
    do
    {
            cout <<  "Ingrese un numero ";
            cin >> numero;
    }
    while(numero <= 100); //if numero is less than 100.Do is going to repeat the action.

}


