#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0)); // Rastgele sayıları her seferinde farklı üretmek için kullanıyoruz

    int number1 = rand() % 121; // 0 ile 120 arasında bir sayı üretir
    int guess;

    printf("0 ile 120 arasinda bir sayi tuttum. Tahmin et bakalim!\n");

    do {
        printf("Tahmininiz: ");
        scanf("%d", &guess);

        if (guess > number1) {
            printf("Daha kucuk bir sayi dene!\n");
        } else if (guess < number1) {
            printf("Daha buyuk bir sayi dene!\n");
        } else {
            printf("Tebrikler! Dogru tahmin.\n");
        }
    } while (guess != number1);

    return 0;
}
