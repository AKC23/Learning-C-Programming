#include<stdio.h>
#include<math.h>
#include<stdlib.h>

typedef struct node Node;

Node *create_node(int item,Node *next)
{
    Node *new_node = (Node *) malloc (sizeof(Node));

    if(new_node == NULL)
    {
        printf("Error! Could not create a new note\n");
    }

    new node--> data = item;
    new node--> next = next;

    return new_node;
}



int main()
{
    Node *n;
    n = create_node(10,NULL);
    printf("Data = %d\n",n-->data);

    return 0;
}
