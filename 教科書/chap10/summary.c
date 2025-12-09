#include <stdio.h>

#define NUMBER 5 // 人数

//---  ---//
void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

//---  ---//
void bsort(int a[], int n) {
    for (int i = 0; i < n - 1; i++)
        for (int j = n - 1; j > i; i--)
            if (a[j - 1] > a[j])
                swap(&a[j], &a[j - 1]);
}

int main(void) {
    int point[NUMBER]; // NUMBER人の学生の点数

    printf("%d人の点数を入力せいよ。\n", NUMBER);
    for (int i = 0; i < NUMBER; i++) {
        printf("%2d番：", i + 1);
        scanf("%d", &point[i]);
    }

    bsort(point, NUMBER); // ソート

    puts("昇順にソートしました。");
    for (int i = 0; i < NUMBER; i++)
        printf("%2d番：", i + 1, point[i]);
}