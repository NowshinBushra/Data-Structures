#include<stdio.h>
int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
   // int s=n-2, k=2;
   // int r=n, c=n;
    int a[r][c];
    for(int i=1; i<=r; i++)
        {

         for(int j=1; j<=c; j++){
            if(i==j){
                printf("1");
            }
            if(i+j==r-1){
                printf("1");
            }
            else printf("0");
        }
        //printf("\n");
        /*for(int j=1; j<=k; j++){
            if(i%2==1){
                printf("#");
            }
            else{
                printf("-");
            }
         }*/

    }

    return 0;
}


