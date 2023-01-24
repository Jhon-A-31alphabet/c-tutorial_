#include<iostream>


//templates are functions that can use a generic parameter to do the action


template<class whatever_data>

whatever_data abss(whatever_data a){
    if(a<0){
        a= a*-1;
        std::cout<<a<<std::endl;
    }
    else{
        std::cout<<a<<" is not negative";
    }


}

int main(){
    abss(-9.3333);
    abss(99);
    return 0;

}
