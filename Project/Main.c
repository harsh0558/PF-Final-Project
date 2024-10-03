#include <stdio.h>
#include <string.h>

char WordArray[100][20];
int NumberWords=0;

int main(){
    
    char filename[100];
    int i;
    printf("enter file name: ");
    scanf("%s",filename);
    ReadWords(filename);
    play();
    CouldNotAnswer();
}
