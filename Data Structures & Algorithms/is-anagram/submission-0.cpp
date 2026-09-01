class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> ang1(26,0);
        for(char c :s)
        {
            ang1[c-'a']++;
        }
          vector<int> ang2(26,0);
        for(char c :t)
        {
            ang2[c-'a']++;
        }
        if(ang1==ang2){
            return true;
        }
        else return false;
        
    }
};
