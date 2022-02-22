#include <stdio.h>
#include <math.h>
typedef struct {int x;
                int y;} punto;
float percent= 5/100;
int isoscele(punto triangolo[3]);
int equilatero(punto triangolo[3]);

void main(){
int i=0;
punto triangolo[3];
punto rettangolo[2];
while (i<3){
    printf("inserisci %d^ punto:",i+1);
    scanf("%d %d",&triangolo[i].x, &triangolo[i].y);
    // printf("triangolo[%d].x.y=%d %d \n",i, triangolo[i].x, triangolo[i].y );
    i++; 
}
printf("%s",isoscele(triangolo)? "isoscele":"non isoscele");

}

int isoscele(punto triangolo[3]){

float lunghezza[3];
lunghezza[0]=sqrt((triangolo[0].x-triangolo[3].x)^2+(triangolo[0].y-triangolo[3].y)^2);
for (int i =1; i<3; i++){lunghezza[0]=sqrt(
    (triangolo[i].x-triangolo[i-1].x)^2+(triangolo[i].y-triangolo[i-1].y)^2);}
for (int i=0;i<2;i++){
    for(int j=0;j<3;j++){
        printf("%f,%f\n", lunghezza[i],lunghezza[j]);
        if (lunghezza[i]==lunghezza[j])return 1;
        }
    }
return 0;






}