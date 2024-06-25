#include <stdio.h>
#include <stdlib.h>

 typedef struct n{
   int x;
   struct n* next;
}node;

node* Olustur(){
    node * temp = (node*)malloc(sizeof(node));
    temp ->next=NULL;
    return temp;
}
void Bastir(node*root){

    while(root!=NULL){
    printf("%d ",root->x);
    root=root->next;
    }
    printf("\n");
}
node*Ekle(node*root,int data){
    if(root==NULL){
        root=(node*)malloc(sizeof(node));
        root->x=data;
        root->next=NULL;

        return root;
    }
    node*iter=root;
    while(iter->next != NULL){
        iter=iter->next;
    }
    iter->next=(node*)malloc(sizeof(node));
    iter->next->x=data;
    iter->next->next=NULL;
    iter=iter->next;


    return root;

    }
node* SiraliEkle(node*r,int data){
	if(r==NULL){        //linklist boþsa
		r=Olustur();
		r->x=data;
		return r;
	}
	if(r->x >data){        //ilk eleman küçük durumu , root deðiþiyor.
        node*temp = (node*)malloc(sizeof(node));
        temp->x =data;
        temp->next=r;

        return temp;
	}
	node*iter=r;
	while(iter->next !=NULL && iter->next->x < data){
            iter=iter->next;
	}
	node*temp=(node*) malloc(sizeof(node));
	temp->next = iter->next;
	iter->next=temp;
	temp->x=data;
	return r;

}
node * ArayaEkle(node*root,int data,int indis){

    node*iter =root;
    int i;
    for(i=0;i<indis;i++){
        iter=iter->next;
    }
    node*temp=(node*)malloc(sizeof(node));
    temp->next=iter->next;
    iter->next=temp;
    temp->x=data;

    return root;
}

node* Silme(node*r,int data){

    node*temp;
    node*iter=r;

    if(r->x == data){ //baþtan sil
        temp=r;
        r=r->next;
        free(temp);
        return r;
    }
    while(iter->next != NULL && iter->next->x !=data){
        iter=iter->next;
    }
    if(iter->next==NULL){       //sayinin kontolü
        printf("Sayi Bulunamadi...\n");
        return r;
    }
    temp = iter->next;          //ortadan ve sondan sil
    iter->next=iter->next->next;
    free(temp);
    return r;

}
void Arama(node * root,int data){
    node* iter=root;
    while(iter->next != NULL){
        iter=iter->next;
        if(iter->x == data){
            printf("%d sayisi bulundu.\n",data);
            break;
        }
        if(iter->next==NULL){
            printf("%d sayisi bulunamadi...\n",data);
    }

    }

}



int main()
{
   node * root;
   root=NULL;

   root=Ekle(root,20);
      root=Ekle(root,10);
         root=Ekle(root,30);
    root=SiraliEkle(root,100);
        root=SiraliEkle(root,150);
            root=SiraliEkle(root,500);
                root=SiraliEkle(root,450);
    root=ArayaEkle(root,55,2);
        root=ArayaEkle(root,61,4);
            root=ArayaEkle(root,77,1);
                root=ArayaEkle(root,88,3);
    Bastir(root);

    root=Silme(root,20);
        root=Silme(root,500);
            root=Silme(root,88);
    Bastir(root);

    Arama(root,80);
        Arama(root,450);
            Arama(root,61);
    Bastir(root);


}
