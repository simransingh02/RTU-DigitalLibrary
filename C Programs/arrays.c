#include<stdio.h>
#include<conio.h>
void main()
{
int arrayx[100], fai=-1,size=100,ch,i,j,ele,pos,pos1,pos2,ele1,ele2,temp,n;
do
{
printf("\nEnter your choice :- 1. Creation  2. Insertion 3. Deletion 4. Search (Linear) 5.Sort (Bubble) 6. Swap (pos1 with pos2) 7. Print 8 exit\n");
scanf("%d",&ch);
switch(ch)
{
case 1:
{
    printf("Please enter the no of elements in array\n");
    scanf("%d",&n);
    fai=n-1;
  if(fai>-1&&fai<=99)
  {
  printf("Please enter elements of array\n");
  for(i=0;i<=fai;i++)
  {
  scanf("%d ",&arrayx[i]);
  }
  }
  break;
}
case 2:
{

    printf("Please enter the no of elements in array\n");
    scanf("%d",&n);
    fai=n-1;
    printf("Array is:\n");
   for(i=0;i<=fai;i++)
       {
           printf("%d\t",arrayx[i]);
       }
    if(fai>-1&&fai<=99)
    {
        printf("Enter element to be inserted\n");
        scanf("%d",&ele);
        printf("Enter position where element is to be inserted\n");
        scanf("%d",&pos);
        for(i=fai;i>=pos-1;i--)
        {arrayx[i+1]=arrayx[i];
        }
        arrayx[pos-1]=ele;
        for(i=0;i<=fai+1;i++)
       {
           printf("%d\t",arrayx[i]);
       }
    }
    break;

}
case 3:
{
  printf("Please enter the no of elements in array\n");
    scanf("%d",&n);
    fai=n-1;
    if(fai>-1&&fai<=99)
    {   for(i=0;i<=fai;i++)
       {
           printf("%d\t",arrayx[i]);
       }
       printf("Enter position where element is to be deleted\n");
       scanf("%d",&pos);
       if(pos-1<=fai)
       {
           for(i=pos-1;i<=fai;i++)
           {
               arrayx[i]=arrayx[i+1];
           }
       }

        for(i=0;i<fai;i++)
       {
           printf("%d\t",arrayx[i]);
       }
    }
    break;
}
case 4:
{   int flag=0;
    printf("Please enter the no of elements in array\n");
    scanf("%d",&n);
    fai=n-1;
    if(fai>-1&&fai<=99)
    {   for(i=0;i<=fai;i++)
       {
           printf("%d\t",arrayx[i]);
       }
       printf("Enter element to be searched\n");
       scanf("%d",&ele);
       for(i=0;i<=fai;i++)
       {
           if(arrayx[i]==ele)
           {printf("Element is present at position%d\n",i+1);
           flag=1;
       }
       }
       if(flag==0)
       printf("Element not found");

    }
break;
}
case 5:
{
   printf("Please enter the no of elements in array\n");
    scanf("%d",&n);
    fai=n-1;
    if(fai>-1&&fai<=99)
    {
   printf("Array is:\n");
   for(i=0;i<=fai;i++)
       {
           printf("%d\t",arrayx[i]);
       }
        for(i=0;i<=fai;i++)
        {
            for(j=0;j<=fai-i;j++)
            {
                if(arrayx[j]>arrayx[j+1])
                {
                    ele=arrayx[j];
                    arrayx[j]=arrayx[j+1];
                    arrayx[j+1]=ele;
                }
                else
                {
                    continue;
                }
            }
        }
       printf("\nSorted Array is :\n");
       for(i=0;i<=fai;i++)
       {
           printf("%d\t",arrayx[i]);
       }

    }

        break;
}
case 6 :
{
    printf("Please enter the no of elements in array\n");
    scanf("%d",&n);
    fai=n-1;
    if(fai>-1&&fai<=99)
    {
        printf("Array is:\n");
   for(i=0;i<=fai;i++)
       {
           printf("%d\t",arrayx[i]);
       }
       printf("Enter positions to be switched\n");
    scanf("%d",&pos1);
    scanf("%d",&pos2);

       printf("element at pos1 is%d\n",arrayx[pos1-1]);
       printf("element at pos2 is%d\n",arrayx[pos2-1]);

        if((pos1-1)<=fai&&(pos2-1)<=fai)
        {
            temp=pos1;
            pos1=pos2;
            pos2=temp;
            printf("After swapping\n");
        printf("element at pos1 is%d\n",arrayx[pos1-1]);
       printf("element at pos2 is%d\n",arrayx[pos2-1]);


        }
    }

break;
}
case 7:
{
     printf("Please enter the no of elements in array\n");
    scanf("%d",&n);
    fai=n-1;
    if(fai>-1&&fai<=99)
    {
   printf("Array is:\n");
   for(i=0;i<=fai;i++)
       {
           printf("%d\t",arrayx[i]);
       }
    break;
}
}
case 8:
{
printf("Exit");
exit(0);
}

}
}

while(ch>0&&ch<=8);
getch();
}
