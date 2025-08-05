#include<iostream>
using namespace std;

class Student{
public:    
    string name;
    int rno;
    float marks;

    Student(string name, int rno, float marks){
        this->name = name;
        this->rno = rno;
        this->marks = marks;
    }
};
void change(Student* s){
    s->name = "Raghav";
}

int main(){
    // Student s("Sampat", 18, 18.2);
    // // s.name = "sampat";
    // // s.rno = 182;
    // // s.marks = 82;
    // cout<<s.name<<endl;
    // change(&s);
    // cout<<s.name;

     Student* s = new Student("Sampat", 18, 18.2);
    cout<<s->name<<endl;
    change(s);
    cout<<s->name;
}