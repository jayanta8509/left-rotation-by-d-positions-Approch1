#include <iostream>
using namespace std;
void left(int arr[],int n,int k){
  int temp[n];
  int l=0;
  for(int i=k;i<n;i++){
    temp[l]=arr[i];
    l++;
  }
  //copy to temp arry to arr array
  for(int i=0;i<k;i++){
    temp[l]=arr[i];
    l++;
  }
  cout<<endl;
  for(int i=0;i<n;i++){
    cout<<temp[i]<<"\t";
  }
  //coy to arr arry to temp array
  for(int i=0;i<n;i++){
    arr[i]=temp[i];
  }
}
void printArr(int arr2[],int ok){
  for(int i=0;i<ok;i++){
    cout<<arr2[i]<<"\t";
  }
}

int main() {
  int arr1[]={1,2,3,4,5,6};
  int n=sizeof(arr1) / sizeof(arr1[0]);
  int count=2;
  left(arr1, n, count);
  //printArr(arr1, n);
  
}