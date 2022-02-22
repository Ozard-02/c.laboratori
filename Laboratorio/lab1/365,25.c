#include <stdio.h>
int bisestile(int);
int main (){
int anno;
printf("inserisci un anno\n");
scanf("%d",&anno);
printf("L'anno %d da te inseito %se' bisestile\n",anno, bisestile(anno) ? "":"NON ");

    return 0;
}
int bisestile(int n){
    if (n<1582) return 0;
    else if(!(n%4)||!((n%100)||(n%400)))return 1;
    else return 0;
}