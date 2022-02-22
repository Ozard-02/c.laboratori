#include <stdio.h>

void main(){
int abs=0;
char car;
printf(": ");
while(car!='.'){
scanf("%c",&car);
if (car=='(') abs+=1;
else if(car==')') abs-=1;
}
printf("la sequenza è %s", !abs ? "corretta": "scorretta");





}