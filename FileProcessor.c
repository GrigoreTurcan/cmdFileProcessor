#include <stdio.h>

main() {
   FILE *fp;

   char buff[255];

   fp = fopen("C:\\CPROGRAMS\\test2.txt", "w+");
   
   fprintf(fp, "Ceva nou fprintf...\n");
   fputs("Ceva nou fputs...\n", fp);
   fputs("Something new 3...\n", fp);
   
   rewind( fp );
   
   int i = 0;
   
   while(  fgets(buff, 255, fp) )
    { i++; printf("%d: %s", i, buff ); }

   fclose(fp);

}
