class Solution {
public:
    string intToRoman(int num) {
        int copy = num;
        string output = "";
        while (copy > 0) {
            if (copy >= 1000) {
                output.append("M");
                copy -= 1000;
            }
            else if (copy >= 900) {
                output.append("CM");
                copy -= 900;
            }
            else if (copy >= 500) {
                output.append("D");
                copy -= 500;
            }
            else if (copy >= 400) {
                output.append("CD");
                copy -= 400;
            }
            else if (copy >= 100) {
                output.append("C");
                copy -= 100;
            }
            else if (copy >= 90) {
                output.append("XC");
                copy -= 90;
            }
            else if (copy >= 50) {
                output.append("L");
                copy -= 50;
            }
            else if (copy >= 40) {
                output.append("XL");
                copy -= 40;
            }
            else if (copy >= 10) {
                output.append("X");
                copy -= 10;
            }
            else if (copy >= 9) {
                output.append("IX");
                copy -= 9;
            }
            else if (copy >= 5) {
                output.append("V");
                copy -= 5;
            }
            else if (copy >= 4) {
                output.append("IV");
                copy -= 4;
            }
            else {
                output.append("I");
                copy--;
            }
        }
        return output;
    }
};
