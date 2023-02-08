#include "Book.hpp"

Book::Book()
{
    book_title_ = "";
    book_author_ = "";
    book_page_count_ = 0;
    book_digital_ = false;
}

Book::Book(std::string book_title, std::string book_author, int book_page_count, bool book_digital = false)
{
    setName(book_title);
    setAuthor(book_author);
    setPageCount(book_page_count);
    setDigital();
    book_digital_ = book_digital;
}

void Book::setName(const std::string &book_title_var)
{
    book_title_ = book_title_var;
}

std::string Book::getName() const
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
    book_page_count_ = book_page_count_var;
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

int main()
{
    std::cout << "TEST 1: TEST DEFAULT CONSTRUCTOR & ACCESSORS" << std::endl;

    // Test default constructor
    Book my_book;

    // Test accessor functions
    std::cout << my_book.getName() << std::endl;
    std::cout << my_book.getAuthor() << std::endl;
    std::cout << my_book.getPageCount() << std::endl;
    std::cout << my_book.isDigital() << std::endl;

    std::cout << "\nTEST 2: TEST PARAMETERIZED CONSTRUCTOR & ACCESSORS" << std::endl;

    // Test parameterized constructor
    Book my_book1("Harry Potter and the Chamber of Secrets", "J.K Rowling", 253, 1);
    Book my_book2("Moby Dick", "Herman Melville", 378);

    // Test accessor functions
    std::cout << my_book1.getName() << " By " << my_book1.getAuthor()
              << " with page count " << my_book1.getPageCount() << std::endl;
    std::cout << "Digital: " << my_book1.isDigital() << std::endl;

    std::cout << my_book2.getName() << " By " << my_book2.getAuthor()
              << " with page count " << my_book2.getPageCount() << std::endl;
    std::cout << "Digital: " << my_book2.isDigital() << std::endl;

    std::cout << "\nTEST 3: TEST MUTATOR FUNCTIONS" << std::endl;

    // Test mutator functions
    Book my_book3("Moby Dick", "Herman Melville", 378);
    my_book3.setName("50 shades of gray");
    my_book3.setAuthor("E. L. James");
    my_book3.setPageCount(514);
    my_book3.setPageCount(-10);
    my_book3.setDigital();

    // Test accessor functions
    std::cout << my_book3.getName() << " By " << my_book3.getAuthor()
              << " with page count " << my_book3.getPageCount() << std::endl;
    std::cout << "Digital: " << my_book3.isDigital() << std::endl;
}
