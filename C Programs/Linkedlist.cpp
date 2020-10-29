#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* link;
    
};

void display(struct node* head)
{
    struct node* temp = head;
    while(temp !=NULL)
    {
        printf("%d", temp->data);
        printf(" ");
        
        temp = temp->link;
    }
    printf("\n");
}

struct node*insert_begin(struct node* head, int value)
{
    struct node* temp= NULL;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=value;
    temp->link= head;
    head=temp;
    return head;
}
void insert_end(struct node* head, int value)
{
    struct node* temp = NULL;
    struct node* temp1 = head;
    temp->data= value;
    temp->link = NULL;
    while(temp1->link != NULL)
    {
        temp1 = temp1->link;
        
    }
    temp1->link=temp;
}

int main()
{
    struct node* head = NULL;
    struct node* tail = NULL;
    struct node* temp = NULL;
    int j=10, k=1, choice, value;
    for(int i=0; i<5; i++)
    {
        if(head == NULL)
        {
            head = (struct node*)malloc(sizeof(struct node));
            tail = head;
            head->data =j;
            head->link = NULL;
            
        }
        else{
            temp= (struct node*)malloc(sizeof(struct node));
            tail->link=temp;
            tail=temp;
            tail->data =j;
            temp->link = NULL;
        }
        j+=10;
    }
    printf("You have to perform the operation using this linked list\n");
    display(head);
    while(k==1)
    {
        printf("Press 1 to insert element at the begining of the linked list\n");
        printf("Press 2 to inser element at the end of the linked list\n");
        printf("Press 3 to display elements of the linked list\n");
        printf("Press any key to exit\n");
        scanf("%d",&choice);
        
        switch(choice)
        {
            case 1: printf("Enetr the value you want to insert at the begining\n");
                    scanf("%d", &value);
                    head=insert_begin(head, value);
                    break;
            case 2: printf("Enter the value you want to insert at the end\n ");
                    scanf("%d",&value);
                    insert_end(head, value);
                    break;
            case 3: display(head);
                    break;
            default: k++;
        }
        
    }
}
