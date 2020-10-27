#include<iostream>
using namespace std;
// Sorted an integer array using bubble sort
void bubbleSort(int arr[],int n){
for(int j=0;j<n-1;j++){
for(int i=0;i<n-1;i++){
if(arr[i]>arr[i+1]){ 
// Swapping of elements
int temp=arr[i];
arr[i]=arr[i+1];
arr[i+1]=temp;
}
}
}
}
int main(){
int n;
//Taking size of array as input from the user
cin>>n;
int input[100];
// Taking input for the array from user
for(int i=0;i<n;i++){
cin>>input[i];
}
bubbleSort(input,n);
//Printing the input array after sorting
for(int i=0;i<n;i++){
    cout<<input[i]<<" "<<endl;
}
}
