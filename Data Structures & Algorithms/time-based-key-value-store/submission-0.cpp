class TimeMap {
   
     std::unordered_map<std::string, std::vector<std::pair<int, std::string>>> hashTable;
public:

    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        hashTable[key].push_back({timestamp,value});
    }
    
    string get(string key, int timestamp) {
        vector<pair<int,string>>t;
       if(!hashTable.count(key))
       {
        return "";
       }
      auto& arr=hashTable[key];
      int l=0,r=arr.size()-1;
      string res="";
      while(l<=r)
      {
        int mid=l+(r-l)/2;
        if(arr[mid].first<=timestamp)
        {
             res=arr[mid].second;
             l=mid+1;
        }
        else
        {
            r=mid-1;
        }
      }
      return res;
    }
};
