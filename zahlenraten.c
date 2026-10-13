#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main(){
    int K = 10;
    int v;
    int cheat_code = -1;

    for (int i = 1 ; i <= 10 ; i++){
        printf("\nGib eine Zahl ein: ");
        scanf("%d", &v);
        if (v == cheat_code){
            printf("\n%d", K);
        };
        
        if (v > K){
            printf("\nDeine Zahl ist groesser als die Referenzzahl!\n");
        }

        else if (v < K){
            printf("\nDeine Zahl ist kleiner als die Referenzzahl!\n");
        }

        else if (v == K){
            printf("\nDeine Zahl ist gleich gross wie die Referenzzahl!\n");
        };

        if (v == cheat_code){
            printf("\n%d", K);
        };

        if (i == 10){
            printf("Du hast die Referenzzahl nicht gefunden!");
        };
    };

    return 0;
}