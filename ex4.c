#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, num,head=0;

    char[8];
    printf("あんた誰？　\n");
    scanf("%s",str);
    printf("ハロー、%s\n",str);

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
     printf("%s won\n",str);   
    }else{
     printf("% lost\n",str);   
    }
}
