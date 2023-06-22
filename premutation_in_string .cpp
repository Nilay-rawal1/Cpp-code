class Solution {
 public:
  bool checkInclusion(string s1, string s2) {
    vector<int> count(128);
    int required = s1.length();

    for (const char c : s1)
      ++count[c];

    for (int l = 0, r = 0; r < s2.length(); ++r) {
      if (--count[s2[r]] >= 0)
        --required;
      while (required == 0) {
        if (r - l + 1 == s1.length())
          return true;
        if (++count[s2[l++]] > 0)
          ++required;
      }
    }

    return false;
  }
};

// sencond method code help


class Solution {
    bool checkequal(int a[26], int b[26]){
        for(int i=0;i<26;i++){
            if(a[i]!= b[i]){
                return 0;
            }
        }
        return 1;
    }

public:
    bool checkInclusion(string s1, string s2) {
        //charcter count array
         int count[26]={0};
         for (int i=0;i<s1.length();i++){
             int index=s1[i] -'a';
             count[index]++;
         }

         //traverse s22 string in window od size s1 length n compare
         int i=0;
         int windowsize=s1.length();
         int count2[26]={0};
         // running for the first window
         while(i<windowsize){
             int index=s2[i]-'a';
             count2[index]++ ;
             i++;
         }
         if(checkequal(count,count2)){
             return 1;
         }
         //process continue
         while(i<s2.length()){
             char newchar=s2[i];
             int index= newchar-'a';
             count2[index]++;

             char oldchar =s2[i-windowsize];
             index=oldchar -'a';
             count2[index]--;
             i++;
             if(checkequal(count,count2)){
             return 1;
                }
            }
            return 0;
            

    
         }
};
