/*Single lonked lidt operation*/


#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* link;
};


int len;
struct node* root = NULL;

void append(void);
void addatbegin(void);
void addatafter(void);
int length(void);
void display(void);
void delet(void) ;


int main(){

int ch;

while(1){
printf("Single linked list operation: \n ");
printf("1. Append\n");
printf("2. Adatbegin\n");
printf("3.Addatafter\n");
printf("4.Length\n");
printf("5.Display\n");
printf("6.Delet\n");
printf("7.Quit \n");

printf("Enter your choice : \n");
scanf("%d",&ch);

switch(ch)
{
    case 1 : append();
    break;
    case 2 : addatbegin();
    break;
    case 3 : addatafter();
    break;
    case 4 : len = length();
    printf("length is : %d\n\n",len);
    break;
    case 5 :display();
    break;
    case 6 :delet();
    break;
    case 7 : exit(1);
    default: printf("Invalid input \n");
}

}
return 0;
}

void append(){
    struct node* temp;
    temp = (struct node*) malloc(sizeof(struct node));
    printf("Enter node data : ");
    scanf("%d",&temp->data);
    temp->link = NULL;
    if(root==NULL) // lst is empty
    {
        root=temp;
    }
    else{
        struct node* p;
        p = root;
        while(p->link != NULL){
            p=p->link;

        }
        p->link = temp;
    }

}

int length(){
    int count = 0;
    struct node* temp;
    temp = root;
    while(temp != NULL){
    count++;
     temp=temp->link;

    }
    return count;
    }

void display(){
    struct node * temp;
    temp =root;
    if(temp==NULL){
        printf("List is empty\n\n");
    }
    else{
        while(temp!=NULL){
            printf("%d-->",temp->data);
            temp=temp->link;
        }
        printf("\n\n");

    }

}

void addatbegin(){

}
void addatafter(){

}

void delet(){

}