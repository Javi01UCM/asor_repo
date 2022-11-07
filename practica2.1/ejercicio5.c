#include <stdio.h>
#include <errno.h>
#include <unistd.h>
#include <sys/utsname.h>


int main(){
    struct utsname buffer;
    uname(&buffer);
    printf("system name = %s\n", buffer.sysname);
    printf("node name   = %s\n", buffer.nodename);
    printf("release     = %s\n", buffer.release);
    printf("version     = %s\n", buffer.version);
    printf("machine     = %s\n", buffer.machine);
    return 1;
}
