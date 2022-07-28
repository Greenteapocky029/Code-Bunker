//Creator: Deven greenlee
//date modified: 7/28/22 
//Purpose: this is temp class for books 
#include <iostream>
#include<cmath>

using namespace std;


class book{
public:
    string title;
    string author;
    int pages;

    book(string aTitle, string aAuthor, int aPages){
        title = aTitle;
        author = aAuthor;
        pages = aPages;

    }

public:
    bool isShortBook()
    {
        if(pages <= 200)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

class manual: public book{
public:
    bool isShortBook(){
        if(pages <= 400)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
int main()
{
    book book1("Star Wars", "George Lucas", 300);
    cout << book1.isShortBook();
    manual man1("c++ for dummies", "someone",700);
    cout < man1.isShortBook();

    return 0;
}
