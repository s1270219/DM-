#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, num,head=0;

    printf("Tossing a coin...\n");
    for(i=o;i<3;i++){
        num = rand();
        if(num%2==0){
            printf("Round %d; Head \n",i+1);
            heads++;
        }else{
            printf("Round %d; Tail\n",i+1);
            tails++;
        }

    }
    printf("Heads: %d, Tails: %d\n",heads,tails);
    return 0;
    if(heads>tails){
     printf("I won\n");   
    }else{
     printf("I lost\n");   
    }
}
