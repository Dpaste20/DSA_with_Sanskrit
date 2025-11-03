class Solution {
public:

    int solve(int n , vector<int>& t){

        if(n == 0) return 0;

        if(n == 1) return 1;


        if(t[n] != -1) return t[n];;

        t[n] = solve(n - 1 , t) + f(n - 2, t);

        return t[n];

    }

    int fib(int n) {

        vector<int> t(n + 1 , -1);

        return solve(n , t);

    }
};
