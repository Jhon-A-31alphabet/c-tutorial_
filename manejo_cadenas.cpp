#include<string.h>
#include<iostream>
using namespace std;
void primera_ocurrencia(){
    char *cad="turbo c";
    char *result;
    result = strchr(cad,'c');
    cout<<result;

}

int main(){

    char *cadena;
    char *resultado;
    cadena = "---------x-----";
    resultado=strchr(cadena,'x'); //busca la ultima ocurrencia de la cadena
    cout<<resultado;

    primera_ocurrencia();


}
