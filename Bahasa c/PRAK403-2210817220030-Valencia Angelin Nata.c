#include <stdio.h>
int main() {
    int bil1, bil2, i;
    scanf("%d %d", &bil1, &bil2);
    if(bil1 < bil2){
        for(i = bil1; i<= bil2; bil1++,bil2--){
            printf("%d ",bil1);
            printf("%d ",bil2);
            if(i < bil2){
                printf(" - ");
            }
        }
    }else if (bil1 > bil2){
        for(i = bil2; i <= bil1; bil1--,bil2++){
            printf("%d ",bil1);
            printf("%d ",bil2);
            if(i < bil1){
                printf(" - ");
            }
        }
    }
}
