#include <stdio.h>
int main(){
    int i, bil;
    char symb;
    scanf("%d %c",&bil, &symb);
    for (i = 1; i <= 50; i++){
        if (i % bil == 0){
            printf("%c ", symb);
        }
        else {
            printf ("%d ", i);
        }
    }
}
