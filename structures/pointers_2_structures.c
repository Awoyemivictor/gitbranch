#include <stdio.h>

// Printing with pointers to structures (deferencing)

struct User
{
	char *name;
	char *email;
	int age;
};

int main(void)
{
	struct User user;
	struct User *ptr;

	ptr = &user;
	// Dereferencing the pointer before accessing the data with the '.' symbool
	(*ptr).name = "Foo Bar";
	printf("User.name is %s", *ptr);

	// Using the '->' works the same, and is so much easier
	ptr -> email = "foo@hbtn.com";
	printf("User.email lis %s", *ptr);

	return (0);
}
