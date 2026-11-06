#include <stdio.h>
int main () {
    float price;
    int rupees;
    float paiseFloat;
    int paise;
    printf("Enter price of item in rupees and paise (e.g., 12.34): ");
    scanf("%f", &price);
    rupees = (int)price;
    paiseFloat = (price - rupees) * 100;
    paise = (int) (paiseFloat + 0.5);
    printf("%d Rupees and %d Paise\n", rupees, paise);
    return 0;
}