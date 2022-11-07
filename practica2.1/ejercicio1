#include <stdio.h>
#include <errno.h>
#include <unistd.h>

int main(){
    int a=setuid(0);
    if(a==-1){
        perror("Ha fallado");
    }
    return 1;
}
