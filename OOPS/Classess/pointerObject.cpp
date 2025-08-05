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
void change(Cricketer* c){
    c->avg = 66.2;
}

int main(){
    Cricketer c1("Virat Kohli", 25000, 55.2);
    Cricketer* c2 = new Cricketer("Rohit Sharma", 18000, 47.3);

    cout<<c1.name<<" "<<c1.runs<<" "<<c1.avg<<endl;
    cout<<c2->name<<" "<<c2->runs<<"  "<<c2->avg<<endl;

    
    // int x1 = 5;
    //Dynamic allocation
    // int* x2 = new int(6);
    // cout<<x1<<*x2;
}
