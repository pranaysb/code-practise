class Solution {
public:
    bool isPalindrome(string s) {

        std::transform(s.begin(), s.end(), s.begin(), [](unsigned char c) {
            return std::tolower(c);
        });
        
        s.erase(std::remove_if(s.begin(), s.end(), [](unsigned char c) {
            return !std::isalnum(c); 
        }), s.end());
        
        int left = 0;
        int right = s.length() - 1;
        while (left < right) {
            if (s[left] == s[right]) {
                left++;
                right--;
            } else {
                return false;
            }
        }
        return true;
    }
};
