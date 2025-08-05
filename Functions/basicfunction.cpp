#include<iostream>>
using namespace std;
void starTriangle(int x){
    for(int i=1; i<=x; i++){
        for(int j=1; j<=i; j++){
            cout<<"*";

        }
        cout<<endl;
    }
}
void greeting(){
    cout<<"Good Morning"<<endl;
    cout<<"Have a nice day"<<endl;

}
int main(){
   starTriangle(3);
   greeting();
   starTriangle(4);
   greeting();
   starTriangle(5);

}


