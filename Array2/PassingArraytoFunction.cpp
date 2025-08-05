 #include<iostream>
 #include<climits>
using namespace std;
void display(int a[],int size){
    for(int i=0; i<=size-1;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return;
}
void change(int b[],int size){
    b[0]=100;
}
int main(){
    int arr[]={1,2,6,5,4,88,52};
    int size=sizeof(arr)/sizeof(arr[0]);
    //accessing the elements of array in another function
    display(arr,size);
    change(arr,size);
    display(arr,size);
}