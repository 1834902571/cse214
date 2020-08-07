/* Single Way Linked List */
#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int value;
    struct node *next;
} Node;
void menu();
Node* create_list_1();
Node* create_list_2();
Node* insert_at(Node *temp, int pos, int value);
Node* delete_front(Node *temp);
Node* copy_list_recursive(Node *copy);
Node* merge_list(Node *list1, Node *list2);
Node* print_reverse(Node *list);
void print_list(Node *temp);
int main()
{
    menu();
    return 0;
}
void menu()
{
    Node *head = NULL;
    Node *list = NULL;
    Node *list1 = NULL;
    Node *list2 = NULL;
    int value, option;
    do
    {
        system("cls");
        printf("1. Insert At\n");
        printf("2. Delete Front\n");
        printf("3. Copy Recursively\n");
        printf("4. Merge Two List\n");
        printf("5. Display Reverse\n");
        printf("6. Display\n");
        printf("7. Exit\n");
        printf("Enter your Option : ");
        scanf("%d", &option);
        if(option == 1)
        {
            int x, y;
            head = create_list_1();
            printf("Display List 1: ");
            print_list(head);
            printf("Enter Position: ");
            scanf("%d", &x);
            printf("Enter Value: ");
            scanf("%d", &y);
            head = insert_at(head, x, y);
            printf("After Insert to List 1: ");
            print_list(head);
            getchar();
            printf("\nPress Enter to Continue\n");
            getchar();
        }
        else if(option == 2)
        {
            head = create_list_1();
            printf("Display List 1: ");
            print_list(head);
            head = delete_front(head);
            printf("After Front Delete from List 1: ");
            print_list(head);
            getchar();
            printf("\nPress Enter to Continue\n");
            getchar();
        }
        else if (option == 3)
        {
            head = create_list_1();
            printf("Display List 1: ");
            print_list(head);
            list = copy_list_recursive(head);
            printf("After Copy Recursively from List 1: ");
            print_list(list);
            getchar();
            printf("\nPress Enter to Continue\n");
            getchar();
        }
        else if(option == 4)
        {
            list1 = create_list_1();
            printf("Display List 1: ");
            print_list(list1);
            list2 = create_list_2();
            printf("Display List 2: ");
            print_list(list2);
            list = merge_list(list1, list2);
            printf("After Merge Two List: ");
            print_list(list);
            getchar();
            printf("\nPress Enter to Continue\n");
            getchar();
        }
        else if(option == 5)
        {
            head = create_list_1();
            printf("Display List 1: ");
            print_list(head);
            head = print_reverse(head);
            printf("Display List 1 in Reverse: ");
            print_list(head);
            getchar();
            printf("\nPress Enter to Continue\n");
            getchar();
        }
        else if(option == 6)
        {
            head = create_list_1();
            printf("Display List 1: ");
            print_list(head);
            head = create_list_2();
            printf("Display List 2: ");
            print_list(head);
            getchar();
            printf("\nPress Enter to Continue\n");
            getchar();
        }
        else if (option == 7)
        {
            exit(0);
        }
        else
        {
            printf("\nInvalid Option, Please Option Between '1 to 7'");
            getchar();
            printf("\nPress Enter to Continue\n");
            getchar();
        }
    }
    while(option != 7);
}
Node* create_list_1()
{
    Node *a, *b, *c, *d;
    a = (Node *) malloc(sizeof(Node));
    b = (Node *) malloc(sizeof(Node));
    c = (Node *) malloc(sizeof(Node));
    d = (Node *) malloc(sizeof(Node));
    a->value = 10;
    a->next = b;
    b->value = 20;
    b->next = c;
    c->value = 30;
    c->next = d;
    d->value = 40;
    d->next = NULL;
    return a;
}
Node* create_list_2()
{
    Node *a, *b, *c, *d;
    a = (Node *) malloc(sizeof(Node));
    b = (Node *) malloc(sizeof(Node));
    c = (Node *) malloc(sizeof(Node));
    d = (Node *) malloc(sizeof(Node));
    a->value = 50;
    a->next = b;
    b->value = 60;
    b->next = c;
    c->value = 70;
    c->next = d;
    d->value = 80;
    d->next = NULL;
    return a;
}
Node* insert_at(Node *temp, int pos, int value)
{
    Node *head = temp, *prev, *new_node;
    int i = 2;
    if(pos<1 || pos>4)
    {
        printf("Index out of range\n");
        return temp;
    }
    if(pos == 1)
    {
        new_node = (Node*) malloc(sizeof(Node) );
        new_node->value = value;
        new_node->next = temp;
        return new_node;
    }
    while(temp)
    {
        prev = temp;
        if(i == pos)
        {
            new_node = (Node*) malloc(sizeof(Node)) ;
            new_node->value = value;
            new_node->next = temp->next;
            prev->next = new_node;
            return head;
        }
        i++;
        temp = temp->next;
    }
    printf( "Invalid Index\n");
    return head;
}
Node* delete_front(Node *temp)
{
    if(temp)
    {
        Node *new_head = NULL;
        new_head = temp->next;
        free(temp);
        return new_head;
    }
    else
        printf("Underflow Linked List");
    return temp;
}
Node* copy_list_recursive(Node *copy)
{
    if(copy == NULL)
        return NULL;

}
Node* merge_list(Node *list1, Node *list2)
{
    Node *head, *temp;
    head = list1;
    while(list1->next)
    {
        list1 = list1->next;
    }
    list1->next = list2;
    return head;
}
Node* print_reverse(Node *list)
{
    Node *first, *current, *temp;
    first = list;
    current = list->next;
    first->next = NULL;
    while(current)
    {
        temp = current->next;
        current->next = first;
        first = current;
        current = temp;
    }
    return first;
}
void print_list(Node *temp)
{
    while(temp!=NULL)
    {
        printf("%d ",temp->value);
        temp = temp->next;
    }
    printf("\n");
}
