#include <stdio.h>

int main() {
    int roll_number, age;
    char name[50], address[50], email[50], gender[20];
    
    printf("Enter roll_number: ");
    scanf("%d", &roll_number);
    
    printf("Enter name: ");
    scanf("%s", name);
    
    printf("Enter age: ");
    scanf("%d", &age);
    
    printf("Enter email: ");
    scanf("%s", email);
    
    printf("Enter gender: ");
    scanf(" %c", &gender); // Note the space before %c to consume any newline character
    
    printf("Enter address: ");
    scanf("%s", address);
    
    printf("roll_number = %d\nname = %s\nage = %d\nemail = %s\ngender = %c\naddress = %s\n", roll_number, name, age, email, gender, address);
    
    return 0;
}

