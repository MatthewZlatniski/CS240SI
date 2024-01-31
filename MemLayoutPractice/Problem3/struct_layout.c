#include <stdio.h>


struct Person {
  char name[50];
  int age;
  float height;
};

struct Random {
  double x;
	char c;
  double y;
};

struct Book {
  char title[100];
  char author[50];
  int publicationYear;
  float price;
};

struct BigStruct { 
  char name[50];
  int age;
  double height;
  char address[100];
  long long phone_number;
  float weight;
  int score[10];
  char notes[200];
  double grades[5];

  struct {
    char department[50];
    int employee_id;
    double salary;
  } job_info;
};

int main() {
	printf("%ld\n", sizeof(struct Person));
	printf("%ld\n", sizeof(struct Random));
	printf("%ld\n", sizeof(struct Book));
	printf("%ld\n", sizeof(struct BigStruct));
	return 0;
}
