#include <iostream>
using namespace std;
//Making a function to Sort the given array using Insertion Sort
void InsertionSort(int arr[],int n){
    for(int i=1;i<n;i++){
        int current=arr[i];
        int j;
        for(j=i-1;j>=0;j--){
            if(current<arr[j]){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
    
    arr[j+1]=current;
    }
}

int main() {
int n;
//Taking size as input from user
cin>>n;
//Initialising the array
int input[100];
//Taking input from the user
for(int i=0;i<n;i++){
    cin>>input[i];
}
InsertionSort(input,n);
//Printing out the sorted Array
    for(int i=0;i<n;i++){
        cout<<input[i]<<" ";
    }
    cout<<endl;
}
