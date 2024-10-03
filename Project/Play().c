void play(){
    
    int correct = 0;
    int i;
    char answer[20];
    printf("The main word is: %s\n",WordArray[0]);
    do{
        printf("enter your guess(type No to stop): ");
        scanf("%s",answer);
        if(strcmp(answer, "No") == 0){
            printf("You guessed %d answers correctly",correct);
        }else{
            for(i=1;i<=NumberWords-1;i++){
                if(strcmp(WordArray[i], answer) == 0){
                    printf("you gussed correctly :)\n");
                    WordArray[i][0] = '\0';
                    correct ++;
                    break;
                }else{
                    printf("oh no!!! this is not one of the answers :(\n");
                    break;
                }
            }
        }
    } while(strcmp(answer,"No") != 0 );
    
}
