#include <iostream>
#include <string>
#include "Page.h"
#include "Book.h"

// The following classes are declared inline for students to refactor
// into separate header and implementation files.

int main() {
    std::cout << "--- Original Inline Class Example ---" << std::endl;

    // Demonstrate Page class
    Page p1(1, "Introduction to C++.");
    std::cout << "Page " << p1.getPageNumber() << ": " << p1.getContent() << std::endl;

    // Demonstrate Book class with an aggregated Page
    Book myBook("The C++ Journey", "Bjarne Stroustrup");
    myBook.setPageDetails(42, "Classes and Objects.");

    std::cout << "\nBook Title: " << myBook.getTitle() << std::endl;
    std::cout << "Book Author: " << myBook.getAuthor() << std::endl;
    std::cout << "Current Page: " << myBook.getCurrentPageNumber() << std::endl;
    std::cout << "Page Content: " << myBook.getCurrentPageContent() << std::endl;

    std::cout << "\nYour task is to refactor the 'Page' and 'Book' classes "
              << "into their own header (.h) and implementation (.cpp) files." << std::endl;
    std::cout << "Remember to update this main.cpp file to include the new headers." << std::endl;

    return 0;
}