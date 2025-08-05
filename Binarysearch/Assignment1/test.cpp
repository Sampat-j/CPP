#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <sstream>

using namespace std;

vector<string> extractAndSortResources(const vector<string>& requests) {
    vector<pair<int, string>> resources;
    
    for (const string& url : requests) {
        // Remove the domain part
        size_t domain_end = url.find("//") + 2;
        size_t path_start = url.find('/', domain_end);
        string path = url.substr(path_start + 1);
        
        // Remove trailing slash if exists
        if (!path.empty() && path.back() == '/') {
            path.pop_back();
        }
        
        // Process path segments
        vector<string> segments;
        istringstream iss(path);
        string segment;
        
        while (getline(iss, segment, '/')) {
            // Skip any segments starting with "id"
            if (segment.size() >= 2 && segment.substr(0, 2) == "id") {
                continue;
            }
            segments.push_back(segment);
        }
        
        // Rebuild the cleaned path
        string cleaned_path;
        for (size_t i = 0; i < segments.size(); ++i) {
            if (i != 0) cleaned_path += "/";
            cleaned_path += segments[i];
        }
        
        // Store with level count for sorting
        resources.emplace_back(segments.size(), cleaned_path);
    }
    
    // Sort by level count (ascending), then by path (alphabetical)
    sort(resources.begin(), resources.end(), 
        [](const pair<int, string>& a, const pair<int, string>& b) {
            if (a.first != b.first) return a.first < b.first;
            return a.second < b.second;
        });
    
    // Extract just the paths
    vector<string> result;
    for (const auto& res : resources) {
        result.push_back(res.second);
    }
    
    return result;
}

int main() {
    // Sample Input 1
    vector<string> requests1 = {
        "https://api.example.com/resource6/resource21/",
        "https://api.example.com/resource951/id60/resource115/",
        "https://api.example.com/resource535/id52/id57/id53/"
    };
    
    vector<string> result1 = extractAndSortResources(requests1);
    cout << "Sample Output 1:" << endl;
    for (const string& res : result1) {
        cout << res << endl;
    }
    cout << endl;
    
    // Sample Input 2
    vector<string> requests2 = {
        "https://api.example.com/resource324/resource249/resource949/resource501/resources516/",
        "https://api.example.com/resource730/",
        "https://api.example.com/resource173/id58/"
    };
    
    vector<string> result2 = extractAndSortResources(requests2);
    cout << "Sample Output 2:" << endl;
    for (const string& res : result2) {
        cout << res << endl;
    }
    
    return 0;
}