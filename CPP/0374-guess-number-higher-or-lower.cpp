/**
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        long long int num = n / 2;
        int max = n;
        int min = 1;
        int guessed = guess(num);
        while (guessed != 0) {
            if (guessed == 1) {
                min = num+1;
            } else if (guessed == -1) {
                max = num-1;  
            }
            num = ceil((min + (long long int)max)/2);
            guessed = guess(num);
        }
        return (int)num;
    }
};
