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
    void print(int runs){
    cout<<this->name<<" "<<this->runs<<" "<<avg<<endl;
    }
    int matches(){
        return runs/avg;
    }
};
// void print(Cricketer c){
//     cout<<c.name<<" "<<c.runs<<endl;
// }

int main(){
    Cricketer c1("Virat Kohli", 25000, 55.2);
    Cricketer c2("Rohit Sharma", 18000, 47.3);
    
    c1.print(8);
    c2.print(9);

    cout<<"Virat Kohli Total Matches Played: "<<c1.matches()<<endl;
    cout<<"Rohit Sharma Total Matches Played: "<<c2.matches()<<endl;
   
}