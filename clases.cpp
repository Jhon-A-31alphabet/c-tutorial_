#include<iostream>
#include<string>
class CPU{ // class name :cpu
private:
    int nanometers;float GHZ; // memebers
    std::string name;
    std::string arquitecture;
public://methods
    CPU_data(int,float,std::string,std::string);
    void run_math_problems();
    void turbo_mode();
    void battery_save();
};
//initialize the atributes.
CPU::CPU_data(int _nanometers,float _GHZ, std::string _name,std::string _Arquitecture){
    nanometers = _nanometers;
    GHZ = _GHZ;
    name = _name;
    arquitecture = _Arquitecture;
}
// //////////////////////////////////////functions for this class

void CPU::run_math_problems(){
    std::cout<<"my name is:   "<<name<<std::endl;
    std::cout<<"runnig math problems f(x) = x+1+x**x"<<std::endl;
}

void CPU::turbo_mode(){
    std::cout<<"this is my turbo mode:   "<<GHZ<<"  "<<  arquitecture <<std::endl;
}

void CPU::battery_save(){
    std::cout<<" 10w P/H"<<" cause"<<"my "<<nanometers<<"nanometers";
}
/////////////////////////////////////////////////
int main(){
    CPU pentium; // other object.
    CPU c1; // object
    pentium.CPU_data(7,2.0,"INTEL PENTIUM 4","X86");
    c1.CPU_data(5,1.5,"INTEL ATOM","ARM"); //initialize object
    //functions
    pentium.turbo_mode();

    c1.run_math_problems();
    c1.turbo_mode();
    return 0;
}
