#include <stdio.h>
int main(){
    
    int tab;
    while (tab<2|| tab>12){
    printf("Tabelinna da ripassare:    ");
    scanf("%d", &tab);}
    for(int i =0; i<=10;i++){
        printf("%d X %d = %d\n", tab, i, tab*i);
    }
    
    return 0;}