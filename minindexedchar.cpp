int minIndexChar(string str, string patt)
    {
        if(str==patt) return 0;
        for(int i=0;i<str.length();i++) {
            if(patt.find(str[i])!=string::npos) {
                return i;
            }
        }
        return -1;
        // Your code here
    }