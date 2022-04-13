//
// Created by User on 2021/4/4.
//

#include "Document.h"

Document::Document(int id, std::string content) {
    this->DocId = id;
    this->content = content;
}

int Document::getDocId() {
    return DocId;
}

std::string Document::getContent() {
    return content
}

void build