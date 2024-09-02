class Solution {
public:
    double average(std::vector<int>& salary) {
        // Check if the size of salary is less than 3
        if (salary.size() <= 2) {
            throw std::invalid_argument("The size of the salary vector must be at least 3.");
        }
        
        // Sort the salaries to easily remove the min and max
        std::sort(salary.begin(), salary.end());
        
        // Compute the sum excluding the smallest and largest salaries
        double sum = 0;
        int count = salary.size() - 2; // Total elements minus min and max
        
        for (int i = 1; i < salary.size() - 1; ++i) {
            sum += salary[i];
        }
        
        // Return the average
        return sum / count;
    }
};