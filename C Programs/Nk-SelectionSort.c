// PROGRAM-NAME : Hello, World!
// By Nisha
// PROGRAM-CODE :
#include <stdio.h>

int main()

{

int n,a[50],i,j,min,pos;

printf("Enter number of elements\n");

scanf("%d", &n);

printf("Enter array elements \n");

for (i = 0; i < n; i++)

scanf("%d", &a[i]);

for (i=0;i<n-1;i++)

{

min=a[i];

pos=i;

for(j=i+1;j<n;j++);

if (a[j]<min)

{

min=a[j];

pos=j;

}

if(pos!=i)

{

a[pos]=a[i];

a[i]=min;

}

}

printf("the sorted array is:\n");

for(i=0;i<n;i++)

printf("%d",a[i]);

return 0;

}
