#include<iostream>
using namespace std;

int main(){
  int *p;
  int size;
  cout<<"Please enter the size of the array\n";
  cin>>size;
  int arr[size];
  int i;
  for(i=0;i<size;i++){
    cin>>arr[i];
  }
  p = arr;
  for(i=0;i<size;i++){
    cout<<*p<<endl;
    p++;
  }
}
