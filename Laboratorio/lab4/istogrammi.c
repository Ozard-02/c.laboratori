#include <stdio.h>

void main(){
    int v1[10]={-3,5,3,9,-7,13,2,9,-5,-1};
    int max=v1[0],min=v1[0];
    int somma=0,media=0;;

    for (int i=0;i<10;i++){
        if(v1[i]>max)max=v1[i];
        if(v1[i]<min)min=v1[i];
        somma+=v1[i];


    }
    media=somma/10;
    for (int i=max;i>=min;i--){
        printf("\n%d\t",i);
        for (int j=0;j<10;j++){
         
            if (i==media)printf("======");
            else if (i==0)printf("------");
            else if (i>0&&((+i-v1[j])<=0))printf(" **  ");
            else if (i<0&&((-i+v1[j])<=0))printf(" **  ");
            else printf("     ");
        
        }

    }



}