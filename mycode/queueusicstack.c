#include<stdio.h>
#define max 10
int top=-1;
int s1[10],s2[10];

int len(int a[])
{
    int i=0;
    while(a[i]!=0)
    {
        i++;
    }

    return i;
}
void push(int item,int a[])
{

    if(top==max-1)
        printf("overflow");
    else
       {
           top=top+1;
           a[top]=item;
       }
}

int pop(int a[])
{
    int k;
    if(top==-1)
    {
       printf("stack underflow");
    }

    k=a[top--];
    return k;

}

void display()
{
    int i;
    for(i=0;i<max;i++)
    {
        printf("%d\t",s1[i]);
    }
}

int enqueue(int x,int s1[])
{
    push(x,s1);
}
int dequeue(int s[],int s2[])
{
    if(len(s2)==0)
    {
        if(len(s)==0)
        {
            printf("queue is empty");
            //exit
        }
        else
        {
            while(len(s1)!=0)
            {
                int x=pop(s);
                push(x,s2);

            }
        }
    }
    return pop(s2);
}

void main()
{
    enqueue(1,s1);
    enqueue(2,s1);
    enqueue(3,s1);

    display();

    dequeue(s1,s2);
    dequeue(s1,s2);
    dequeue(s1,s2);
}
