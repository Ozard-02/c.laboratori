#include <stdio.h>
int padovanrec(int);
void main(){
int n, k=0, pad=0;
printf("inserisci numero: ");
scanf("%d", &n);

while (k<=n){
    if(padovanrec(k)==n) {pad=1; break;}
    k++;
    }
printf("numero%snella sequenza", pad? " ": " non ");


}
int padovanrec(int n){
    if (n==0||n==1||n==2) return 1;
    else return padovanrec(n-2)+padovanrec(n-3);
}