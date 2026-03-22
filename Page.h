#ifndef COMPOSITION_LAB_ACTIVITY_PAGE_H
#define COMPOSITION_LAB_ACTIVITY_PAGE_H
#include <string>

class Page {
public:
    Page() : pageNumber(0), content("Empty Page") {}
    Page(int num, const std::string& text) : pageNumber(num), content(text) {}

    void setPageNumber(int num);

    int getPageNumber() const;

    void setContent(const std::string &text);

    std::string getContent() const;

private:
    int pageNumber;
    std::string content;
};

#endif //COMPOSITION_LAB_ACTIVITY_PAGE_H