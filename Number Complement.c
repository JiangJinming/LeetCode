//
//Given a positive integer, output its complement number. The complement strategy is to flip the bits of its binary representation.
//
//Note:
//	1.The given integer is guaranteed to fit within the range of a 32-bit signed integer.
//	2.You could assume no leading zero bit in the integer’s binary representation.
//

int findComplement(int num) {
    int ret = num;
    int n = 0;
    int i;
    int j;

    for (i = 0; i < 32; i++) {
        if (num & (1 << i))
            n = i + 1;
    }

    for (j = 0; j < n; j++) {
        ret = ret ^ (1 << j);
    }

    return ret;
}