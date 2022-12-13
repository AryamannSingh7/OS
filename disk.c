#include <stdio.h>
int main(){
   int initial,n;
    printf("enter the initial position of the head and the no. of tracks to be reached:");
    scanf("%d%d",&initial,&n);
    printf("enter the disk track numbers to be reached\n");
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int c=0,total=0;
    while(c!=n)
    { int d=10000,ind;
        for(int i=0;i<n;i++)
        { int l=initial-arr[i];
           if(l<0)
           l*=-1;
          if(l<d)
        {   d=l;
            ind=i;
           }
        }
        initial=arr[ind];
        arr[ind]=10000;
        total+=d;
        c++;
    }
    printf("The total amount is %d",total);
     return 0;
}
