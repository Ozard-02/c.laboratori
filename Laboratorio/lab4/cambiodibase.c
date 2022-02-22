#include <stdio.h>
#include <math.h>

int ckvalori(int,int);
int cambiobase(int, int);
void main(){
    int b1=0,b2=0;
    int n1,n2;
    int valori=0;
    while((b1<2||b1>10)&&(b2<2||b2>10)){
        printf("inserisci due basi b1-b2:\n");
        scanf("%d-%d",&b1,&b2);
        }
    while(!valori){
        printf("inserisci numero:\n");
        scanf("%d",&n1);
        valori=ckvalori(n1,b1);
    }
    
    valori=cambiobase(valori,b2);
    printf("\n%d",valori);


}







int ckvalori(int n, int b){
    int esp=0;
    int somma=0;
    while(n){
        if (n%10>=b)return 0;
        somma+=(n%10)*pow(b, esp);
        n=(n-n%10)/10;
        esp++;
        
    }
    return somma;
}
int cambiobase(int n,int b){
    int esp=0;
    int somma=0;
    while(n){
        somma+=(n%b)*pow(10, esp);
        n=(n-n%b)/b;
        esp++;
        
    }
    return somma;

}