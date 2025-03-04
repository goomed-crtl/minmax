/*
Title: Chapter 4 Exerise 1 - Minimum Maximum
File Name: minmax.cpp
Programmer: Nicholas Woolston
Date: 23/02/2024 (DD/MM/YYYY)
Requirements: Write a program that asks for: a loan amount, the monthly interest rate, and the number of payments made to pay off the loan.
From there, display those values along with: the monthly payment, amount paid back, and interest paid.
*/

#include <iostream>
using namespace std;
double getNum1();
double getNum2();
double getMaxNum(double num1, double num2);
double getMinNum(double num1, double num2); 

int main()
{
   double num1 = getNum1();
   double num2 = getNum2();
   double maxNum = getMaxNum(num1, num2);
   double minNum = getMinNum(num1, num2);

   cout << "The larger number is " << maxNum << ", the smaller number is " << minNum << ".";

}

double getNum1()
{
    int num1;
    cout << "What is the first number? ";
    cin >> num1;
    return num1;
}

double getNum2()
{
    int num2;
    cout << "What is the second number? ";
    cin >> num2;
    return num2;
}

double getMaxNum(double num1, double num2)
{
    int maxNum = 1;

    if (num1 > num2)
    {
        maxNum = num1;
    }
    else
    {
        maxNum = num2;
    }
    return maxNum;
}

double getMinNum(double num1, double num2)
{
    int minNum = 1;
    if (num1 < num2)
    {
        minNum = num1;
    }
    else
    {
        minNum = num2; 
    }
    return minNum;
}



