// PROGRAM-NAME : Linear Search 
// By Nisha
// PROGRAM-CODE :
#include <stdio.h>

int main()

{

int a[50],n,i,item,loc=-1;

printf ("how many elements ");

scanf("%d",&n);

printf("enter the elements to sort");

for(int i=0;i<n;i++)

scanf("%d",&a[i]);

printf("enter the element to be searched:");

scanf("%d",&item);

for(i=0;i<n;i++)

if (a[i]==item)

{

loc=i;

break;

}

if(loc!=-1)

Printf("the item is found at position %d",loc+1);

else

Printf("not found");

return 0;

}
