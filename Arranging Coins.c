//
//You have a total of n coins that you want to form in a staircase shape, where every k-th row must have exactly k coins.
//Given n, find the total number of full staircase rows that can be formed.
//n is a non-negative integer and fits within the range of a 32-bit signed integer.
//

int arrangeCoins(int n) {
    int ret = 0;
    int sum = 0;
    int i = 1;

    while (i <= n - sum) {
        ret = i;
        
        sum += i;
        i++;
    }

    return ret;
}