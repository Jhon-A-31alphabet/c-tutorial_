
#include <iostream>

using namespace std;

enum colors{
    red,blue,yellow=1000
};

int main()

{
  colors selec;

  selec = red;

  switch(selec){
    case red:
    cout<<"this is red the number of red "<<red;
    break;

    case blue:
    cout<<"this is the number of blue  "<<blue<<" "<<endl;
    break;
  }
  cout<<endl;

  if((yellow>red)&&(blue>red)){cout<<"yellow and blue are bigger than red";}

  //enum is a type of data that, the variables are enumerated by position
  // they are a constants and you can add values in the stuct of this data



    return 0;
}
