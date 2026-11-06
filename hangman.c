#include <stdio.h>

int strcmp(const char word1[], const char word2[]){
    int i = 0;
    while (word1[i] != '\0'){
        if (word1[i] != word2[i]){
            return 0;
        }
        return 1;
    }
}

int strcmp2(const char word1[], char word2[]){
    int diff = 0;
    for (int i = 0; word1[i] != '\0' && !diff; i++, diff |= word1[i] != word2[i]){
        ;
        return diff;
    }
}

int main()
{
    const char secret[] = "REDBULL4EVER";
    const int len = sizeof(secret) -1;
    char guessed[len];
    const char guess;

    //variable initialisieren : __________
    for (int i = 0; i < len; i++)
    {
        guessed[i] = '_';
    }
    int fails = 0;
    while(fails < 5){
        printf("Geben sie einen Buchstabe ein: ");
        if (scanf(" %c", &guess) != 1){
            printf("Keine Eingabe\n");
            return 1;
        }
    
    

        int hits = 0;
        for (int i = 0; i < len; i++)
        {
            if (secret[i] == guess) {
                hits++;
                guessed[i] = guess;
            }
        }


        for (int i = 0; i < len; i++)
        {
            printf("%c ", guessed[i]);
        }

        strcmp(secret, guessed);

        fails += (hits == 0);
    }


    return 0;
}