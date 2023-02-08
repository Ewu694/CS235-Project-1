#include "Book.hpp"

Book::Book()
{
    book_title = "";
    book_author = "";
    book_page_count = 0;
    book_digital = false;
}

Book::Book(std::string book_title, std::string book_author, int book_page_count, bool book_digital)
{
    setTitle(book_title);
    setAuthor(book_author);
    setPageCount(book_page_count);
    setDigital();
}

void Book::setTitle(const std::string& book_title_var)
{
    book_title = book_title_var;
}

std::string Book::getTitle() const
{
    return book_title;
}

void Book::setAuthor(const std::string& book_author_var)
{
    book_author = book_author_var;
}

std::string Book::getAuthor() const
{
    return book_author;
}

void Book::setPageCount(const int& book_page_count_var)
{
    if(book_page_count_var < 0)
    {
        std::cout << "Page count cannot be negative.";
    }
    book_page_count = book_page_count_var;
}

int Book::getPageCount() const
{
    return book_page_count;
}

void Book::setDigital()
{
    book_digital = true;
}

bool Book::isDigital() const
{
    if(book_digital == true){
        return true;
    }
    else{
        return false;
    }
}
