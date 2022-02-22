#include <stdio.h>
int primo(int);

void main(){
int n, i=2, prm;

printf("inserisci un numero:\n");
scanf("%d",&n);
while(i<=n){
    
    if(!(n%i)&&primo(i)){printf("%d\t",i);
    n=n/i;
    i=1;
    
    

    }
    i++;
}










}

int primo(int num){
    int prim=0;
    int i=2;
    while(!prim&&(i<num)){
        if(!(num%i)){
            prim=1;
            }
        i++;
        } 
    if(!prim|| num<=2)return 1;
    else return 0;
}