#include <stdio.h>
#define N 5

void main(){
int mat[N][N];
int r=0,c=0, inv,k, i=1;
int y,x;
for(r=0;r<N;r++){
    for( c=0;c<N;c++){
        mat[r][c]=i;
        i++;
        printf("%d\t",mat[r][c]);
        


        }
    printf("\n");
    }

printf("cella da mantenere? [r][c] ");
scanf("%d-%d",&y,&x);
inv=mat[y-1][x-1];
for(r=0;r<N;r++){
    for( c=0;c<N;c++){
   
        if(r==y-1&&c==x-1){mat[r][c]=mat[r][c];}
        else if(c%N==(x-1)%N){mat[r][c]=(inv*2);}
        else if(r<y-1||(r==y-1&&c<x-1)){mat[r][c]=mat[r][c]+(N*N-inv);}
        else {mat[r][c]=mat[r][c]-inv;}
        printf("%d\t",mat[r][c]);
        


        }
    printf("\n");
    }

}