#include <stdio.h>
#include <math.h>

void main(){
int num;
printf(": ");
scanf("%d",&num);

for (int i=1; i<=sqrt(num)+2;i++){
 
    if(i==(int)sqrt(num)){
        printf("NON SCOMPONIBILE"); 
        break;}
    for(int j=1;j<=i;j++){
        if(num==j*j+i*i){printf("->%d-%d\n",i,j);}
    }
}








}