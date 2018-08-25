/*
for (int i=1; i<10; ++i) myvector.push_back(i);   // 1 2 3 4 5 6 7 8 9

std::reverse(myvector.begin(),myvector.end());    // 9 8 7 6 5 4 3 2 1
*/
    void reverseString(string s, int from , int to)
    {
        while(from<to)
        {
            char t = s[from];
            s[from++] = s[to];
            s[to--] = t;
        }
    }
    void leftRotateString(string s, int n, int m)
    {
        m %= n;
        reverseString(s,0,m-1);
        reverseString(s,m,n-1);
        reverseString(s,0,n-1);
    }
