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
    Student(string n, int r, float m){
        name = n;
        rno = r;
        marks = m;
    }
    void print(){
        cout<<name<<" "<<marks<<" "<<rno<<endl;
    }
    
    float getMarks(){  //getter
        return marks;
    }

    void setMarks(float m){  //setter
        marks = m;
    }  
private:    
    float marks;
  
};

int main(){
    Student s1("Ram", 76, 92.2);
    // s1.rno = 76;
    // s1.name = "Ram";
    // // s1.marks = 92.2;

    cout<<s1.getMarks()<<endl;
    s1.setMarks(98);
    cout<<s1.getMarks()<<endl;
    
    s1.print();
}
