#include <stdio.h>
int prodcifre(int);
int isprime(int);
int main(){
    int num, i=1, j=1;
    printf("inserisci un numero: ");
    scanf("%d",&num);
   
    while(i<num){
        j=1;
        while(j<=i){
            if((prodcifre(i)*prodcifre(j)==i+j)&&(isprime(i))){
                printf("%d,%d\n", i,j);}
                j++;
        }
        i++;
    }


    
    return 0;
}
int prodcifre(int n){
    int prod=1;
    int pow=10;
    while (n){
        
        prod*=(n%pow);
        
        n=(n-(n%pow))/pow;
       }

    return prod;
    }
int isprime(int n){
    for(int i=2; i<=n/2; i++){
        if(!(n%i)) return 0;
    }
    return 1;
}