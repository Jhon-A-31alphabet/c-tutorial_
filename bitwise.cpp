#include<iostream>
#include<conio.h>

int main(){

    //  ~ complemento a uno = invierte los bits:  ejemplo 000:  111.     100:011 -> el nombre es complemento a uno.
    //  >> desplaza los bits a la derecha.
    //  << desplaza los bits a la izquierda.

    //  & operador and logico, binario.  compara ambos operandos bit a bit. si un bit de cada operando es 1 devuelve 1.
    // de lo contrario devuelve cero.

    // ^ = xor = parecido al and logico. con la diferencia de si un bit de cada operando es igual devuelve 0. Y si son diferentes devuelve 1.

    // | or = Este operador binario tiene un funcionamiento parecido a los anteriores (AND y XOR),
    //salvo que en este caso el resultado es 1 si
    //alguno de ellos est� a 1. En caso contrario devuelve 0 (ver ejemplo).


    int a = 10;
    int b =20;

    std::cout<<(a|b)<<std::endl;
    std::cout<<(a^b)<<std::endl;
    std::cout<<(a>>b)<<std::endl;
    std::cout<<(a<<b)<<std::endl;
    std::cout<<(a&b)<<std::endl;

return 0;
}
