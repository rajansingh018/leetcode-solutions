class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector<double> ans;
        double K = celsius + 273.15;
        double F = (1.80*(celsius)) + 32.00;
        ans.push_back(K);
        ans.push_back(F);
        return ans;
    }
};