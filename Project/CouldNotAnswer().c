void CouldNotAnswer(){
    int i;
    printf("\t THE WORLDS YOU COULD NOT GUESS\n");
    for(i=1;i<=NumberWords-1;i++){
        if(strcmp(WordArray[i],"") != 0){
            printf("%s\n",WordArray[i]);
        }
    }
}
