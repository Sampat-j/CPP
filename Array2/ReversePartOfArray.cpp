#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void display(vector<int> &a){
    for(int i=0; i<a.size(); i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void reversePart(int i, int j, vector<int> &v){
    while(i<=j){
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
    return;
}
void reverse(vector<int> &v){
    for(int i=0,j=v.size()-1; i<=j; i++,j--){
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
    }
    return;
}
int main(){
    vector<int> v;
    v.push_back(6);
    v.push_back(1);
    v.push_back(4);
    v.push_back(3);
    v.push_back(2);
    v.push_back(9);
    v.push_back(8);

    display(v);
    int i;
    cout<<"reverse from index: ";
    cin>>i;
    int j;
    cout<<"reverse upto index: ";
    cin>>j;
    reversePart(i,j,v);
    cout<<"Reversed Part of array: ";
    display(v);
    reverse(v);
    cout<<"reversed array: ";
    display(v);
}
