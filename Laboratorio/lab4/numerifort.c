#include <stdio.h>
void sx( int arr[]);
void main(){
int array[199];
int ordine=1, elemento;


for (int i=0; i<100;i++){
    array[i]=i*2+1;
}
while(elemento<100){
    elemento=array[ordine];
    for(int i=0; i<199;i++){
        if (i%elemento==elemento-1){
            array[i]=0;
            
            

        }
    }
    
    sx(array);
    ordine+=1;

       
    


}

    for(int i=0; i<199;i++){
      
        printf("%d  ",array[i]);
        if (array[i]==195)break;   

        }

}

void sx( int arr[]){
    int j=0;
    int i;
    while(j<198){
        if (arr[j]==0){
            i=j;
            while(i<198){
                arr[i]=arr[i+1];
                i++;
            }
        }
        j++;
    }
}
