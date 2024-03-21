/*
  Description: A program to manipulate a structure
  Author: Ryan Pitman
  Date: 14/03/2024
*/

#include <stdio.h>
#include <string.h>

struct stock_record 
{
  int no;
  char description[20];
  float price;
  int quantity;
};

int main(void)
{
  struct stock_record stock_item = {123, "Widget", 2.50, 100};

  // Display the struct as is
  printf("Contents of struct:\n%d\n%s\n%.2f\n%d\n", stock_item.no, stock_item.description, stock_item.price, stock_item.quantity);

  // Enter to the record
  printf("Enter a stock number: ");
  scanf("%d", &stock_item.no);

  while (getchar() != '\n');

  printf("Enter a description: ");
  fgets(stock_item.description, 20, stdin);

  // Remove the trailing newline character
  stock_item.description[strlen(stock_item.description) - 1] = '\0';

  printf("Enter the price: ");
  scanf("%f", &stock_item.price);

  printf("Enter the quantity: ");
  scanf("%d", &stock_item.quantity);

  // Display the struct as is
  printf("New contents of struct:\n%d\n%s\n%.2f\n%d\n", stock_item.no, stock_item.description, stock_item.price, stock_item.quantity);

  return 0;
}