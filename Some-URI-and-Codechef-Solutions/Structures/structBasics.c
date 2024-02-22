#include <stdio.h>
#include <string.h>

// you can also declare it like this as well.
struct House
{
    float garden_area;
    float square_feet;

}h1, h2, h3;


struct Point2D
{
    float x;
    float y;
};


typedef struct spherical_coords
{
    float r;
    float theta;
}scoords;

typedef struct point3D
{
    int x;
    int y;
    int z;

} point3D;

struct Books
{
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
};

void printBook(struct Books book)
{

    printf("\nBook title : %s\n", book.title);
    printf("Book author : %s\n", book.author);
    printf("Book subject : %s\n", book.subject);
    printf("Book book_id : %d\n\n", book.book_id);
}

point3D calculate_sum(point3D p)
{
    point3D q = {1, 2, 3};
    q.x += p.x;
    q.y += p.y;
    q.z += p.z;

    return q;
}

int main()
{
    struct Point2D a;
    point3D r;

    struct Books Book1;

    // how to add element to the structure type variable
    a.x = 10;
    a.y = 20;

    printf("\n(x,y) = (%f %f)\n\n", a.x, a.y);

    // passing struct to a function
    strcpy(Book1.title, "Harry Potter");
    strcpy(Book1.author, "JK. Rowling");
    strcpy(Book1.subject, "Wizard Fiction");
    Book1.book_id = 1001;

    printBook(Book1);

    // the order matters here!
    struct Books Book2 = {"name", "author", "subject", 10};

    printBook(Book2);

    point3D b = {10, 20, 30};

    point3D result = calculate_sum(b);

    printf("\n%d %d %d\n", result.x, result.y, result.z);

    /**Designated Structure Initialization**/
    // the order does not matter here!!
    scoords s1 = {.theta = 30.0, .r = 90};

    /* Array of structures */
    scoords s_coords[2];

    s_coords[0].r = 10.10;
    s_coords[1].theta = 90;

    s_coords[0].r = 105;
    s_coords[1].theta = 85;

    // can use the variables like this as well.
    h1.garden_area = 1000;
    h2.square_feet = 456;

}

    