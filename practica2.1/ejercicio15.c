#include <stdio.h>
#include <time.h>
#include <locale.h>

int main () {
   time_t rawtime;
   struct tm *info;
   char buffer[80];

   time( &rawtime );

   info = localtime( &rawtime );
    
    setlocale(LC_ALL, "es_ES");
   strftime(buffer,80,"%A, %d de %B de  %Y, %R", info);
   printf("%s\n", buffer );
  
   return(0);
}
