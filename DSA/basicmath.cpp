#include <bits/stdc++.h>
using namespace std;

int main()
{
    /**
     * Whenever the division is happening the number of iteration is in terms logarithmic
     * Palindrome => if reverse of the num is same then it is palindrome
     * amstrong => 371 = 3^3 + 7^7 + 1^1 = 371 then it is amstrong number
     * Digit count
     * Digit Count with log
     * Digit Reverse
     * Display all the divisors
     * prime
     * GCD || HCF
     */

    int num1 = 36, digit, reversed = 0;
    int num = num1;
    while (num > 0)
    {
        digit = num % 10;
        reversed = reversed * 10 + digit;
        num = num / 10;
    }
    cout << reversed << endl;
    if (reversed == num1)
    {
        cout << "The Given number is Palindrome" << endl;
    }
    else
    {
        cout << "The Given Number is not Palindrone" << endl;
    }

    int number1 = num1;
    cout << "Digits of the number: " << (int)(log10(number1) + 1) << endl;

    // amstrong
    int amstrong = 0;
    int amstrongnum = num1;
    while (amstrongnum > 0)
    {
        int ldigit = amstrongnum % 10;
        amstrongnum = amstrongnum / 10;
        amstrong = amstrong + (ldigit * ldigit * ldigit);
    }
    if (amstrong == num1)
        cout << num1 << " Is Amstrong Number" << endl;
    else
        cout << num1 << " Is Not Amstrong Number" << endl;

    // Display all the Divisors
    // the time complexity is big o of n
    for (int i = 1; i <= num1; i++)
    {
        if (num1 % i == 0)
        {
            // cout<<i<<" ";
        }
    }
    // cout<<"num1: "<<num1<<endl;
    // Display all divisors in more Optimized ways !!
    vector<int> ls;
    // 1. O(sqrt(n))
    for (int i = 1; i * i <= num1; i++)
    {
        if (num1 % i == 0)
        {
            ls.push_back(i);
            if ((num1 / i) != i)
            {
                ls.push_back(num1 / i);
            }
        }
    }
    // 2. O(n log n): n is the number of factors to sort
    sort(ls.begin(), ls.end());
    // 3. O(no of factors)
    for (auto const &list : ls)
    {
        cout << list << " ";
    }
    // 1+2+3 is the time complexity
    cout << endl;
    // Method 1 for prime time complexity will be O(n)
    // Extreme Bruteforce method to find the Nummber is prime or not
    int nump;
    cout << "Enter the number to check prime or not: ";
    cin >> nump;
    if (nump < 0)
    {
        cout << "Negative number Detected";
        exit;
    }
    int countprime = 0;
    for (int i = 1; i <= nump; i++)
    {
        if (nump % i == 0)
        {
            countprime++;
        }
    }
    if (countprime == 2)
    {
        cout << nump << " is prime O(n)" << endl;
    }
    else
    {
        cout << nump << " is not prime O(n)" << endl;
    }

    // Method 2 for prime
    // O(sqrt(n))
    int nump2 = nump;
    int countprime2 = 0;
    for (int i = 1; i * i <= nump2; i++)
    {
        if (nump2 % i == 0)
        {
            countprime2++;
            if ((nump2 / i) != i)
            {
                countprime2++;
            }
        }
    }
    if (countprime2 == 2)
    {
        cout << nump2 << " is prime O(sqrt(n))" << endl;
    }
    else
    {
        cout << nump2 << " is not prime O(sqrt(n))" << endl;
    }

    // GCD or HCF
    int num_1 = 20;
    int num_2 = 40;
    int gcd = 0;
    for(int i = 1;i<=min(num_1, num_2);i++){
        if (num_1%i == 0 && num_2%i == 0){
            gcd = i;
        }
    }
    cout<<"GCD of "<<num_1<<" and "<<num_2<<" is "<<gcd<<" Time Complexity = O(min(n1,n2))"<<endl;

    // method 3 More performance Euclidian formula = gcd(a-b, b) if a>b in our programatically gcd(a%b, b) if a>b
    int a = 12, b = 9;
    while (a>0 && b>0){
        if (a>b) a=a%b;
        else b=b%a;
    }
    if (a>b) cout<<a;
    else cout<<b;


    cout << endl;
    return 0;
}