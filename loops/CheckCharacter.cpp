#include<iostream>
using namespace std;
int main(){
   char ch;
    cout<<"enter character: ";
    cin>>ch;
    if(ch>=97 && ch<=122){
        cout<<"small albhabet";
        }
    else if(ch>=65 && ch<=90){ 
        cout<<"Capital alphabet";
        }
    else if (ch>=48 && ch<=57) {
        cout<<"digit";
        }
    else {
        cout<<"spacial character";
    }

}