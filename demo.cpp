#include<stdio.h>
#include<conio.h>
//cau truc node
typedef struct Node{
int data;
struct Node*prev;
struct Node*next;
}Node;
//ham tao node moi
Node* createnode(int data){
Node*newNode=(Node*)malloc(sizeof(Node));
if(newNode==NULL){
printf("khong the cap phat bo nho");
exit(1);
}
newnode->data=data;
newNode->prev=NULL;

newnode->next=NULL;
return newNode;
}
