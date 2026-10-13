#include <stdio.h>
#include <stdbool.h>

int main(){
    const K = 10;
    int v;

    for (int i = 1 ; i <= 10 ; i++){
        printf("\nGib eine Zahl ein: ");
        scanf("%lf", &v);

        if (v > K){
            printf("\nDeine Zahl ist groesser als die Referenzzahl!\n");
        }

        else if (v < K){
            printf("\nDeine Zahl ist kleiner als die Referenzzahl!\n");
        }

        else if (v == K){
            printf("\nDeine Zahl ist gleich gross wie die Referenzzahl!\n");
        };

        if (i == 10){
            printf("Du hast die Referenzzahl nicht gefunden!");
        };

    };

    return 0;
}