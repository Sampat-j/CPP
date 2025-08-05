#include<iostream>
using namespace std;

class Student{
    public:
    string name;
    int rno;
    float gpa;

    Student(){  //Default Constructor

    }
    Student(int r){  //paramiterized constructor
        rno = r;
    }

    Student(string s, int r){  //paramiterized constructor
        name = s;
        rno = r;
    }
    Student(string s, int r, float g){  //paramiterized constructor
        name = s;
        rno = r;
        gpa = g;
    }
      Student(int r, float g, string s){  //paramiterized constructor
        name = s;
        rno = r;
        gpa = g;
    }
};
void print(Student s){
    cout<<s.name<<" "<<s.rno<<" "<<s.gpa<<endl;
}

int main(){
    Student s1("Raghav", 76);
    s1.gpa = 8.2;

    Student s2;
    s2.name = "Himanshu";
    s2.rno = 88;
    s2.gpa = 7.5;

    Student s3("Gagan", 89, 9.9);

    Student s5(15, 10 ,"Ram");

    Student s4(91);
    s4.name = "harsh";
    s4.gpa = 9.16;

    Student s6=s1;  //Deep Copy
    s6.name = "Manish";

    Student s7(s1);  //copy constructor - Deep Copy
    s7.name = "Vijay";

    
    print(s1);
    print(s2);
    print(s3);
    print(s4);
    print(s5);
    print(s6);
    print(s7);
}