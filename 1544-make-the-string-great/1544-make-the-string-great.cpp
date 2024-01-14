class Solution {
public:
    string makeGood(string s) {
        string result="";

        for(char &ch :s){
            if(!result.empty() && (result.back() +32 ==ch ||result.back() -32==ch)){
                //both are capital -small/small-capital equivalent
                result.pop_back();
            }else{
                result.push_back(ch);
            }
        }
        return result;
    }
};