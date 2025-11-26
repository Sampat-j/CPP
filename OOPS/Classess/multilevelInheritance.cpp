#include<iostream>
using namespace std;
class Vehicle{  //parent Class
public:
    int topSpeed;
    float milage;
    string fuel;

};

class TwoWheeler : public Vehicle{    //child Class/derived Class 
public:
     
};
class FourWheeler : public Vehicle{    //child Class/derived Class 
public:
     
};

class Bike : public TwoWheeler{    //child Class/derived Class 
public:

};

class Scooty : public TwoWheeler{    //child Class/derived Class 
public:
  
};

class Car : public FourWheeler{    //child Class/derived Class 
public:
      
};

int main(){
    
}
