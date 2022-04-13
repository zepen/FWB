//
// Created by User on 2021/4/4.
//

#ifndef SEARCHENGINE_INDEX_H
#define SEARCHENGINE_INDEX_H
#include <unordered_map>
#include <vector>

class index {
private:
    std::unordered_map<std::string, std::vector<int>> InvertedIndex;
    std::unordered_map<int , std::string> DocMap;
public:
    std::string getDoc(int id);
    void writeIndex(std::vector<Document>);
//    std::vector<string> Query(string query);
};


#endif //SEARCHENGINE_INDEX_H
