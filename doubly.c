#include<stdio.h>
#include<stdlib.h>
struct node
    {
       struct node *prev;
       struct node *next;
       int data;


    }  ;
    struct node *head;
    void insertion_beginning();
    void insertion_end();
    void deletion_value();
    void display();
    int main()
    {
        while(1)
        {
            int choice;
            printf("1.For insertion_at_beginning\n");
            printf("2. For insertion_at_last\n");
            printf("3. For deleion_at random\n");
            printf("4. For Display\n");
            printf("5. For exit the program\n");
            scanf("%d",&choice);
            switch(choice)
            {
                case 1: insertion_beginning();
                break;
                case 2: insertion_end();
                break;
                case 3: deletion_value();
                break;
                case 4:display();
                break;
                case 5: exit(0);
                default:
                printf("user choice invalid\n");





            }




        }


    }
    void insertion_beginning()
    {
        struct node *ptr;
        int newdata;
        ptr=(struct node*)malloc(sizeof(struct node));
        if(ptr==NULL)
        {
            printf("OVERFLOW\n");

        }
        else
        {
            printf("enter new data\n");
            scanf("%d",&newdata);



        if(head==NULL)
        {
            ptr->next=NULL;
            ptr->prev=NULL;
            ptr->data=newdata;
            head=ptr;

        }
        else
        {
            ptr->data=newdata;
            ptr->prev=NULL;
            ptr->next=head;
            head=ptr;
        }
        printf("Node inserted at beginning successfully\n")  ;
       }

    }
    void insertion_end()
    {
        struct node *ptr,*temp;
        int newdata;
        ptr=(struct node*)malloc(sizeof(struct node));
        if(ptr==NULL)
        {
            printf("OVERFLOW\n");

        }
            else
            {
               printf("Enter the new data\n");
               scanf("%d",&newdata);
                ptr->data=newdata;
                if(head==NULL)
                {
                   ptr->next=NULL;
                   ptr->prev=NULL;
                   head=ptr;

                }
                else
                {
                 temp=head;

                 while(temp->next!=NULL)
                 {
                    temp=temp->next;

                 }
                 temp->next=ptr;
                 ptr->prev=temp;
                 ptr->next=NULL;

                }


            }
            printf("NODE inserted at last successfully\n");


    }

    void deletion_value()
    {
          struct node *ptr,*temp;
          int value;
          printf("Enter the value you want to delete\n");
          scanf("%d",&value);
          ptr=head;
          while(ptr->data!=value)
          {
            ptr=ptr->next;
          }
          if(ptr->next==NULL)
          {
            printf("Value not in list\n");
          }
          else if(ptr->next->next==NULL)
          {
            ptr->next=NULL;
          }
          else
          {
            temp=ptr->next;
            ptr->next=temp->next ;
            temp->next->prev=ptr;
            free(temp);
            printf("NOde deleted\n");
          }
    }
    void display()
    {
        struct node *ptr;
        printf("LIST Is ========>\n");
        ptr=head;
        while(ptr!=NULL)
        {
            printf("%d ",ptr->data);
            ptr=ptr->next;

        }
    }

