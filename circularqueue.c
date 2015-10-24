#include <stdio.h>
#include <conio.h>
#include <conio.h>
# define max 5

void insert(int[],int*,int*);
void serve(int[],int*,int*);
void disp(int[],int,int);

void main()
{
int a[max],n,front=-1,rear=-1,*p,*q;
p=&front;
q=&rear;

  do
  {
    printf(" MENU \n 1-INSERT A NUMBER\n 2-DELETE A NUMBER \n 3-DISPLAY \n ENTER YOUR CHOICE  \n");
    scanf("%d",&n);
    switch(n)
    {
        case 1:

                insert(a,q,p);
                break;
        case 2:
               serve(a,p,q);
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



void insert(int a[],int *r,int *f)
{
    int n;

    if(*r==max-1 && *f==0 || *r+1==*f)
    printf("overflow");

    else
    {

         printf("enter number");
         scanf("%d",&n);
            if (*f==-1)
               *f=*f+1;

        if(*r==max-1)
       {

        *r= 0;
        a[*r]=n;

       }
    else
       a[++*r]=n;

    }

}






void serve(int a[],int *f,int *r)
{
    if( *f==-1 )
    {
      printf("There is no element in the queue to be served.");
    }
    else
    {
        if(*f==*r)
        {
            printf("served no.=%d",a[*f]);
            *f=*r=-1;

        }

        else
        {     if(*f==max-1)
                {

                    printf("served no.=%d",a[*f]);
                    *f=0;

                }
            else
                {

                printf("served no.=%d",a[*f]);

                 *f=*f+1;
                }
        }
    }

}


void disp(int a[],int f,int r)

{  int i;


    if(f>=r)
     {
          if(f==r+1 || f==-1 && r==-1)
             printf("circular queue is empty.");
          else
            {
                for(i=f;i<=r;i++)
                    {

                      printf(" \t %d ",a[i]);
                      f++;

                    }
                    f==0;

                    for(i=f;i<=r;i++)
                      printf(" \t %d ",a[i]);

           }
     }
     else
     {
        for(i=f;i<=r;i++)
        printf(" \t %d ",a[i]);
     }
}







