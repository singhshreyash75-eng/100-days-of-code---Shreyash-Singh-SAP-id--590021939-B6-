//23) Write a program to find profit or loss percentage given cost price and selling price.



//Ans 23)


#include <stdio.h>

int main() {
    float costPrice, sellingPrice, profit, loss, percent;

    // Input cost price and selling price
    printf("Enter Cost Price: ");
    scanf("%f", &costPrice);

    printf("Enter Selling Price: ");
    scanf("%f", &sellingPrice);

    // Check for profit or loss
    if (sellingPrice > costPrice) {
        profit = sellingPrice - costPrice;
        percent = (profit / costPrice) * 100;
        printf("Profit = %.2f\n", profit);
        printf("Profit Percentage = %.2f%%\n", percent);
    }
    else if (costPrice > sellingPrice) {
        loss = costPrice - sellingPrice;
        percent = (loss / costPrice) * 100;
        printf("Loss = %.2f\n", loss);
        printf("Loss Percentage = %.2f%%\n", percent);
    }
    else {
        printf("No profit, no loss.\n");
    }

    return 0;
}
