class Solution
{
public:
    int strStr(string haystack, string needle)
    {
        for (int i = 0; i < haystack.length() + 1; i++)
        {
            if (haystack[i] == needle[0])
            {
                if (haystack.substr(i, needle.length()) == needle)
                {
                    return i;
                }
            }
        }
        return -1;
    }
};
