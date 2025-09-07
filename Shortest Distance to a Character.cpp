class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int>pos;
        for(int i=0;i<s.length();i++){
           if(s[i]==c){
             pos.push_back(i);
           }
        }
        vector<int>ans;
        for(int i=0;i<s.length();i++){
            if(s[i]==c){
                ans.push_back(0);
            }else{
                int temp=INT_MAX;
                for(auto it:pos){
                    temp=min(temp,abs(it-i));
                }
                ans.push_back(temp);
            }
        }
        return ans;
    }
};
