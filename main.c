/*
Студент: Черных Виктория Александровна
Группа: ПИ-1-1
Лабораторная работа 12
*/

#include <stdio.h>

// Функция упорядочивания пары чисел по возрастанию
void order_pair(int *a, int *b) {
    if (*a > *b) {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
}

int main(void) {
    // Обязательные тесты из методички
    int x1 = 7, y1 = 4;
    order_pair(&x1, &y1);
    printf("Test 1 (7, 4) -> Result: %d %d (Expected: 4 7)\n", x1, y1);

    int x2 = -2, y2 = 0;
    order_pair(&x2, &y2);
    printf("Test 2 (-2, 0) -> Result: %d %d (Expected: -2 0)\n", x2, y2);

    int x3 = 5, y3 = 5;
    order_pair(&x3, &y3);
    printf("Test 3 [Boundary] (5, 5) -> Result: %d %d (Expected: 5 5)\n", x3, y3);

    // Собственный дополнительный тест на границу (проверка отрицательных и уже отсортированных чисел)
    int x4 = -5, y4 = -10;
    order_pair(&x4, &y4);
    printf("Custom Test (-5, -10) -> Result: %d %d (Expected: -10 -5)\n", x4, y4);

    return 0;
}