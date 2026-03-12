#include <stdio.h>

int main()
{
    char customerName[50];
    char productName[50];
    int productId;
    float price;
    int qauntity;
    float amount;

  
       printf("\n===== CREATE INVOICE =====\n");

       printf("Enter Customer Name: ");
       scanf("%s", customerName);

       printf("Enter Product ID: ");
       scanf("%d", &productId);

       printf("Enter Product Name: ");
       scanf("%s", productName);

       printf("Enter Price: ");
       scanf("%f", &price);

       printf("Enter Quantity: ");
       scanf("%d", &qty);

       amount = price * qty;

       printf("\n======= INVOICE =======\n");
       printf("Customer: %s\n", customerName);

       printf("\nProduct: %s\n", productName);
       printf("Price: %.2f\n", price);
       printf("Quantity: %d\n", qty);
       printf("Amount: %.2f\n", amount);

       printf("\n=======================\n");

    return 0;
}