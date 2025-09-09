class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        unordered_set<string>st;
        unordered_set<string>ans;
        string temp;
        for(int i=0;i<10;i++){
            temp+=s[i];
        }
        st.insert(temp);
        for(int i=0,j=10;j<s.length();j++,i++){
            temp.erase(0, 1);   
            temp.push_back(s[j]);
            if(st.find(temp)!=st.end()){
                ans.insert(temp);
            }else{
                st.insert(temp);
            }
        }
        vector<string>arr;
        for(auto it:ans){
            arr.push_back(it);
        }
        return arr;
    }
};
