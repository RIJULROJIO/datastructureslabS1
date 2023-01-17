
#include<stdio.h>
#include<stdlib.h>
int value;
void push();
void pop();
void display();
struct Node
{
    int data;

    struct Node*next;
    };top=NULL;


    void push()
    {
        struct Node*newNode=malloc(sizeof(struct Node));
        newNode->data=value;
        if(top==NULL){
            newNode->next=NULL;
            top=newNode;
        }

  else{
        newNode->next=top;
        top=newNode;}
        printf("\n one element is pushed\n %d",newNode->data);
    }


void pop()
      {
          struct Node *temp;
    if(top == NULL)
{
    printf("Stack is already empty"); }
else
{
        temp=top;
            top=temp->next;
    free(temp);
}
     printf("Element is popped out");

      }
















      void display()
      {
          struct Node* temp = top;
        if(top==NULL)
           {
             printf("Linked Stack is Empty\n");
             return;
            }

                 printf("LinkedStack: ");

                 while(temp!=NULL)
                 {
                    printf("%d ",temp->data);
                    temp = temp->next;
                  }
               printf("\n");


        }




int main()
{


int op;

	while(1)
	{

		printf("\n Operations performed by Stack:");
		printf("\n 1.Push\n 2.Pop \n 3.Display\n 4.Exit");
		printf("\n\nEnter the operation:");
		scanf("%d",&op);

		switch(op)
		{
			case 1: printf("enter the element to be inserted:");
                    scanf("%d",&value);
                    push();
					break;
            case 2: pop();
					break;
			case 3: display();
					break;
			case 4: exit(0);

			default: printf("\nInvalid operation !!");
		}
	}
}
