#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> st;
    // cout<<st.size()<<endl; //0
    // st.push(10);
    // st.push(20);
    // st.push(30);
    // st.push(40);
    // cout<<st.size()<<endl; //4
    // st.pop();//3
    // cout<<st.size()<<endl; //3
    // cout<<st.top(); //30

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    // //printing in reverse order ->emptying the stack
    // while(st.size()>0){
    //     cout<<st.top()<<" ";
    //     st.pop();
    // }

    //we will use extra stack
    stack<int> temp;
        while(st.size()>0){
        cout<<st.top()<<" ";
        temp.push(st.top());
        st.pop();
    }
    cout<<endl;
    //putting element back from temp to st
    while (temp.size()>0){
        cout<<temp.top()<<" ";
        st.push(temp.top());
        temp.pop();
    }
    cout<<endl<<st.top();
    
}
