// PROGRAM-NAME : Bubble Sort
// By Nisha
// PROGRAM-CODE :

#include <stdio.h>

int main()

{

int n, i, j, temp;

int arr[64];

printf("Enter number of elements\n");

scanf("%d", &n);

printf("Enter array elements \n");

for (i = 0; i < n; i++)

scanf("%d", &arr[i]);

for (i = 1 ; i < n; i++)

for(j=0;j<n-1;j++)

if (arr[j]> arr[j+1] )

{

temp= arr[j];

arr[j]= arr[j+1];

arr[j+1] = temp;

} 

printf("Sorted list in ascending order:\n");

for (i = 0; i < n ; i++)

{

printf("%d\n", arr[i]);

}

return 0;

}
