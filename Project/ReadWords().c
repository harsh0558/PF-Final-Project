void ReadWords(char filename[]){
    char str[20];
    FILE *ptr;
    ptr = fopen(filename,"r");
    if(ptr == NULL){
        printf("file not found");
    }else{
        while(fscanf(ptr,"%s",str) != EOF){
            strcpy(WordArray[NumberWords], str);
            NumberWords++;
        }
   }
   fclose(ptr);
}
