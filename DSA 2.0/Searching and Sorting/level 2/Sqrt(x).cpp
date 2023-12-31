#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

long long mySqrt(int x) {
    long long s = 0;
    long long e = x;
    long long mid = 0; // Change the type from long long int to int
    int ans = -1;

    while (s <= e) {
        mid = s + (e - s) / 2;
        long long int squr = mid*mid; // Explicitly cast mid to long long int
        if (squr == x) {
            return mid;
        }
        else if (squr < x) {
            ans = mid;
            s = mid + 1;
        }
        else {
            e = mid - 1;
        }
    }

    return ans; // Return ans if the exact square root is not found
}

int main() {
    int x = 10;
  
    int Ans = mySqrt(x);
    cout << "Sqrt of x to nearby integer is: " << Ans << endl;
    return 0;
}
