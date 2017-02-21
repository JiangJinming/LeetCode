//
//The Hamming distance between two integers is the number of positions at which the corresponding bits are different.
//Given two integers x and y, calculate the Hamming distance.
//
//Note:
//0 <= x, y < 2^31. 
//

int hammingDistance(int x, int y) {
    int z = x ^ y;
    int ret = 0;
    int i;
    
    for (i = 0; i < 32; i++) {
        if (z & (1 << i)) {
            ret++;
        }
    }

    return ret;
}