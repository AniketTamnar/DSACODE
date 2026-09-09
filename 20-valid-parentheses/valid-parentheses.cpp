class Solution {
public:
   bool isValid(string s) {
    vector<char>ans;

    for(char c : s){
        if(c=='(' ||c=='[' ||c=='{' ){
            ans.push_back(c);
        }
        else{
            if(ans.empty()){
                return false;
            }
            char top=ans.back();

            if(c==')' && top!='(' ||
            c==']' && top!='[' ||
            c=='}' && top!='{' ){
                return false;
            }
            ans.pop_back();
        }
    }
    return ans.empty();
}    
};