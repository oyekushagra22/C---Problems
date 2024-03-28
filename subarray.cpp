/** PROBLEM:---------------------------------------------------------------------------------------------
Consider an array arr[] containing integers, and an integer k. Define a function subarray(arr, n, k) that
returns the maximum sum of a subarray of length k within the given array arr[]. Write a C++ program to
implement this function and find the maximum sum of a subarray of length k from the array {100, 200, 300, 400}
where k = 2.
*/

/**
 * The function `subarray` calculates the maximum sum of a subarray of length `k` within an array.
 *
 * @param arr The `arr` parameter in the `main` function is an integer array containing the elements
 * {100, 200, 300, 400}.
 * @param n The parameter `n` in the `subarray` function represents the total number of elements in the
 * input array `arr[]`. In this case, the array `arr` has 4 elements: {100, 200, 300, 400}, so `n` is
 * equal to
 * @param k In the given code snippet, the parameter `k` represents the length of the subarray for
 * which you want to find the maximum sum. In the `main` function, the `subarray` function is called
 * with the array `arr` and its size `4`, and `k` is
 *
 * @return The `main` function is calling the `subarray` function with an array `{100, 200, 300, 400}`,
 * array size `4`, and `k=2`. The `subarray` function calculates the sum of subarrays of length `k` and
 * returns the maximum sum found.
 */
#include <iostream>
using namespace std;

int subarray(int arr[], int n, int k)
{
    int i, j;
    int curr_sum = INT16_MIN;
    for (i = 0; i < n; i++)
    {
        int sum = 0;
        for (j = i; j < k; j++)
        {
            sum += arr[i] + arr[j];
            if (sum > curr_sum)
                curr_sum = sum;
        }
    }
    return curr_sum;
}

int main()
{
    int arr[] = {100, 200, 300, 400};
    cout << subarray(arr, 4, 2) << endl;
}