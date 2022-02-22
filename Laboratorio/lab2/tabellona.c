#include <stdio.h>


void main(){ 

 int n,k;
 int i,j;

    do {
    printf("inserisci 2 numeri separati da - : ");
    scanf("%d-%d",&n,&k);

    }while(n<0&&k<0);

    for (i=1; i<=n;i++){
          printf("\n %d:",i);
        for(j=0;j<=k;j++){
            printf("\t%d",i*j);
        }
      
    }











}