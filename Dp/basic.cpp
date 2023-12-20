/*Dynamic Programming (DP) is a powerful problem-solving technique that addresses complex problems by breaking them down into simpler subproblems and utilizing solutions. It is particularly effective when solving problems that exhibit two key properties during a recursive approach:

    Overlapping Subproblems:
    When using recursion to solve a problem, you may encounter situations where the same subproblem is solved multiple times. This repetition leads to unnecessary recalculations and inefficiency. To address this issue, Dynamic Programming employs a mechanism to store the results of subproblems so that they can be reused when encountered again. This technique, known as memoization, helps avoid redundant computations and improves the overall efficiency of the algorithm.

    In essence, if a recursive function is called with the same set of parameters multiple times, DP suggests storing the result once calculated and retrieving it when needed again.

    Optimal Substructure Property:
    The optimal substructure property implies that an optimal solution to the overall problem can be constructed from optimal solutions of its subproblems. In other words, if you have the optimal solutions for smaller instances of the problem, you can efficiently derive the optimal solution for the larger problem.

    DP leverages this property by breaking down a complex problem into smaller, more manageable subproblems. It solves each subproblem only once and stores the solution, ensuring that the overall solution is constructed optimally.*/

//lets take a example of fibonachhi to better understand the how to employ the the recursion solve technique to get the memoise and top 
#include <iostream>
#include <vector>
using namespace std;
// its a recursive approach and basic one as we have already recurence relation that is 
// fib(n)=fib(n-1)+fib(n-2)
// int fib(int n){
//     if(n<=1){
//         return n;
//     }
//     return fib(n-1)+fib(n-2);
// }

/*Now that we have the recursive code, you might be wondering how to obtain the memoized version of the code. It's quite simple. Just create a storage container where you can store the computed values. You might be questioning what size of storage is needed. It entirely depends on the number of variables that vary in your solution. In this case, we have only one variable, so we will use a one-dimensional array or vector to store it. However, other data structures can also be used for this purpose*/
// int fib(int n, vector<int>& arr) {
//     if (n <= 1) {
//         return n;
//     }
//     if (arr[n] != -1) {
//         return arr[n];
//     }
//     return arr[n] = fib(n - 1, arr) + fib(n - 2, arr);
// }


int main() {
    int n;
    cin >> n;
    vector<int> arr(n + 1, -1);
    /*Now we will head towards to the bottom up approach that is tabulization where he will convert the case that we have used in the recursion to get idea and build the table*/
    arr[0]=0;
    arr[1]=1;
    for(int i=2;i<=n;i++){
        arr[i]=arr[i-1]+arr[i-2];
    }
    cout << arr[n]<<endl;

    return 0;
}

    