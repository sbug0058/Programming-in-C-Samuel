//Compare the stack frame usage between the iterative and recursive definitions of the factorial function in the following code:

#include <stdio.h>

// Iterative function
long fact(int n) {
    long ans;
    for (ans = 1; n > 1; n--)
        ans *= n;
    return ans;
}
// Recursive function
long rfact(int n) {
    long ans;
    if (n > 0)
        ans = n * rfact(n - 1);
    else
        ans = 1;
    return ans;
}

// The iterative function is more memory-efficient and better suited for large inputs due to its constant stack usage. 
// The recursive function is easier to write and understand conceptually but may lead to stack overflow for large 𝑛 and has higher overhead.