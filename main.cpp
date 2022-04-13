#include <iostream>
#include <fstream>
#include <cassert>
#include <string>
#include "Document.h"
#include "index.h"
#include "Segment.h"
#include <windows.h>
#include <unordered_map>
#include <map>
#include <memory>

int main() {
      SetConsoleOutputCP(65001);
//    std::vector<std::string> readDoc;
//    std::ifstream infile;
//    infile.open(R"(E:\workplace\SearchEngine\data.txt)");
//    assert(infile.is_open());
//    std::string tmp;
//    while(!infile.eof())
//    {
//        infile >> tmp;
//        std::cout << tmp << std::endl;
//        readDoc.push_back(tmp);
//    }
//    infile.close();
//    std::cout << readDoc.size() << std::endl;
//    Tire *tire = new Tire();
//    tire->insert("abc");
//    tire->insert("all");
//    tire->insert("boy");
//
//    std::cout << "Search: " << tire->search("abcd") << std::endl;
//    std::cout << "Start:" << std::endl;
//    std::string str_ = "算";
//    std::cout << str_ << std::endl;
//    int i = 0;
//    for (auto c : str_){
//        std::string s(3, c);
//        std::cout << s << std::endl;
//        i++;
//    }
//    std::cout <<i;

    std::map<int, int> m = {{1, 0}, {2, 1}};
    for (int i = 0; i< 10; i++){
        m.insert(std::pair<int, int>(i, i));
    }
    std::cout << m[9] << std::endl;

    double a = 0.1;

    auto *pd = new double;
    pd = &a;

    std::cout << pd << std::endl;

    auto *pd1 = new double;
    pd1 = &a;

    std::cout << pd1 << std::endl;

    std::unique_ptr<double> pd2(new double );
    *pd2 = a;

    std::cout << *pd2 << std::endl;

//    delete tire;
//    std::unordered_map<std::string, int> d = {{"算", 1}, {"法", 2}};
//    std::cout << d["a"] << std::endl;

    return 0;
}
