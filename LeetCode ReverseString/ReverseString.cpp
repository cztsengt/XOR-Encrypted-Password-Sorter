class Solution {
public:
    void reverseString(vector<char>& s) {
    int j = s.size() - 1;
    for (int i = 0; i < j; i++){
        swap (s[i],s[j]);
        j--; 
        }
    }
};