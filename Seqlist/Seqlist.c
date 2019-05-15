#pragma once
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>

typedef int SDataType;

typedef struct Seqlist{
  SDataType *array;
  int size;

  int capacity;  // 
}Seqlist;


static void CheckCapacity(Seqlist *seqlist)
{
  assert(seqlist !=NULL);
  assert(seqlist->array!=NULL);
  assert(seqlist->size<=seqlist->capacity)

    if(seqlist->size<seqlist->capacity)
    {
      return ;
    }

  int capacity=2*seqlist->capacity;
  SDataType *array=(SDataType *)malloc(sizeof(SDataType)*capcacity);

  assert(array);

  for(int i=0;i<seqlist->size;i++)
  {
    array[i]=seqlist->array[i];
  }

  free(seqlist->array);
  seqlist->array=array;
}

void SeqlistInit(Seqlist *seqlist,int capacity)
{
  assert(seqlist!=NULL);
  
  seqlist ->array=(SDataType *)malloc(sizeof(SDataType)*capacity);

  assert(seqlist->array);

  seqlist->size=0;
  seqlist->capacity=capacity;
}




void SeqlistDestroy(Seqlist *seqlist)
{
  assert(seqlist !=NULL);

  free(seqlist->array);
}

void SeqlistPushBack(Seqlist *seqlist,SDataType value)
{
  assert(seqlist!=NULL);
  assert(seqlist->array!=NULL);
  seqlist->array[seqlist->size]=value;
  seqlist->size++;
}

void SeqlistPushFront(Seqlist *seqlist,SDataType value)
{
  assert(seqlist !=NULL);
  assert(seqlist->array!=NULL);

  for(int i=size;i>0;i--)
  {
    seqlist->array[i]=seqlist->array[i-1];    //i是空间下标
  }

  seqlist->array[0]=value;
  seqlist->size++;
}

void SeqlistPopBack(Seqlist *seqlist)
{
  assert(seqlist !=NULL);
  assert(seqlist->array!=NULL);

  assert(seqlist->size>0);

  seqlist->size--;
}


void SeqlistPopFront(Seqlist *seqlist)
{
  assert(seqlist!=NULL);
  assetr(seqlist->array!=NULL);

  assert(seqlist->size>0)

  for(int i=1;i<size;i++)
  {
    seqlist->array[i-1]=seqlist->arra[i];
  }
  seqlist->size--;
}

void SeqlistInsert(Seqlist *seqlist,int value,int pos)
{
 assert(seqlist!=NULL);
 assert(seqlist->array!=NULL);


 for(int i=seqlist->size;i>pos;i--)
 {
   seqlist->array[i]=seqlist->array[i-1];
 }

 seqlist->array[pos]=value;
 seqlist->size++;
}

void SeqlistErase(Seqlist *seqlist,int pos)
{
  assert(seqlist!=NULL);
  assert(seqlist->array!=NULL);
  assert(seqlist->size>0);
  assert(pos>=0 && pos<=seqlist->size);
  for(int i=pos;i<seqlist->size;i++)
  {
    seqlist->array[i]=seqlist->array[i+1];
  }
  seqlist->size--;
}


int main()
{
  Seqlist seqlist;
  int capacity=100;
  SeqlistInit(&seqlist,capacity);

  SeqlistDestroy(&seqlist);

  int value=10;
  SeqlistPushBack(&seqlist,value);

  SeqlistPopBack(&seqlsit);

  SeqlistPushFront(&seqlist,value);

  SeqlistPopFront(&seqlist);

  SeqlistInsert(&seqlist,value,int pos);

  int pos=2;
  seqlistErase(&seqlist,pos);


  return 0;

}

