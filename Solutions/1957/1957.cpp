class Solution {
public:
    string makeFancyString(string s) {
        
        // if string is three chars or shorter return
        if (s.length()<=2) return s;
        
        // varaible to store res
        string ans = s.substr(0,2);

        // iterating over the string 
        for (int i=2; i<s.length(); ++i) {
            // if same three chars skip the middle char
            if (s[i] == s[i-1] && s[i-1] == s[i-2]) continue;
            // append the unique chars
            ans += s[i];
        }
        return ans; // retrun res
    }
};