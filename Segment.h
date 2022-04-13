//
// Created by User on 2021/4/12.
//

#ifndef SEARCHENGINE_SEGMENT_H
#define SEARCHENGINE_SEGMENT_H

#include <unordered_map>
#include <string>

struct Node{
    std::unordered_map<std::string, Node*> children;
    bool is_leaf = false;
};

class Tire{
private:
    Node *node = nullptr;
public:
    Tire();
    void insert(const std::string& word);
    std::string search(std::string word);
    Node getNode();
};

class Segment {

};

#endif //SEARCHENGINE_SEGMENT_H
