
# include <stdio.h>
# include <string.h>
# include <ctype.h>
char codifica(char, int);
void main() {
int offset;
char messaggio[50];
printf("inserisci offset ");
scanf("%d", &offset);

printf("inserisci messaggio ");
scanf("%s", messaggio);

int lun_=0;

int i=0;
while (messaggio[i]!='\0'){
    printf("%c",messaggio[i]);
    messaggio[i]=codifica(messaggio[i], offset);
    
    ++i;



}
i=0;
while (messaggio[i]!='\0'){
   
    printf("%c",messaggio[i]);
    i+=1;



}}
char codifica(char let, int offset){

let=(char)((offset%('z'-'a'+1)+('z'-'a'+1))%('z'-'a'+1)+let);
    return let;
} 