#include <stdio.h>
int main(){
    int num;
    printf("inserisci un numero :  ");
    scanf("%d", &num);
    printf("i divisori di %d sono: ",num);
    for (int i=1;i<=num/2; i++) {
        if (!(num%i))printf("%d  ", i);}

    
    return 0;}