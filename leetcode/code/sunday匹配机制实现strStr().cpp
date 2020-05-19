class Solution {
public:
    int strStr(string haystack, string needle) {
        //sunday匹配机制
        int L=haystack.size();
        int N = needle.size();
        //1.建立偏移表
        unordered_map<char,int> offset_table;
        for(int i=0;i<N;i++)
        {
            offset_table[needle[i]]=N-i;
        }
        //2.遍历
        int i = 0;
        while(i<=L-N)
        {
            if(haystack.substr(i,N)==needle) return i;
            else
            {
                //查询substr后的字符
                if(i+N>L-1) return -1; //说明后面没有数据了
                else
                {
                    if(offset_table.find(haystack[i+N])!=offset_table.end())
                    {
                        i+=offset_table[haystack[i+N]];
                    }
                    else
                    {
                        i+=N+1;
                    }
                }
            }
        }
        return -1;
    }
};