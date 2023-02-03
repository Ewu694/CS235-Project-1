#ifndef Book_HPP
#define Book_HPP

#include <iostream>
#include <Book.h> 
using namespace std;

class Book{
private:
    string book_title_var;
    string book_author_var;
    int book_page_count;
    bool book_digital;
public:
    Book() = default;
    /**
      Default constructor.
      Default-initializes all private members. Booleans are default-initialized to False.
   */
    Book(string book_title_var, string book_author_var, int book_page_count, bool book_digital);
    /**
      Parameterized constructor.
      @param      : The title of the book (a string)
      @param      : The author of the book (a string)
      @param      : The number of pages in the book (a positive int)
      @param      : A flag indicating whether the book is in digital form (a Boolean),
                    with default value False
      @post       : The private members are set to the values of the corresponding parameters.
    */
    void setTitle(const string& book_title_var);
    /**
    @param  : the title of the Book
    @post   : sets the Book's title to the value of the parameter
    */
    string getTitle() const;
    /**
    @return : the title of the Book
    */
    void setAuthor(const string& book_author);
    /**
    @param  : the name of the author of the Book
    @post   : sets the Book's author to the value of the parameter
    */
    string getAuthor() const;
    /**
    @return : the author of the Book
    */
    void setPageCount(const int& book_page_count);
    /**
    @param  : a positive integer page count
    @pre    : page count > 0 - books cannot have a negative number of pages
    @post   : sets the page count to the value of the parameter
    */
    int getPageCount() const;
    /**
    @return : the page count
    */
    void setDigital(const bool& book_digital);
    /**
    @post   : sets the digital flag to true
    */
    bool isDigital() const;
    /**
    @return true if the book is available in digital form, false otherwise
    Note: this is an accessor function and must follow the same convention as all accessor functions even if it is not called getDigital
    */
}
