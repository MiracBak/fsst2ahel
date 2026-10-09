#include <stdio.h>

int main(){

    float K = 10.0;
    float v;

    printf("\nReferenzzahl = 10");
    printf("\nGib eine Zahl ein: ");
    scanf("%f", &v);

    if (K < v){
        printf("\nDeine Zahl ist groesser als die Referenzzahl!\n");
    }

    else if (K > v){
        printf("\nDeine Zahl ist kleiner als die Referenzzahl!\n");
    }

    else {
        printf("\nDeine Zahl ist gleich gross wie die Referenzzahl!\n");
    }

    return 0;
}