#include<stdio.h>
struct node
{
    int a;
    struct node* link;

};
void print(struct node* n)
{
    while(n!=NULL){
        printf("| %d |->",n->a);
    n=n->link;
    }
    printf("NULL");

}

void append()
{


}
void main()
{
    struct node* root=NULL;
    struct node* sec=NULL;
     struct node* th=NULL;
    root=(struct node*)malloc(sizeof(struct node));
    sec=(struct node*)malloc(sizeof(struct node));
    th=(struct node*)malloc(sizeof(struct node));

     printf("Enter the 1st value\n");
     scanf("%d",&root->a);
     root->link=sec;

     printf("Enter the 2nd value\n");
     scanf("%d",&sec->a);
     sec->link=th;
     printf("Enter the 3rd value\n");
     scanf("%d",&th->a);
     th->link=NULL;

     printf("\n-----------------------------------------------------\n");
     print(root);

}


