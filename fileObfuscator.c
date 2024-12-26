#include<stdio.h>
#include<stdlib.h>

void transform(FILE* file, FILE* encrypted){
  int c;
  while((c =fgetc(file)) != EOF){
    c = ~c;
    fputc(c, encrypted);
  }
}

int main(int argc, char *argv[])
{
  if(argc!=2) printf("Provide a file");
  else {
    char* filename = argv[1];
    FILE* file = fopen(filename, "r");
    FILE* encrypted = fopen("crypt.out", "w");
    
    transform(file, encrypted);

    fclose(file);
    fclose(encrypted);
  }

}
