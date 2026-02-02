#include <stdio.h>
struct student{
    int ID;
    char name[20];
};
struct address{
    int pincode;
    char cityname[20];
    struct student name;
};
int main() {
struct student std = {24,"harish"};
struct address stud1 = {625526,"theni"};
struct student *point = &std;
struct address *point1 = &stud1;
printf("my name is %s \n",point->name) ;
printf("my ID is %d\n",point->ID);
printf("%d\n",point1->pincode);
printf("%s\n",point1->cityname);

    return 0;

