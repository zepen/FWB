//
// Created by User on 2021/4/12.
//
#include <iostream>
#include "Segment.h"

Tire::Tire() {
    node = new Node();
}

void Tire::insert(const std::string& word) {
    Node *node1 = node;
    for (auto c : word){
        std::string str_(1, c);
        if (node1->children.count(str_)){
            node1 = node1->children[str_];
        }
        node1->children[str_] = new Node();
        node1 = node1->children[str_];
    }
    node1->is_leaf = true;
}

std::string Tire::search(std::string word) {
    Node *node1 = node;
    for (auto c : word){
        std::string str_(1, c);
        std::cout << str_ << std::endl;
        if (node1->children.count(str_)){
            node1 = node1->children[str_];
        }
    }
    if (node1->is_leaf){
        return word;
    }
    return "";
}

Node Tire::getNode() {
    return reinterpret_cast<const Node &>(this->node);
}
