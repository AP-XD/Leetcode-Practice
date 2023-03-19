class WordDictionary
{
    public:
        vector<string> v;
    WordDictionary() {}

    void addWord(string word)
    {
        v.push_back(word);
    }

    bool search(string word)
    {
        int cnt = 0,n=word.size();

        for (int i = 0; i < v.size(); i++)
        {
            if(n==v[i].size()){
            for (auto j = 0; j <n; j++)
            {
                if (v[i][j] == word[j] || word[j] == '.')
                {
                    cnt++;
                }
                else
                {
                    cnt = 0;
                    break;
                }
            }
            if (cnt == n) return true;
            cnt = 0;
        }
        }

        return false;
    }
};

/**
 *Your WordDictionary object will be instantiated and called as such:
 *WordDictionary* obj = new WordDictionary();
 *obj->addWord(word);
 *bool param_2 = obj->search(word);
 */