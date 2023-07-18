class Solution {
public:
    bool checkInclusion(string s1, string s2) {
         int n=s1.size();
        int m=s2.size();
      // If s1 length > s2 length  
        if(n>m)return false;
      //Create two HashMap for s1 and s2
         vector<int> s1FrequencyMap(26, 0);
         vector<int> s2FrequencyMap(26, 0);
      // Fill s1frequencyMap
        for(char ch:s1){
            s1FrequencyMap[ch-'a']++;
        }
      // create a window for the size s1
        int i=0;
        int j=-1;
        for(;i<n-1;i++){
            char ch=s2[i];
            s2FrequencyMap[ch-'a']++;
        }
       //Acquire and Relase Strategy or Sliding Window 
        i--;
        while(i<m-1){
            i++;
          char ch=s2[i];
             s2FrequencyMap[ch-'a']++;
            if(isPermutation(s1FrequencyMap,s2FrequencyMap)){
                return true;
            }
            j++;
             ch=s2[j];
            s2FrequencyMap[ch-'a']--;
           
            
        }
        return false;
    }
    
     bool isPermutation(vector<int> s1FrequencyMap, vector<int> s2FrequencyMap){
        for(int i=0;i<26;i++){
            if(s1FrequencyMap[i]!=s2FrequencyMap[i]) return false;
        }
        return true;
    }
};