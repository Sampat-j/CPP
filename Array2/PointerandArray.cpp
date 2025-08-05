 #include<iostream>
 #include<climits>
using namespace std;
int main(){
   int arr[]={1,2,3,5,6,7,8};
   int *ptr = arr; //giving address
   cout<<*ptr<<" "<<ptr<<endl;
   //array print method1
    for(int i=0;i<=6; i++){
     cout<<ptr[i]<<" ";
    }
    cout<<endl;
    //array print method2
    for(int i=0;i<=6; i++){
      cout<<*ptr<<" ";
      ptr++;
     }
     cout<<endl;
     ptr=arr;   //ptr is pointing to first element
   *ptr=8; // ptr[0]=*ptr=8
   ptr++;  //ptr is pointing to second element
   *ptr=9;
   ptr--; ////ptr is pointing to first elements
   for(int i=0;i<=6; i++){
    cout<<ptr[i]<<" ";
   }
}