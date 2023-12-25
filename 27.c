//Objective: File Handling Operations -
//a. File Write Operation: Write a program to write data into a file.
//b. File Read Operation: Write a program to read data from a file.
//c. File Append Operation: Write a program to append data to a file.
//Program code:
//#program to write data into a file.
#include <stdio.h>
int main() {
FILE *file;
char data[100];
// Open a file for writing
file = fopen("example.txt", "w");
if (file == NULL) {
printf("Error opening the file.\n");
return 1;
}
// Get data from the user
printf("Enter data to write to the file:\n");
fgets(data, sizeof(data), stdin);
// Write data to the file
fprintf(file, "%s", data);
// Close the file
fclose(file);
printf("Data written to the file successfully.\n");
return 0;
}
//#program to read data from a file.
#include <stdio.h>
int main() {
FILE *file;
char data[100];
// Open a file for reading.
file = fopen("example.txt", "r");
if (file == NULL) {
printf("Error opening the file.\n");
return 1;
}
// Read data from the file
fscanf(file, "%[^\n]", data);
// Close the file
fclose(file);
// Display the read data
printf("Data read from the file:\n%s\n", data);
return 0;
}
//#program to append data to a file.
#include <stdio.h>
int main() {
FILE *file;
char data[100];
// Open a file for appending
file = fopen("example.txt", "a");
if (file == NULL) {
printf("Error opening the file.\n");
return 1;
}
// Get data from the user
printf("Enter data to append to the file:\n");
fgets(data, sizeof(data), stdin)
// Append data to the file
fprintf(file, "%s", data);
// Close the file
fclose(file);
printf("Data appended to the file successfully.\n");
return 0;
}
