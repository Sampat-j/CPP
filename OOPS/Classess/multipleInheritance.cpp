#include<iostream>
using namespace std;
class Cricketer{
public:
    int runs;
    int wickets;
    float average;
};

class Engineer{
public:
    int experience;
    string domain;
};

class Person : public Engineer,public Cricketer{ //multiple Inheritance
public:
    string name;
};
int main(){
    Person p1;
    p1.name = "Sourav Netravalkar";
    p1.domain = "Software Engineeer";
    p1.experience = 8;
    p1.runs = 1000;
    p1.wickets = 25;
    p1.average = 26.3;

    cout << "Name: " << p1.name << endl;
    cout << "Domain: " << p1.domain << endl;
    cout << "Experience: " << p1.experience << " years" << endl;
    cout << "Runs: " << p1.runs << endl;
    cout << "Wickets: " << p1.wickets << endl;
    cout << "Average: " << p1.average << endl;
}
