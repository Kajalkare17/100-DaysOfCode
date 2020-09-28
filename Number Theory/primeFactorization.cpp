# include <stdio.h> 
#include<bits/stdc++.h>
# include <math.h>
using namespace std; 
  
// A function to print all prime factors of a given number n 
void primeFactors(int n) 
{ 

    // Print the number of 2s that divide n 
    int cnt =0;
    while (n%2 == 0) 
    { 
        cnt++;
        cout<<2<<"^"<<cnt<<" ";
        n = n/2; 
    } 
    
  
    // n must be odd at this point.  So we can skip  
    // one element (Note i = i +2) 
    for (int i = 3; i <= sqrt(n); i = i+2) 
    { 
        // While i divides n, print i and divide n 
        cnt =0;
        while (n%i == 0) 
        { 
            cnt++;
            n = n/i; 
        } 
        cout<<i<<"^"<<cnt<<" ";
    } 
  
    // This condition is to handle the case when n  
    // is a prime number greater than 2 
    if (n > 2) 
        printf ("%d ", n); 
} 

int main() 
{ 
    int n = 315; 
    primeFactors(n); 
    return 0; 
} 
