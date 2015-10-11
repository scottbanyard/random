// password program, just creates a valid password
// scott banyard 11/10/15

#include <stdio.h>
#include <string.h>
#define MAX 500

void repeatPassword(char password[], int n);
void success(char password[]);

void createPassword() {
	char p;
	int i = 0;
	int n;

	printf("How many characters is your password?\n");
	scanf("%d", &n);

	// length validation
	while (n < 6) {
		printf("Sorry your password is too short. Please enter a new character length: \n");
		scanf("%d", &n);
	}

	// using length to create exact sized array
	char password[n-1];

	printf("Enter your chosen password: ");
	scanf("%s", password);

	repeatPassword(password, n);
}

void repeatPassword(char password[], int n) {
	char repeat[n-1];
	char p;
	int i = 0;

	printf("Please repeat your password: ");
	scanf("%s", repeat);
	
	// checks if repeated password is the same
	if (strcmp(repeat, password)==0) {
		success(password);
	} else {
		printf("You have entered two passwords that aren't matching.\nEnding program.\n");
	}

}

void success(char password[]) {
	char yesno[10];
	printf("You have successfully created a password.\n");

	printf("Would you like to see your password?\n");
	scanf("%s", yesno);

	// returns print of password
	if (strcmp(yesno, "yes")==0) {
		printf("Your password is: %s\n", password);
	}
}

int main() {
	createPassword();
	return 0;
}