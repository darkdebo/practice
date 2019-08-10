#include<stdio.h>
#define max 10

int q1[10],q2[10],front=-1,rear=-1;

int len(int a[])
{
    int i=0;
    while(i!=0)
    {
        i++;
    }
    return i;
}
int enqueue(int item,int a[])
{
    if(front==max)
    {
        printf("queue overflow");
    }
    else
    {
        front=front+1;
        rear=rear+1;
    }
    a[rear]=item;
    rear++;
}

int dequeue(int a[])
{
    if(front==-1)
    {
        printf("queue underflow");
    }
    int k=a[front++];
    return k;

}

void push(int q1[],int q2[],int x)
{
    if(len(q1)==0)
    {
        enqueue(x,q2);
    }
    else
    {
       enqueue(x,q1);
    }
}

   int pop(int q1[],int q2[])
   {
       int x;
       if(len(q1)==0)
       {
           if(len(q2)==0)
           {
               printf("stack is underflow");
           }

       else
        {
       while(len(q2)!=1)
        {
            x=dequeue(q2);
            enqueue(x,q1);
        }
        return dequeue(q2);
        }
    }

    while(len(q1)!=0)
    {
        x=dequeue(q1);
        enqueue(q2,x);
    }

    return dequeue(q1);
}


void main()
{
    push(q1,q2,1);
    push(q1,q2,2);
    push(q1,q2,3);
    push(q1,q2,4);


     pop(q1,q2);
     pop(q1,q2);
     pop(q1,q2);
     pop(q1,q2);


}

