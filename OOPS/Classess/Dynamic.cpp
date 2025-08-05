#include<iostream>
using namespace std;
class Cricketer{
public:
    string name;
    int runs;
    float avg;
    
    Cricketer(string name, int runs, float avg){
        this->name = name;
        this->runs = runs;
        this->avg = avg;
    }
};
void print(Cricketer c){
    cout<<c.name<<" "<<c.runs<<" "<<c.avg<<endl;
}

int main(){
    Cricketer c1("Virat Kohli", 25000, 55.2);
    Cricketer c2("Rohit Sharma", 18000, 47.3);

    // Cricketer* p = &c1;
    // cout<<p->runs<<endl;  //c1.runs
    // cout<<c1.avg<<endl;
    // p->avg = 77.2;     //c1.avg = 77.2
    // cout<<c1.avg<<endl;
}