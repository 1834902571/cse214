#include<stdio.h>
#include<stdlib.h>
#include "DoublyNonCircular.h"
void display(head);
node* push(node *head);
node* pop(node *head);
node* other_operations(node *head);
int main()
{
    int op;
    node *head = NULL;
    //head = create_list();
    do
    {
        system("cls");
        printf("Select Your Option: \n");
        printf("1. DISPLAY\n");
        printf("2. PUSH\n");
        printf("3. POP\n");
        printf("4. OTHER OPERATIONS\n") ;
        printf("5. Close\n");
        printf("Enter Your Option Number: ");
        scanf("%d", &op);
        if(op<=0 || op>5)
        {
            printf("Invalid Option Number. Insert between 1 to 5\n");
        }
        else if(op == 1)
        {
            printf("Linked List: ");
            display(head);
        }
        else if(op == 2)
        {
            head = push(head);
        }
        else if(op == 3)
        {
            head = pop(head);
        }
        else if(op == 4)
        {
            other_operations(head);
        }
    }
    while(op!=5);
}
void display(node *head)
{
    display_list(head);
    getchar();
    printf("Press Enter to Continue");
    getchar();
};
node* push(node *head)
{
    int op, value;
    do
    {
        system("cls");
        printf("Select Your Option: \n");
        printf("1. Push Front\n");
        printf("2. Push Back\n");
        printf("3. Back to Main Menu\n");
        printf("Enter Your Option Number: ");
        scanf("%d", &op);
        if(op<=0 || op>3)
        {
            printf("Invalid Option Number. Insert between 1 to 3\n");
        }
        else if(op<3)
        {
            printf("Input Value to PUSH: ");
            scanf("%d", &value);
            if(op==1)
            {
                return push_front(head, value);
            }
            else if(op==2)
            {
                return push_back(head, value);
            }
        }
    }
    while(op!=3);
    return head;
};
node* pop(node *head)
{
    int op, value;
    do
    {
        system("cls");
        printf("Select Your Option: \n");
        printf("1. Pop Front\n");
        printf("2. Pop Back\n");
        printf("3. Clear\n");
        printf("4. Back to Main Menu\n");
        printf("Enter Your Option Number: ");
        scanf("%d", &op);
        if(op<=0 || op>4)
        {
            printf("Invalid Option Number. Insert between 1 to 4\n");
        }
        else if(op<4)
        {
            if(op==1)
            {
                return pop_front(head);
            }
            else if(op==2)
            {
                return pop_back(head);
            }
            else if(op==3)
            {
                return clear(head);
            }
        }
    }
    while(op!=4);
    return head;
};
node* other_operations(node *head)
{
    int op;
    do
    {
        system("cls");
        printf("Select Your Option: \n");
        printf("1. Head\n");
        printf("2. Tail\n");
        printf("3. Empty\n");
        printf("4. Size\n") ;
        printf("5. Front\n") ;
        printf("6. Back\n") ;
        printf("7. Back to Main Menu\n");
        printf("Enter Your Option Number: ");
        scanf("%d", &op);
        if(op<=0 || op>7)
        {
            printf("Invalid Option Number. Insert between 1 to 7\n");
        }
        else if(op<7)
        {
            if(op==1)
            {
                printf("Head: %d\n", front(head));
                getchar();
                printf("Press Enter to Continue");
                getchar();
            }
            else if(op==2)
            {
                printf("Tail: %d\n", back(head));
                getchar();
                printf("Press Enter to Continue");
                getchar();
            }
            else if(op==3)
            {
                empty(head);
                getchar();
                printf("Press Enter to Continue");
                getchar();
            }
            else if(op==4)
            {
                size(head);
                getchar();
                printf("Press Enter to Continue");
                getchar();
            }
            else if(op==5)
            {
                printf("Front: %d\n",front(head));
                getchar();
                printf("Press Enter to Continue");
                getchar();
            }
            else if(op==6)
            {
                printf("Back: %d\n", back(head));
                getchar();
                printf("Press Enter to Continue");
                getchar();
            }
        }
    }
    while(op!=7);
};
