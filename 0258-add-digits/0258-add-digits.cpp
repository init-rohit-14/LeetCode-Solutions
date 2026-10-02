class Solution {
public:
    int addDigits(int num) {
        int r = 0;
        if (num == 0)
            return 0;
        while (num >= 10) {
            int sum = 0;
            while (num > 0) {

                r = num % 10;
                sum = sum + r;
                num /= 10;
            }
            num = sum;
        }
        return num;
    }
};