class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
          std::unordered_map<int, int> frequency_map;
        for (int num : nums) {
            frequency_map[num]++;
        }

       
      priority_queue<pair<int, int>> max_heap;
        for (const auto& pair : frequency_map) {
            max_heap.push({pair.second, pair.first});  
        }

        // Step 3: Extract the top k elements from the heap
        std::vector<int> result;
        for (int i = 0; i < k; ++i) {
            result.push_back(max_heap.top().second);
            max_heap.pop();
        }

        return result;
    }
};