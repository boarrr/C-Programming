/*
  Description: A program to use a caeser cytpher to encrypt a message with a given key
*/

#include <stdio.h>

// Function prototype
void caeser(int key);


int main(void)
{
  int key;
  
  // User input
  printf("Enter a key, positive to encode, negative to decode: ");
  scanf("%d", &key);

  // Function call
  caeser(key);

  return 0;
}


// Function to encrypt or decrypt a message using a caeser cypher
void caeser(int key)
{
  char message[100];
  int i;

  // User input
  printf("Enter a message: ");
  scanf("%s", message);

  // Loop through the message
  for (i = 0; message[i] != '\0'; i++)
  {
    // Encrypt the message
    if (message[i] >= 'a' && message[i] <= 'z')
    {
      message[i] = ((message[i] - 'a' + key) % 26) + 'a';
    }
    else if (message[i] >= 'A' && message[i] <= 'Z')
    {
      message[i] = ((message[i] - 'A' + key) % 26) + 'A';
    }
  }

  // Output
  printf("The encrypted message is: %s\n", message);
}