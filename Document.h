//
// Created by User on 2021/4/4.
//

#ifndef SEARCHENGINE_DOCUMENT_H
#define SEARCHENGINE_DOCUMENT_H
#include <string>

class Document {
private:
    int DocId;
    std::string content;
public:
    Document(int id, std::string);
    int getDocId();
    std::string getContent();
};

#endif //SEARCHENGINE_DOCUMENT_H
