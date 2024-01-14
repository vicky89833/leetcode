class Solution {
public:
    bool isConcatenated(string word, unordered_set<string> &st, unordered_map<string, bool> &memo) {
        if (memo.find(word) != memo.end()) {
            return memo[word];
        }

        int l = word.length();

        for (int i = 0; i < l; i++) {
            string prefix = word.substr(0, i + 1);
            string suffix = word.substr(i + 1);

            if ((st.find(prefix) != st.end() && isConcatenated(suffix, st, memo)) ||
                (st.find(prefix) != st.end() && st.find(suffix) != st.end())) {
                memo[word] = true;
                return true;
            }
        }

        memo[word] = false;
        return false;
    }

    vector<string> findAllConcatenatedWordsInADict(vector<string>& words) {
        int n = words.size();

        unordered_set<string> st(begin(words), end(words));
        unordered_map<string, bool> memo;

        vector<string> result;

        for (int i = 0; i < n; i++) {
            string word = words[i];

            if (isConcatenated(word, st, memo)) {
                result.push_back(word);
            }
        }

        return result;
    }
};
