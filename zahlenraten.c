#include <stdio.h>

int main(){

    int K = 10;
    int v;

    printf("\nReferenzzahl = 10");
    printf("\nGib eine Zahl ein: ");
    scanf("%d", &v);

    if (K < v){
        printf("\nDein Zahl ist groesser als die Referenzzahl!\n");
    }

    else if (K > v){
        printf("\nDein Zahl ist kleiner als die Referenzzahl!\n");
    }

    else {
        printf("\nDein Zahl ist gleich gross wie die Referenzzahl!\n");
    }

    return 0;
}