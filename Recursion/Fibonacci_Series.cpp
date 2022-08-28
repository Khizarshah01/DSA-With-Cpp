// Leetcoode Link
/*
https://leetcode.com/problems/fibonacci-number/submissions/
*/
class Solution {
public:
    int fib(int n){
        if(n==1)
            return 1;
        if(n==0)
            return 0;
        int ans=fib(n-1)+fib(n-2);
        return ans;
        
    }
};
