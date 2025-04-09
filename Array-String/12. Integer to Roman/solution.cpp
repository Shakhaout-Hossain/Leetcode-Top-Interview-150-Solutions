class Solution {
    public:
        string intToRoman(int num) {
            string p;
            vector<string> symbol = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
            vector<int> value = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
            int i=0;
            while(num){
                while(num>=value[i]){
                    p+=symbol[i];
                    num-=value[i];
                }
                i++;
            }
            return p;
        }
    };