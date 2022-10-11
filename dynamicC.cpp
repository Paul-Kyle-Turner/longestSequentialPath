// dynamicC.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "LSP.h"

int main()
{
    LSP<int> lsp;
    int arr[] = { 0 , 1, 2, 3, 4, 5, 6, 7, 1, 2, 1, 1, 5, 5, 1, 1, 10 , 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int n = sizeof(arr) / sizeof(arr[0]);
    std::cout << "The longest sequence of increasing numbers is " << lsp.LongestSequentialPath(arr, 0, n, arr[0]) << std::endl;

    LSP<double> lsp2;
    double arr2[] = { 1.2, 1.3, 1.4, 4.5, 5.2, 1.0, 111, 1.2 };
    int n2 = sizeof(arr) / sizeof(arr[0]);
    std::cout << "The longest sequence of increasing numbers is " << lsp2.LongestSequentialPath(arr2, 0, n2, arr2[0]) << std::endl;
}