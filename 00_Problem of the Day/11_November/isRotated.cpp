class Solution {
    public:
    bool isRotated(string str1, string str2) {
        
        // Reverse clockwise 1st 
        reverse(str1.begin(),str1.end());
        reverse(str1.begin(),str1.begin()+2);
        reverse(str1.begin()+2,str1.end());
        
        if(str1 == str2)    // If its equal then return 
            return true;
        
        // Reverse anticlockwise by 4 times as it was rotated twice in clockwise 
        reverse(str1.begin(),str1.begin()+4);
        reverse(str1.begin()+4,str1.end());
        reverse(str1.begin(),str1.end());
        
        return str1 == str2;    
    }
};
