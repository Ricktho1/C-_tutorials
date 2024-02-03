// C++ program to swap even and
// odd bits of a given number
#include <bits/stdc++.h>
using namespace std;

// Function to swap even
// and odd bits
unsigned int swapBits(unsigned int N)
{
	// Get all even bits of x
	unsigned int even_bits = N & 0xAAAAAAAA;

	// Get all odd bits of x
	unsigned int odd_bits = N & 0x55555555;
	
	// Right shift even bits
	even_bits >>= 1;

	// Left shift odd bits
	odd_bits <<= 1;

	// Combine even and odd bits
	return (even_bits | odd_bits);
}

// Driver code
int main()
{
	int i, T;
    cin>>T;
    int arr[T];
    for(i=0;i<T;i++)
    {
        //Function Call
        cin>>arr[i];
    }
    for(i=0;i<T;i++)
    {
        cout<<swapBits(arr[i])<<endl;
    }

	return 0;
}

// This code is contributed by rathbhupendra
