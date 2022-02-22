#include <stdio.h>
#include <string.h>
int amicabili(int);
void main(){
    int m;
    printf("inserisci un numer0:\n");
    scanf("%d",&m);
    for (int i=1; i<=m; i++){
        for(int j=1; j<i; j++){
            if((i==amicabili(j))&&(j==amicabili(i))){
                printf(" %d-%d sono amicabili\n",i,j);
                }
        }
    }


}

int amicabili(int n){
    int sum=0;
    for(int i=1;i<n;i++){
        if(!(n%i)){
            sum+=i;
           
        }

    }
    return sum;

}