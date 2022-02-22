#include <stdio.h>
void main(){
int att=1,prec, max=1, maxx=1;
printf("inserisci una sequenza\n");
while (att){
    scanf("%d",&att);
    if(att>prec)max++;
                
    else{ if(max>maxx)maxx=max;
        max=1;}
    prec=att;






}
printf("lung. max = %d", maxx);

}