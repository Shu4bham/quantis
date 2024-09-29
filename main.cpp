

#include <iostream>
#include "BigInt.h"
using namespace std;

// Function declarations
void displayMenu();
void createAndDisplay();
void compareBigInts();
void incrementBigInt();
void addBigInts();
void multiplyBigInts();
void fibonacciSeries();
void catalanSeries();
void factorial();
void findSqrt();

int main()
{
     int choice;
     do
     {
          displayMenu();
          cin >> choice;

          switch (choice)
          {
          case 1:
               createAndDisplay();
               break;
          case 2:
               compareBigInts();
               break;
          case 3:
               incrementBigInt();
               break;
          case 4:
               addBigInts();
               break;
          case 5:
               multiplyBigInts();
               break;
          case 6:
               fibonacciSeries();
               break;
          case 7:
               catalanSeries();
               break;
          case 8:
               factorial();
               break;
          case 9:
               findSqrt();
               break;
          case 10:
               cout << "Exiting program.\n";
               break;
          default:
               cout << "Invalid choice! Please select again.\n";
          }
     } while (choice != 10);

     return 0;
}

// Display the menu
void displayMenu()
{
     cout << "\n===== BigInt Operations Menu =====\n";
     cout << "1. Create and display BigInt numbers\n";
     cout << "2. Compare two BigInt numbers (==, <, >)\n";
     cout << "3. Increment a BigInt\n";
     cout << "4. Add two BigInts\n";
     cout << "5. Multiply two BigInts\n";
     cout << "6. Print Fibonacci series up to a number\n";
     cout << "7. Print Catalan numbers up to a number\n";
     cout << "8. Print Factorial of a number\n";
     cout << "9. Print square root of a number\n";
     cout << "10. Exit\n";
     cout << "Enter your choice: ";
}

// Create and display BigInt numbers
void createAndDisplay()
{
     string s;
     cout << "Enter a number in form of string : ";
     cin >> s;
     BigInt first(s);
     // BigInt second(12345);
     // BigInt third("10000");
     // BigInt fourth("100000");
     // BigInt fifth("10000000");

     cout << "Given Number = " << first << '\n';
     // cout << "second = " << second << '\n';
     // cout << "third = " << third << '\n';
     // cout << "fourth = " << fourth << '\n';
     // cout << "fifth = " << fifth << '\n';
}

// Compare two BigInt numbers (==, <, >)
void compareBigInts()
{
     string s1;
     cout << "Enter first number in form of string : ";
     cin >> s1;
     BigInt first(s1);
     string s2;
     cout << "Enter second number in form of string : ";
     cin >> s2;
     BigInt second(s2);
     if (first == second)
     {
          cout << "first and second are equal!\n";
     }
     else if (first < second)
     {
          cout << "first is less than second!\n";
     }
     else if (first > second)
     {
          cout << "first is greater than second!\n";
     }
}

// Increment a BigInt
void incrementBigInt()
{
     string s1;
     cout << "Enter the number in form of string to perform Increment Operation : ";
     cin >> s1;
     BigInt first(s1);
     cout << "Before incrementing: " << first << '\n';
     first++;
     cout << "After incrementing: " << first << '\n';
}

// Add two BigInts
void addBigInts()
{
     string s1;
     cout << "Enter first number in form of string : ";
     cin >> s1;
     BigInt first(s1);
     string s2;
     cout << "Enter second number in form of string : ";
     cin >> s2;
     BigInt second(s2);
     BigInt sum = first + second;
     cout << "Sum of fourth and fifth = " << sum << '\n';
}

// Multiply two BigInts
void multiplyBigInts()
{
     string s1;
     cout << "Enter first number in form of string : ";
     cin >> s1;
     BigInt first(s1);
     string s2;
     cout << "Enter second number in form of string : ";
     cin >> s2;
     BigInt second(s2);
     BigInt product = first * second;
     cout << "Product of two Numbers is = " << product << '\n';
}

void findSqrt()
{
     string s1;
     cout << "Enter the number in form of string to find the square root : ";
     cin >> s1;
     BigInt first(s1);
     BigInt sqrt = sqrt1(first);
     cout << "Square root of " << first << " = " << sqrt << '\n';
}

// Print Fibonacci series up to a number
void fibonacciSeries()
{
     int n;
     cout << "Enter the index of Fibonacci numbers to print: ";
     cin >> n;
     cout << "-------------------------Fibonacci-------------------------\n";
     BigInt Fib = NthFibonacci(n);
     cout << "Fibonacci " << n << " = " << Fib << '\n';
     // for (int i = 0; i <= n; i++)
     // {
     //      cout << "Fibonacci " << i << " = " << Fib << '\n';
     // }
}

// Print Catalan numbers up to a number
void catalanSeries()
{
     int n;
     cout << "Enter the index of Catalan numbers to print: ";
     cin >> n;
     cout << "-------------------------Catalan----------------------------\n";
     BigInt Cat = NthCatalan(n);
     cout << "Catalan " << n << " = " << Cat << '\n';
     // for (int i = 0; i <= n; i++)
     // {
     //      cout << "Catalan " << i << " = " << Cat << '\n';
     // }
}

// Calculate the factorial of a number
void factorial()
{
     int n;
     cout << "Enter the number to calculate factorial: ";
     cin >> n;
     cout << "-------------------------Factorial-------------------------\n";
     BigInt fact = Factorial(n);
     cout << "Factorial of " << n << " = " << fact << '\n';
}
