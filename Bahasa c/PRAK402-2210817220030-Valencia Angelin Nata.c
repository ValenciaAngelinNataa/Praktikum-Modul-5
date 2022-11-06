#include <stdio.h>
int main(){
    int i,j, bil;
    scanf("%d", &bil);
    for (i = 1; i <= bil; i++){
        if(i % 2 == 0){
        }
        else {
            printf("%d ", i);
        }
    }
    printf ("\n");
    for (j = bil; j >= 1; j--){
        if (j % 2 != 0){
        }
        else{
            printf("%d ", j);
        }
    }
}
