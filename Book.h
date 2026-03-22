#ifndef COMPOSITION_LAB_ACTIVITY_BOOK_H
#define COMPOSITION_LAB_ACTIVITY_BOOK_H
#include "Page.h"

class Book {
public:
    Book() : title("Untitled"), author("Unknown") {}
    Book(const std::string& t, const std::string& a) : title(t), author(a) {}

    void setTitle(const std::string &t);

    std::string getTitle() const;

    void setAuthor(const std::string &a);

    std::string getAuthor() const;

    void setPageDetails(int pageNum, const std::string &pageContent);

    int getCurrentPageNumber() const;

    std::string getCurrentPageContent() const;

private:
    std::string title;
    std::string author;
    Page currentPage; // Aggregation
};


#endif //COMPOSITION_LAB_ACTIVITY_BOOK_H