#include<stdio.h>

int main(){
    FILE *fp;
    char ch[50];
    long int size=0;
    printf("enter the file name\n");
    scanf("%s", ch);
    fp=fopen(ch,"r");
    fseek(fp,0,SEEK_END);
    size=ftell(fp);
    printf("%ld bytes\n", size);
    fclose(fp);
    return 0;
}
                                                // A 13 C
