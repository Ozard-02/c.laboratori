 #include <stdio.h>
 #define N 8
void main (){
int value=0,next=0, trovato=0;
int v1[N]={3,-3,5,6,2,4,2,11}, v2[N]={5,-6,7,6,2,4,2,9}; 
for(int i=0;i<8;i++){
    int home=v2[i];
    value=0;
    next=v2[home];
    while(value!=8){
        if (next<0||next>7)break;
        next=(v2[next]);
        value+=1;
        if (next==home)trovato=1;
        

    }

}
printf("finito, il vettore è %sciclico", !trovato? "a":"");
  }