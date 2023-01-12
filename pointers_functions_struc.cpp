#include <iostream>
using namespace std;

float ejemplo(float *a,float *b){
    cout<<*a + *b;
  return *a + *b;

}

int cambiar_valor_variable(int *s){ //cambiar el valor de una variable con una funcion puntero
  return *s=1000;
}

struct example{
    int entero_principal;
    int entero_secundario;

}Example,*puntero_estructura=&Example;

int main()
{
    example aa[]={12,334};
    puntero_estructura->entero_principal=1;
    puntero_estructura->entero_secundario=3;
    int t =10;
    cambiar_valor_variable(&t);
    float s=1.0;
    float ar=1.2;
    ejemplo(&s,&ar);
}

