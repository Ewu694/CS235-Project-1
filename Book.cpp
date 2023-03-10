/* 
    Name: Eric Wu
    Professor: Ms.Tiziana Ligorio
    Course: CS235
    Date Due: 02/10/2023
    Description: This project creates the Book class with accessor and mutator functions.
*/

#include "Book.hpp"

Book::Book()
{
    book_title_ = "";
    book_author_ = "";
    book_page_count_ = 0;
    book_digital_ = false;
}

Book::Book(std::string book_title, std::string book_author, int book_page_count, bool book_digital)
{
    setTitle(book_title);
    setAuthor(book_author);
    setPageCount(book_page_count);
    book_digital_ = book_digital;
}

void Book::setTitle(const std::string &book_title_var)
{
    book_title_ = book_title_var;
}

std::string Book::getTitle() const
{
    return book_title_;
}

void Book::setAuthor(const std::string &book_author_var)
{
    book_author_ = book_author_var;
}

std::string Book::getAuthor() const
{
    return book_author_;
}

void Book::setPageCount(const int & book_page_count_var)
{
    if(book_page_count_var > 0)
    {
        book_page_count_ = book_page_count_var;

    }
}
int Book::getPageCount() const
{
    return book_page_count_;
}

void Book::setDigital()
{
    book_digital_ = true;
}

bool Book::isDigital() const
{
    if (book_digital_ == true)
    {
        return true;
    }
    else
    {
        return false;
    }
}
