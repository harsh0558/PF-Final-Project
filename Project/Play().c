void play(){
    
    int correct = 0;
    int i;
    char answer[20];
    printf("The main word is: %s\n",WordArray[0]);
    do{
        printf("enter your guess(type 'No' to stop): ");
        scanf(" %s",answer);
        int found = 0;
        if(strcmp(answer, "No") == 0){
            printf("You guessed %d answers correctly\n",correct);
        }else{
            for(i=1;i<=NumberWords;i++){
                if(strcmp(WordArray[i], answer) == 0){
                    WordArray[i][0] = '\0';
                    correct ++;
                    printf("you guessed the word correctly :)\n");
                    found = 1;
                    break;
                }
            }
        }   if(found == 0 && strcmp(answer,"No") != 0){
            printf("your guess is incorrect :(\n");
            }
    } while(strcmp(answer,"No") != 0 );
    
}
