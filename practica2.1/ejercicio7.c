#include <unistd.h>
#include <stdio.h>

int main() {
	printf("Maximum number of links: %d\n",pathconf("ejercicio7.c",_PC_LINK_MAX));
    printf("Maximum path size: %d\n",pathconf("ejercicio7.c",_PC_PATH_MAX));
    printf("Maximum name size: %d\n",pathconf("ejercicio7.c",_PC_NAME_MAX));
	return 0;
}
