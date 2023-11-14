#include <iostream>
#include <cstring>
using namespace std;
class Book
{
private:
    char *title;
    char *author;
    int year;

public:
    // Dynamic constructor
    Book(const char *bookTitle, const char *bookAuthor, int publicationYear)
        : year(publicationYear)
    {
        title = new char[strlen(bookTitle) + 1];
        strcpy(title, bookTitle);

        author = new char[strlen(bookAuthor) + 1];
        strcpy(author, bookAuthor);
    }

    // Destructor for memory deallocation
    ~Book()
    {
        delete[] title;
        delete[] author;
    }

    // Method to update the year of publication
    void updatePublicationYear(int newYear)
    {
        year = newYear;
    }

    // Method to display book details
    void displayDetails() const
    {
        cout << "Book Details:" << std::endl;
        cout << "Title: " << title << std::endl;
        cout << "Author: " << author << std::endl;
        cout << "Year of Publication: " << year << std::endl;
    }
};

int main()
{
    char title[100], author[100];
    int publicationYear, updatedYear;

    // Input
    cin.getline(title, 100);
    cin.getline(author, 100);
    cin >> publicationYear;
    cin >> updatedYear;

    // Creating a Book object
    Book book(title, author, publicationYear);

    // Displaying original details
    book.displayDetails();

    // Updating the year of publication
    book.updatePublicationYear(updatedYear);

    // Displaying updated details
    cout << std::endl
         << "Updated Year of Publication: " << updatedYear << std::endl;

    return 0;
}
