#include <stdio.h>
#include <unistd.h>

int main(){
    while(1){
        for (int i =0; i<=1000; i++){
            printf("%d\n", i);
        }
        printf("Hello World\n");
        sleep(2);
        printf("I'm going to count to 1000 HAHAHAHA\n");
        sleep(1);
    }
    return 0;
}
