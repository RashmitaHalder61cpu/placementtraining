#include<stdio.h>
 
int mcCarthy(int n){
    if(n>100){
        return n-10;
    }
    else{
        return mcCarthy(mcCarthy(n+11));
    }
}
int main()
{
    printf("%d",mcCarthy(100));
}