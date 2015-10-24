#include <stdio.h>
#include <conio.h>
# define max 5

int insert(int[],int);
int serve(int[],int,int);
void disp(int[],int,int);

void main()
{
int a[max],n,front=-1,rear=-1;

  do
  {
    printf(" MENU \n 1-INSERT A NUMBER \n 2-DELETE A NUMBER \n 3-DISPLAY \n ENTER YOUR CHOICE  \n");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
                rear=insert(a,rear);
                if (front==-1)
                front++;
                break;
        case 2:
               front=serve(a,front,rear);
               if(front==-1)
               rear=-1;
                break;
        case 3:
               disp(a,front,rear);
               break;

        default :
                printf(" \n wrong choice \n");

    }
     printf("\n press 1 to continue");
    scanf("%d",&n);


  }while(n==1);


getch();
}



int insert(int a[],int r)
{
    int n;
    if(r==max-1)
    printf("overflow");
    else
    {
        printf("enter number");
        scanf("%d",&n);
        a[++r]=n;

    }

   return (r);
}

int serve(int a[],int f,int r)
{
    if(f==r+1|| (f==-1 && r==-1))
    {
        printf("underflow");
        f=-1;
    }

    else
    {
        printf("served no.=%d",a[f]);
        f++;
    }
    return(f);



}

void disp(int a[],int f,int r)

{  int i;
    if(f==-1||f>r)
        printf("queue is empty");

    else
    {
        for(i=f;i<=r;i++)
        printf(" \t %d ",a[i]);
    }
}

