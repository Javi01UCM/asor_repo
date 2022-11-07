#include <stdio.h>
#include <errno.h>
#include <unistd.h>

int main(){
    int a=setuid(0);
    if(a==-1){
        printf("ERROR(%d): %s\n", a, strerror(a));
    }
    return 1;
}
