#include<iostream>
#include<iomanip>
using namespace std;

int mySqrt(int n) {
    int s = 0;
    int e = n;
    int mid = 0; // Change the type from long long int to int
    int ans = -1;

    while (s <= e) {
        mid = s + (e - s) / 2;
        int squr = mid*mid; 
        if (squr == n) {
            return mid;
        }
        else if (squr < n) {
            ans = mid;
            s = mid + 1;
        }
        else {
            e = mid - 1;
        }
    }

    return ans; // Return ans if the exact square root is not found
}

int main(int argc,const char*argv[]) {
  int n = 51;
  
   double Ans = mySqrt(n);
    cout << "Sqrt of x to nearby integer is: " << Ans << endl;
    return 0;
}
