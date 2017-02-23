//
//Given an integer (signed 32 bits), write a function to check whether it is a power of 4. 
//

bool isPowerOfFour(int num) {
    int i;
    
    for (i = 0; i < 32; i++) {
        if (num == (1 << (i * 2))) {
            return 1;
        }
    }
    
    return 0;
}