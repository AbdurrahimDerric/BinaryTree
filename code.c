#include <stdio.h>
#include <stdlib.h>


 typedef struct node
{
  int number;
  struct node *leftNode;
  struct node *rightNode;
};

node* createNode(int number)
{
    node *pnew = (node *)malloc(sizeof(node));
    pnew ->number = number;
    pnew->leftNode=null;
    pnew->rightNode = null;

}

node* toTree(node* head, int arr[30],int n, int i,int number )
{
    if (i <n)
      {


              node *pnew= createnode(number);
              head = pnew;
              head->leftNode = toTree(head, arr[30],n, i*2+1,arr[i]); //i*2+1 sol dugum icin
              head->rightNode = toTree(head, arr[30],n,i*2+2, arr[i] ); // i*2 +2 sag dugum icin
      }
      return head;
}

void preOrder(node* head, int *arr)
{
    //dizi pointer alip icinde binary agaci saklar
     static i =0;
    if(head!=null)
    {
        *(arr +i) =head->number;
        preOrder(head->leftNode);
        preOrder(head->rightNode);

    }

}

int main()
{
     int n;
    int j,i=0;

    printf("enter number of elements \n");
      scanf("%d",&n);

     int arr[30];
     for (j=0;j<n;j++)
     {
         printf("enter %d.th element of array \n",j);
      scanf("%d",&arr[j]);
     }


  node *head = toTree(head,arr[30],n,i,arr[0]);
      int array[30];
      int arrayp = array;
      preOrder(head,arrayp); //dizide saklar binary agaci
     for (j=0;j<n;j++)
     {
         printf(" %d ",array[j]);

     }

    return 0;
}
