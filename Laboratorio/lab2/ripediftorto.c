#include <stdio.h>


void main(){
char att;
int prec=1;

printf("inserisci una frase:\n");
do{
    scanf("%c",&att);
    if(att=='a'||att=='e'||att=='i'||att=='o'||att=='u')
        { printf("%cf%c",att,att);
                prec=0;    }
    else if(att=='r') {printf("v");
                prec=0;
}
    else if(att=='s') {printf("f");
                prec=0;}
    else if (att=='c'&& prec==1){printf("C");

                prec=0;}

    else if (att==' '){ printf("%c",att);
                prec=1;}
    else {printf("%c",att);
                prec=0;}

       
    

}while(att!='\0');

}
