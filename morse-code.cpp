class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) 
    {
        string l[26] = {".-","-...","-.-.","-..",".","..-.","--.",
             "....","..",".---","-.-",".-..","--","-.",
             "---",".--.","--.-",".-.","...","-","..-",
             "...-",".--","-..-","-.--","--.."};
        vector<string> s1;
        for(int i=0;i<(int)words.size();i++)
        {
            string s="";
            for(int j=0;j<(int)words[i].size();j++)
                s+=l[words[i][j]-'a'];                
            s1.push_back(s);
        }
        unordered_map<string, int> m;
        for(int i=0;i<(int)words.size();i++)
        {
            if (m.find(s1[i])==m.end()) 
                m[s1[i]]+=1;
        } 
        return (int)m.size();
    }
};