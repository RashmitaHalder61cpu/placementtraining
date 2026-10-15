#include<stdio.h>
int main()
{
    int n;
    int notes;
    printf("Enter Sample input:\n");
    scanf("%d",&n);
    int dem[]={100,50,20,10,5,2,1};
    for(int i=0;i<7;i++)
    {
        if(n==0){
            break;
        }
        notes+=n/dem[i];
        n%=dem[i];
    }
    printf("Minimum number of notes:%d\n",notes);
}