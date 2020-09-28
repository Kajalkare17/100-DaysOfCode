#include<bits/stdc++.h>
using namespace std;

#define MAX_SIZE 1000005

void SieveOfEratosthenes(vector<int> &primes)
{
	bool isPrime[MAX_SIZE];
	for(int i=1; i<=MAX_SIZE; i++)
	{
		isPrime[i] = true;
	}
	isPrime[0] = false;
	for(int i=2; i*i<=MAX_SIZE; i++)
	{
		if(isPrime[i] == true)
		{
			for(int j = i*i; j<=MAX_SIZE; j+=i)
			{
				isPrime[j] = false;
			}
		}
	}
	for (int p = 2; p < MAX_SIZE; p++)  
       if (isPrime[p])  
            primes.push_back(p); 
}

int main() 
{       
	vector<int> primes;
    // Function call 
    SieveOfEratosthenes(primes); 
  
    cout << "5th prime number is " << primes[4] << endl; 
    cout << "16th prime number is " << primes[15] << endl; 
    cout << "1049th prime number is " << primes[1048]; 
  
    return 0; 
} 
