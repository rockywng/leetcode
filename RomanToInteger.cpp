class Solution {
public:
    int romanToInt(string s) {
        int len = s.length();
        int value = 0;
        for (int i = 0; i < len; i++) {
            if (i < len - 1) {
                if (s[i] == 'I') {
                    if (s[i + 1] == 'V') {
                        value += 4;
                        i++;
                    }
                    else if (s[i + 1] == 'X') {
                        value += 9;
                        i++;
                    }
                    else {
                        value += 1;
                    }
                }
                else if (s[i] == 'X') {
                    if (s[i + 1] == 'L') {
                        value += 40;
                        i++;
                    }
                    else if (s[i + 1] == 'C') {
                        value += 90;
                        i++;
                    }
                    else {
                        value += 10;
                    }
                }
                else if (s[i] == 'C') {
                    if (s[i + 1] == 'D') {
                        value += 400;
                        i++;
                    }
                    else if (s[i + 1] == 'M') {
                        value += 900;
                        i++;
                    }
                    else {
                        value += 100;
                    }
                }
                else {
                    if (s[i] == 'V') {
                        value += 5;
                    }
                    else if (s[i] == 'L') {
                        value += 50;
                    }
                    else if (s[i] == 'D') {
                        value += 500;
                    }
                    else if (s[i] == 'M') {
                        value += 1000;
                    }
                    else {
                        std::cout << "Invalid input" << std::endl;
                    }
                }
            }
            else {
                if (s[i] == 'I') {
                    value += 1;
                }
                else if (s[i] == 'V') {
                    value += 5;
                }
                else if (s[i] == 'X') {
                    value += 10;
                }
                else if (s[i] == 'L') {
                    value += 50;
                }
                else if (s[i] == 'C') {
                    value += 100;
                }
                else if (s[i] == 'D') {
                    value += 500;
                }
                else if (s[i] == 'M') {
                    value += 1000;
                }
                else {
                    std::cout << "Invalid input" << std::endl;
                }
            }
        }
        return value;
    }
};
