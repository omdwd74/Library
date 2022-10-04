

#include<stdio.h>
            #include<stdlib.h>
            struct node
            {
                int entry;
                struct node *next;
            }; struct node *top;
            void append();
            void insert_beg();
            void insert_after();
            void insert_before();
            void display();
            void deletion_at_end();
            void deletion_at_beg();
            void deleteion__value();
            int main()
            {
                while(1)

                {
                    int choice,data;
                    printf("\t      Choose one option\n") ;
       printf("<=========================================================================>");
                    printf("\t  \n");
                    printf("\t 1. for append\n");
                    printf("\t 2. for insert beg\n") ;
                    printf("\t 3. for insert after\n");
                    printf("\t 4. for insert before\n");
                    printf("\t 5. for display\n");
                    printf("\t 6. for deletion at beginning\n");
                    printf("\t 7. for deletion at end in list\n");
                    printf("\t 8. for deletion a given element\n");
                    printf("\t 9. for exit the program\n");
                    printf("<=========================================================================>");


                    scanf("%d",&choice);
        switch(choice)
                    {
                        case 1:
                            printf("Appending singly linked list\n");
                            append();
                            break;
                        case 2:
                            printf("Insert node at beginning \n");
                            insert_beg();
                            break;
                        case 3:
                            insert_after();
                            printf("Data has been inserted successfully\n");
                            break;
                        case 4:
                            insert_before();
                            printf("Data has been inserted successfully\n");
                            break;

                        case 5:
                            display();
                            break;
                        case 6:
                            deletion_at_beg();
                            break;

                        case 7:
                            deletion_at_end();
                            break;

                        case 8:
                            deletion_value();
                            break;


                        case 9:
                            exit(0);
                        default:
                            printf("Enter invalid choice\n");




                    }



                }
                return 0;

            }
            void append()
            {

                struct node *ptr,*temp;
                int newdata;
                ptr=(struct node*)malloc(sizeof(struct node));
                if(ptr==NULL)
                {

                    printf("\n overflow");

                }
                else
                {
                    printf(" Enter value\n");
                    scanf("%d",&newdata);
                    ptr->entry=newdata;
                    if(top==NULL)
                    {
                        ptr->next=NULL;
                        top=ptr;
                        printf("\n node inserted") ;


                    }
                    else
                    {
                        temp = top;
                        while(temp->next!=NULL)
                        {
                            temp=temp->next;

                        }
                        temp->next=ptr;
                        ptr->next=NULL;
                        printf("\nNode inserted");



                    }

                }


            }
            void insert_beg()
            {
                struct node *ptr;
                int newdata;
                ptr=(struct node*)malloc(sizeof(struct node*));
                if(ptr==NULL)
                {
                    printf("\n overflow");

                }
                else
                {
                    printf("Enter value\n");
                    scanf("%d",&newdata);
                    ptr->entry=newdata;
                    ptr->next=top;
                    top=ptr;
                    printf("Node inserted\n");


                }



            }
            void display()
            {
               struct node *ptr;
               ptr=top;
               if(ptr==NULL)
               {
                printf("List is empty\n");


               }
               else
               {
                printf("print the list\n");
                while(ptr!=NULL)
                {
                    printf("%d ",ptr->entry);
                    ptr=ptr->next;


                }

               }



            }
            void insert_after()
            {

                int num,value;
                struct node *temp;

                printf("Enter the vlue you want to add in list\n");
                scanf("%d",&num);
                printf("Enter the element in list  after which you want to add number\n");
                scanf("%d",&value);
                temp=(struct node*)malloc(sizeof(struct node));
                temp->entry=num;

                if(top==NULL)
                {
                    printf("Empty list ")  ;
                }
                else
                {
                         struct node *ptr;
                         ptr=top;
                        //prev=ptr;

                    while(ptr->entry!=value)
                    {
                        //prev=ptr;
                        ptr=ptr->next;

                    }

                   temp->next= ptr->next;
                    ptr->next = temp;

                 }
                 printf("Node inserted\n");


            }

            void insert_before()
            {
                int num,value;
                struct node *ptr,*temp,*prev;
                printf("Enter the vlue you want to add in list\n");
                scanf("%d",&num);
                printf("Enter the element in list before which you want to add number\n");
                scanf("%d",&value);
                temp=(struct node*)malloc(sizeof(struct node));
                temp->entry=num;
                temp->next=NULL;
                ptr=top;

                if(top->entry==value)
                {
                    temp->next=top;
                    top=temp;
                    printf("Node inserted\n");

                    return 0;
                }
                while(ptr->next!=NULL)
                {
                    if(ptr->entry==value)
                    {
                           prev->next=temp;
                    temp->next=ptr;
                    }
                    prev=ptr;
                    ptr=ptr->next;
                }


            }

            void deletion_at_end()
            {

                struct node *ptr,*prev;
                if(top==NULL)
                {
                    printf("List is empty\n");

                }
                else if(top->next==NULL)
                {
                    top=NULL;
                    free(top);
                    printf("Only one of the node list deleted\n") ;


                }
                else
                {

                ptr=top;
                while(ptr->next!=NULL)
                {
                    prev=ptr;
                    ptr=ptr->next;

                }
                prev->next = NULL;
                printf("Last node %d has been deleted\n",ptr->entry)  ;
                free(ptr) ;

                }



            }
            void deletion_at_beg()
            {
                struct node *ptr;
                 if(top==NULL)
                    {
                        printf("List is already empty\n");
                    }
                    else
                    {
                    ptr=top;
                    top=top->next;
                    printf("First node is %d has been deleted successfully\n",ptr->entry)  ;
                    free(ptr);
               }

            }
            void deletion_value()
            {
                int value;
                struct node *ptr,*prev;
                ptr=top;
                printf("Enter the value you want to delete in list which must be present in list\n");
                scanf("%d",&value);
                while(ptr->entry!=value)
                {
                    prev=ptr;
                    ptr=ptr->next;
                     }
                prev->next=ptr->next;
                printf("given Value %d has been deleted from the list\n",value);
                free(ptr);
            }
