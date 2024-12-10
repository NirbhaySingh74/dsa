#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

void printNTo1(int n)
{
    if (n == 0)
    {
        cout << endl;
        return;
    }
    cout << n << " ";
    printNTo1(n - 1);
}

void print1toN(int current, int n)
{
    if (current > n)
    {
        return;
    }
    cout << current << " ";
    print1toN(current + 1, n);
}

void printname(int n)
{
    if (n == 0)
    {
        return;
    }

    cout << "Nirbhay" << " ";
    printname(n - 1);
}

int sumofN(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return n + sumofN(n - 1);
}

int factorialOfN(int n)
{
    if (n == 1)
        return 1;

    return n * factorialOfN(n - 1);
}

void print1toNBackTracking(int n)
{
    if (n < 1)
    {
        return;
    }

    print1toNBackTracking(n - 1);
    cout << n << " ";
}

void printNto1BackTracking(int n)
{
    if (n < 1)
    {
        return;
    }

    print1toNBackTracking(n - 1);
    cout << n << " ";
}

void reverseArr(vector<int> arr)
{
    int l = 0, r = 3;
    while (l < r)
    {
        int temp = arr[l];
        arr[l] = arr[r];
        arr[r] = temp;
        l++, r--;
    }
    for (int num : arr)
    {
        cout << num << " ";
    }
}

void reverseArrWithotRVar(vector<int> arr)
{
    int i = 0, n = arr.size();
    while (i <= n / 2)
    {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
        i++;
    }
    for (int num : arr)
    {
        cout << num << " ";
    }
}

void reverseArrRec(int i, int n, int arr[])
{
    if (i >= n / 2)
        return;

    swap(arr[i], arr[n - i - 1]);
    reverseArrRec(i + 1, n, arr);
}

bool checkPalindrome(string str)
{
    int n = str.length() - 1, i = 0;
    while (i < n)
    {
        if (str[i] != str[n])
        {
            return false;
        }
        i++, n--;
    }
    return true;
}

bool checkPalindromeRec(int i, int n, string str)
{
    if (i >= n / 2)
        return true;

    if (str[i] != str[n - i - 1])
        return false;

    return checkPalindromeRec(i + 1, n, str);
}

int main()
{
    // printNTo1(10);
    // print1toN(1, 10);
    // printname(5);
    // cout << sumofN(10) << endl;
    // cout << factorialOfN(5) << endl;
    // print1toNBackTracking(10);
    // vector<int> arr = {10, 20, 30, 40};
    // int arr[] = {10, 20, 30, 40, 50};
    // reverseArr(arr);
    // reverseArrWithotRVar(arr);
    // reverseArrRec(0, 5, arr);

    // for (int i = 0; i < 5; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    string str = "MADAMM";
    int n = str.length();
    if (checkPalindromeRec(0, n, str))
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
    return 0;
}

// const [count, setCount] = useState(0);
// function increment() {
//   setCount(count + 1);
//   console.log(count); // Logs the previous value
// }

// app.get('/data', async (req, res) => {
//   const result = await database.find({});
// console.log(result);
//   res.send(result);
// });

// You are given an array of integers nums and an integer target. Return the indices of the two numbers such that they add up to the target.

// You may assume that each input would have exactly one solution, and you may not use the same element twice.

// Input:

//  nums = [2, 7, 11, 15]
//  target = 9

// Output:

// [0, 1]

// Explanation:

// nums[0] + nums[1] = 2 + 7 = 9