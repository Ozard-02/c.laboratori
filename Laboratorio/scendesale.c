# include <stdio.h>
void effe0(int);
void recorsived(int, int);
void recorsiveu(int, int);
int main(){

    int n;
    printf("inserisci un intero n \n");
    scanf("%d",&n);
    effe0(n);

    return 0;
}

void effe0(int n){
    int m=n;
    for(n; n>=0;n--){
    if (n==0){printf(".");}
    int r=0;
    for(r;r<n;r++){
    
        printf("%d",n);
    }
    }
    
    for(n; n<=m;n++){
    int r=0;
    for(r;r<n;r++){
    
        printf("%d",n);
    }
    
    }




}
