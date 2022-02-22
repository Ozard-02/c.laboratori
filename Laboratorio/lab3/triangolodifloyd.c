#include <stdio.h>

void main(){
int num, max;
float row=1;
printf(": ");
scanf("%d",&num);
max=num*num/2+num/2;
row=num;
/* for (int i=1;i<=max;i++){
    printf("%d ",i);
    if(i==(row*row/2+row/2)){
        printf("\n");
        row+=1;}
}*/
for (int i= (row*row/2+row/2)-row+1;i<=row*row/2+row/2; i++){
    printf("%d ",i);
    if(i==(row*row/2+row/2)){
        printf("\n");
        row-=1;
        i=(row*row/2+row/2)-row;
    }


}






}