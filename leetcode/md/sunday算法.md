# 背景
sunday匹配算法是Daniel M.Sunday于1990年提出的字符串模式匹配。并且以其名字命名。
# 主要思想
sunday算法的主要思想是当父串和子串不匹配时，父串的滑动窗口移动尽可能多的字符，提高匹配效率。    
# 原理
1.设置一个滑动窗口，窗口大小等于子串长度。
2.通过比较滑动窗口和子串，匹配是否相等。
3.若不相等，滑动窗口向后移动。
4.循环步骤2,3直到匹配或滑动窗口无法后移为止。

**提高效率的地方在于滑动窗口向后移动的多少，为了保证尽可能多的移动并且保证不出现遗漏，要设置一个偏移表，查找每次向后移动的多少。**

## 偏移表的设置：
每次查询滑动窗口之后第一个字符，判断该字符是否存在子串中，如果存在于子串中，则说明该字符所在的滑动窗口就可能和子串匹配。
与之匹配的可能就是该字符在子串中位置和其在滑动窗口的位置相同。
举个例子
父串：hellow
子串：llo
滑动窗口大小等于子串大小：3

<img src="C:\Users\航航雷\AppData\Roaming\Typora\typora-user-images\image-20200519132819637.png" alt="image-20200519132819637" style="zoom: 80%;" />

滑动窗口移动下一个字符在子串中最右边出现的位置到尾部位置加+1，此例子中llo

如果父串滑动窗口后一个位置是 'l' 的偏移位置就是len(子串)-1(最右边l出现的下标位置)=2

是'o'的话偏移位置就是len(子串)-2(最右边o出现的下标位置)=1

# 示例

实现strStr()，返回子串在父串中第一次出现的位置。

例如

```
输入: haystack = "hello", needle = "ll"
输出: 2
```

```c++
    int strStr(string haystack, string needle) {
        //sunday匹配机制
        int L = haystack.size();
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
            //滑动窗口substr和子串比较
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
```

# 效率分析

时间复杂度：

最坏 o(N*L),每次滑动窗口向后移动一个位置,子串每次比较N次。

平均o(L)：基本每次直接移动滑动窗口的大小，总共比较长度是父串的长度。