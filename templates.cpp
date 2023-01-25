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

/* other example
template <class T>
T sum (T a, T b)
{
  T result;
  result = a + b;
  return result;
}

int main () {
  int i=5, j=6, k;
  double f=2.0, g=0.5, h;
  k=sum<int>(i,j);
  h=sum<double>(f,g);
  cout << k << '\n';
  cout << h << '\n';
  return 0;
}
/*
