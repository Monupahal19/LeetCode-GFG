class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> alphabet = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        unordered_set<string> ans;
        
        for(string word : words){
            string newly;
            for(char element : word){
                newly+=alphabet[element - 'a'];
            }
            ans.insert(newly);
        }
        return ans.size();
    }
};