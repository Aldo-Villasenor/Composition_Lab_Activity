#include "Page.h"
#include <iostream>

void Page::setPageNumber(int num) {
    pageNumber = num;
}

int Page::getPageNumber() const {
    return pageNumber;
}

void Page::setContent(const std::string& text) {
    content = text;
}

std::string Page::getContent() const {
    return content;
}