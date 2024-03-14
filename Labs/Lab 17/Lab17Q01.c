/*
  Description: An assortment of structure templates for different usecases
  Author: Ryan Pitman
  Date: 14/03/2024
*/

#include <stdio.h>

// Structure template for a playing card
typedef struct card 
{
  char suit[20];
  int value;
} card;

// A structure template for a stock record
typedef struct stock 
{
  int stockNumber;
  char stockDescription[20];
  int stockQuantity;
} stock;

// A structure template for a libray
typedef struct books
{
  char ISBN[13];
  char title[30];
  char author[25];
  float price;
} books;

// A structure template for a customer record
typedef struct customer
{
  unsigned int customerNumber;
  char customerName[25];
  char customerAddress[45];
  double outstandingBalance;
} customer;

// A structure template for a transaction record
typedef struct transaction
{
  char transactionType;
  int transactionDate[3];
  float transactionAmount;
} transaction;

// A structure template for the time of day
typedef struct time
{
  int hours;
  int minutes;
  int seconds;
  char amOrPm[2];
} time;

// A structure template for latitude and longitude
typedef struct location
{
  int degrees;
  int minutes;
  char direction;
} location;

// A structure template for 30 teams in a league
typedef struct team
{
  char teamName[20];
  int homeRecord[3];
  int awayRecord[3];
} team;