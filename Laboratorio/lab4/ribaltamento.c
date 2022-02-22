#include <stdio.h>
#define N 31
void recrib(char*,char*);

void main(){
    char stringa[N];
    int ini=-1,fin=-1;
    printf(": ");
    scanf("%s",stringa);
    for (int i=0;i<N;i++){
        if (stringa[i]=='.'||stringa[i]=='\0'){
            ini=fin;
            fin=i;
            //printf("%c-%c\n",*(stringa+ini+1),*(stringa+fin-1));
            recrib(stringa+ini+1, stringa+fin-1);
            

        }

    }
    printf("%s\n",stringa);
    recrib(stringa,stringa+N-2);
    printf("%s\n",stringa);



}
void recrib(char* in,char* fi){
    char temp;
    if (in<fi){
        temp=*fi;
        *fi=*in;
        *in=temp;

        recrib(in+1, fi-1);
       // printf("%c", *in);

    }
}
