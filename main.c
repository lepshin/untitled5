#include <stdio.h>
#include <stdlib.h>
//Practice 5
//Вариант 4

int main() {
    int n, j = 0, k = 0;
    int *mass, *result;
    printf("Введите размер массива: ");
    scanf("%d", &n);
    mass = (int*)calloc(n, sizeof(int)); //выделение памяти для одномерного массива
    for (int i = 0; i < n; i++) {
        printf("Введите %d-й: ", i + 1);
        scanf("%d", &mass[i]);
        while (mass[i] < 1000 || mass[i] > 9999) { //проверка на соответсвие условию (должно быть четырёхзначное число)
            printf("Необходимо ввести заничение в диапазоне [1000; 9999]\n");
            scanf("%d", &mass[i]);
        }
        if (mass[i] % 100 == mass[i] / 100) { //счётчик событий, удовлетворяющих условию (abcd: ab = cd)
            k++;
        }
    }
        result = (int*)calloc(k, sizeof(int)); //выделение памяти для результирующего массива
        printf("Результирующий массив:\n");
    for (int i = 0; i < n; i++) {
        if (mass[i] % 100 == mass[i] / 100) { //заполнение и вывод результирующего массива
            result[j] = mass[i];
            printf("%d\t", result[j]);
            j++;
        }
    }
    free(mass);
    free(result);
    return 0;
}