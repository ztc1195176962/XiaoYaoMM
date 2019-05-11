#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef struct  List{
  int value;
 struct List* next;
}List;

List* GreatNewNode(int n)
{
  List* NewNode=(List *)malloc(sizeof(List));
  if(NewNode==NULL)
  {
    printf("申请失败\n");
    return NULL;
  }
  NewNode->value=n;
  NewNode->next=NULL;
  return NewNode;
}

void ListInit(List **Head)
{
  assert(Head);
  *Head=NULL;
}

void ListPushBack(List **Head,int val)
{
  if(*Head==NULL)
  {
    *Head= GreatNewNode(val);
  }
  else{
    List *str=*Head;
    while(str->next!=NULL)
    {
      str=str->next;
    }
    str->next=GreatNewNode(val);
  }   
}

void ListPopBack(List **Head)
{
  if(*Head==NULL)
  {
    return;
  }
  else if((*Head)->next==NULL)
  {
    free(*Head);
     *Head=NULL;
  }
  else{
    List* ptr=*Head;
    while(ptr->next->next!=NULL)
    {
       ptr=ptr->next;
    }
    free(ptr->next);
    ptr->next=NULL;
  }
}

void ListPushFront(List** Head,int val)
{
  List *ptr=GreatNewNode(val);
  ptr->next=*Head;
  *Head=ptr;
}

void ListPopFront(List **Head)
{
  List* ptr=NULL;
 if(*Head==NULL)
 return;
 else{
    ptr=*Head;
    *Head=ptr->next;
    free(ptr);
 }
}

int main()
{
  GreatNewNode(5);
  return 0;
}
