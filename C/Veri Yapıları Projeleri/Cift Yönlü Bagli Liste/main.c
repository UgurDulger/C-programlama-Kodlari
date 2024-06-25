#include <stdio.h>
#include <stdlib.h>

typedef struct n{

    int x;
    struct node *next;
    struct node* prev;
}node;

void Bastir(node*root){
    printf("%d",root->x);
    root=root->next;
    while(root != NULL){
        printf("%d ",root->x);
        root=root->next;
    }
    printf("\n");
}
node* Ekle(node* root,int data){
    node * iter = root;
    while(iter->next != NULL){
        iter=iter->next;
    }
    iter->next=(node*)malloc(sizeof(node));
    iter->next->next=NULL;
    iter->next->prev=iter;
    iter->next->x =data;

}
node*EkleSirali(node*root,int data){

    if(iter->x > data){
        node* temp =(node*)malloc(sizeof(node));
        temp->x = data;
        temp->next=root;
        root->prev=temp;
        temp->prev =NULL;
        return temp;
    }
    node * iter = root;
    while(iter->next !=NULL && iter->next->x < data){
        iter = iter->next;
    }

    node*temp = (node*)malloc(sizeof(node));
    temp->x=data;
    temp->next=iter->next;
    iter->next=temp;

    temp->prev=iter;
    if(temp->next != NULL){
        temp->next->prev=temp;
    }
    return root;
}

int main()
{

    node*root;
    root=Ekle(root,20);
    root=EkleSirali(root,15);
    root=EkleSirali(root,25);
    root=EkleSirali(root,19);

    Bastir(root);
}
