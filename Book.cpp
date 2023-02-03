#include Book.hpp
using namespace std;

Book::Book()
{
    string book_title = "";
    string book_author = "";
    int page_count = 0;
    bool flag_available = false;
}

Book::Book(string title, string author, int page_count, bool flag_avilable)
{
    setTitle(title);
    setAuthor(author);
    setPageCount(page_count);
    setDigital(flag_available);
}

void setTitle(const string& book_title_var)
{
    book_title = book_title_var;
}

string getTitle() const
{
    return book_title;
}

void setAuthor(const string& book_author_var)
{
    book_author = book_author_var;
}

string setAuthor() const
{
    return book_author;
}

void setPageCount(const int& book_page_count_var)
{
    book_page_count = book_page_count_var;
}

int getPageCount() const
{
    return book_page_count;
}

void setDigital(const bool& book_digital_var)
{
    book_digital_var = true;
    book_digital = book_digital_var;
}

bool isDigital() const
{
    book_digital = book_digital_var;
    if(book_digital == true){
        return true;
    }
}
