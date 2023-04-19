class Solution {
public:
    int romanToInt(string s) {
        map<char, int> symbolToInt = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };
        
        int res = 0; 
  
        for (int i=0; i<s.length(); i++) 
        { 
            int s1 = symbolToInt[s[i]]; 
            if (i+1 < s.length()) 
            { 
                int s2 = symbolToInt[s[i+1]]; 
                if (s1 >= s2) 
                { 
                    res = res + s1; 
                } 
                else
                { 
                    res = res + s2 - s1; 
                    i++;
                } 
            } 
            else
            { 
                res = res + s1;    
            } 
        } 
        return res;
        }
};
