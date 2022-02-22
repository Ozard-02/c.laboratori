#include <stdio.h>


void main(){
    int num=0;
    int primo=0;
    int i=2;
    while (num<1){
    printf("nserisci un  numero: ");
    scanf("%d",&num);
    }
    if (num<=2) printf("%d è un numero primo", num);
    else {while(!primo&&(i<num)){
        if(!(num%i)){
            primo=1;
            }
        i++;
        } 
    if(!primo)printf("il numero è primo");
    else printf("il numeor non è primo");}

}
