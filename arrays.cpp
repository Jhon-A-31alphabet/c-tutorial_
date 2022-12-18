#include<iostream>
#include<string>

using namespace std;

void matriz(int arg[],int lengh){
    for(int u =0;u<lengh;u++){
        cout<<arg[u]<<endl;}
}

//----------------------------------------//
int main(){
    //arrays

    int ar [6] ={1,2,3,4,5,6}; //put the amount of numbers
    int other_array[] = {456,66,78,234,4}; //amount of numbers is not defined
    for(int a =0;a<5;a++){cout<<other_array[a]<<endl;}


    //is the same thing with strngs.

    int multidimensional[2][3] = {{6,5,4},
                                  {3,2,1}};

    for(int x = 0;x<2;x++){
        for(int j =0;j<3;j++){
            cout<<multidimensional[x][j]<<"   ";

        }
        cout<<endl;
        cout<<endl;
        cout<<endl; //array this multidimensional array
    }
    cout<<endl;
    cout<<endl;
    int te[]={1,1,5,6,7,4};
    matriz(te,5);

    system("pause");
    return 0;




}
