class Solution
{
public:
    int mostWordsFound(vector<string> &sentences)
    {
        int most = 0;
        for (int j = 0; j < sentences.size(); j++)
        {
            int count = 1;
            for (int i = 0; i < sentences[j].size(); i++)
            {
                if (sentences[j][i] == 32)
                {
                    count++;
                }
            }
            most = max(most, count);
        }
        return most;
    }
};