#include <stdio.h>

int countHits(const char secret[], const char guess)
{
    int hits = 0;
    for (int i = 0; i < sizeof(secret) - 1; i++)
    {
        if ((secret[i]) ==guess)
        {
            hits++;
        }
    }
    return hits;
}

int main()
{
    const char secret[] = "REDBULL4EVER";
    const int len = sizeof(secret) -1;
    char guessed[sizeof(secret) -1];
    const char guess;

    for (int i = 0; i < len; i++)
    {
        guessed[i] = '_';
    }

    printf("Geben sie einen Buchstabe ein: ");
    if (scanf(" %c", &guess) != 1){
        printf("Keine Eingabe\n");
        return 1;
    }

/*  int hits = 0;
    for (int i = 0; i < len; i++) {
        if ((secret[i]) == guess){
            hits++;
            guessed[i] = guess;
        }
    }
*/

    for (int i = 0; i < len; i++)
    {
        printf("%c ", guessed[i]);
    }

    countHits(secret, guess);

    printf("Treffer: %d", hits);

    return 0;
};