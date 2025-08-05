#include<iostream>
using namespace std;
class Student{
public:
    int rno;
    string name;

    Student(int rno, string name, float marks){
        this->rno = rno;
        this->name = name;
        this->marks = marks;
    }
private:    
    float marks;
};

int main(){
    Student s1(10, "Ram", 92.5);
}