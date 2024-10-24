#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 100  // Define maximum number of books

// Define the structure for a book
struct Book {
    char title[100];
    char author[50];
    int publicationYear;
};

// Define the structure for a library
struct Library {
    struct Book books[MAX_BOOKS];
    int count;  // Number of books currently in the library
};
// Function to add a book to the library
void addBook(struct Library* library) {
    if (library->count >= MAX_BOOKS) {
        printf("Library is full. Cannot add more books.\n");
        return;
    }
    
    struct Book newBook;

    printf("\nEnter book title: ");
    scanf(" %[^\n]", newBook.title);
// Read string with spaces

    printf("Enter author: ");
    scanf(" %[^\n]", newBook.author);  // Read string with spaces

    printf("Enter publication year: ");
    scanf("%d", &newBook.publicationYear);

 // Add the new book to the library
    library->books[library->count] = newBook;
    library->count++;
    printf("Book added successfully!\n");
}

// Function to display all books in the library
void displayBooks(const struct Library* library) {
    printf("\nList of Books in the Library:\n");
    for (int i = 0; i < library->count; i++) {
        printf("Book %d:\n", i + 1);
        printf("  Title: %s\n", library->books[i].title);
        printf("  Author: %s\n", library->books[i].author);
        printf("  Publication Year: %d\n\n", library->books[i].publicationYear);
    }
}
int main() {
    struct Library library = { .count = 0 };  // Initialize the library

    int choice;

    do {
        printf("Library Menu:\n");
        printf("1. Add Book\n");
        printf("2. Display All Books\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addBook(&library);
  break;
            case 2:
                displayBooks(&library);
                break;
            case 3:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 3);

return 0;
}
