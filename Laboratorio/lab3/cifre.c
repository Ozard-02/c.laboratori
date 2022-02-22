#include <stdio.h>

void main(){
int num,pow=1,ordine=0,resto, vario=1;
int j, num2,ordine2;
printf(": ");
scanf("%d",&num);
while (pow<=num){
    pow*=10;
    ordine+=1;
    }
pow=10;
for (int i=1;i<=ordine; i++){
    resto=num%pow;
    num=(num-(num%pow))/10;
    num2=num;
    ordine2=ordine-i;
    for (int j=1;j<=ordine2; j++){
        if(resto==num2%pow){vario=0;}
        num2=(num2-(num2%pow))/10;
    


    }
    if(vario==0)break;


}
printf("numero %s",vario ? "vario":"ripetitivo");



}