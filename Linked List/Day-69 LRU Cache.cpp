class LRUCache {
  private:
        int capacity;
        list<pair<int ,int>>cache;
        unordered_map<int, list<pair<int, int>> :: iterator> map;
        
        void moveToFront(int key, int value){
            cache.erase(map[key]);
            cache.push_front({key, value});
            map[key] = cache.begin();
        }
  public:
    // Constructor for initializing the cache capacity with the given value.
    LRUCache(int cap): capacity(cap) {}

    // Function to return value corresponding to the key.
    int get(int key) {
        if(map.find(key)== map.end()) return -1;
        auto value = map[key]->second;
        moveToFront(key, value);
        return value;
    }

    // Function for storing key-value pair.
    void put(int key, int value) {
        if(map.find(key) != map.end()){
            moveToFront(key, value);
        } else{
            if(cache.size()== capacity){
                auto lru = cache.back();
                map.erase(lru.first);
                cache.pop_back();
            }
            cache.push_front({key, value});
            map[key] = cache.begin();
        }
    }
};
