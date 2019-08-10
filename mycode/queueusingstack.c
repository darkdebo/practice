#include<stdio.h>
#define max 10
int top=-1;
int s[10],s2[10];

void push(int item)
{

    if(top==max-1)
        printf("overflow");
    else
       {
           top=top+1;
           s[top]=item;
       }
}

int pop()
{
    int k;
    if(top==-1)
    {
       printf("stack underflow");
    }

    k=s[top--];
    return k;

}
//second stack start
void push1(int item)
{

    if(top==max-1)
        printf("overflow");
    else
       {
           top=top+1;
           s2[top]=item;
       }
}


int pop1()
{
    int k;
    if(top==-1)
    {
       printf("stack underflow");
    }

    k=s2[top--];
    return k;

}



void display()
{
    int i;
    for(i=0;i<max;i++)
    {
        printf("%d\t",s[i]);
    }
}

void display1()
{
    int i;
    for(i=0;i<max;i++)
    {
        printf("%d\t",s2[i]);
    }
}


void main()
{
    int i;
    //int s2[10];

    scanf("%d",&i);

    switch(i)
    {
        case 1:push(1);
               push(2);
               push(3);
               break;


        default:printf("no operation possible");
    }


    for(i=0;i<3;i++)
    {
        int t=pop();
        printf("%d\n",t);
    }

    display();
    display1();



}
