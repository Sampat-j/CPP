#include<iostream>
using namespace std;
class Vehicle{  //parent Class
public:
    int topSpeed;
    float milage;
    string fuel;

};

class Car : public Vehicle{    //child Class/derived Class 
public:
    bool sunroof;  
};

class Bike : public Vehicle{    //child Class/derived Class 
public:
    int gears;  
};

class Truck : public Vehicle{    //child Class/derived Class 
public:
    int gears;  
};
void print(Bike b){
    cout<<b.topSpeed<<" "<<b.milage<<" "<<b.gears<<endl;
}

int main(){
    Bike b1;
    b1.topSpeed = 180;
    b1.milage = 12.5;
    b1.gears = 6;
    print(b1);

    Car c1;
    c1.topSpeed = 300;
    c1.fuel = "disel";
    c1.milage = 15.3;
    c1.sunroof = "yes";
    cout<<c1.sunroof;


}
