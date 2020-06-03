#include<iostream>
#include<string>
#include<cstdlib>

using namespace std;

char displayBoard[200][400];

void alphabet(char text, int A, int B); //Function that creates alphabet with #
void printing(string, int, int, int); //Function for printing alphabets into the board
void clrscr(); //function to clear screen
void voidspace(); //function to remove garbage value
void show(int); //display the the board in console
void breaktime(int); //function that controls the speed of movement

int A, B, speed, step, direction;

int main(){ //main function
    // User inputs
	string text;
	cout << "Enter your string : ";
	getline(cin,text);
	cout << "Enter anchor X : ";
	cin >> A;
	cout << "Enter anchor y : ";
	cin >> B;
	cout << "Enter time step (How many steps you wanna see?)\n: ";
	cin >> step;
	cout << "Enter speed (1 for slow, 10 for fast) : ";
	cin >> speed;
	cout << "Enter direction \n1 for left\n2 for right\n3 for up\n4 for down\n 0 for Stationary \n: ";
	cin >> direction;

	//Depending on the direction :

	if (direction == 1){ //1 moves the string one step to the left for each time steps
		for (int i = 0; i < step; i++)
		{
			printing(text, A, B, speed);
			voidspace();
			A = A - 1;
		}
	}
	else if (direction == 2){ //2 moves the string one step to the right for each time steps
		for (int i = 0; i < step; i++)
		{
			printing(text, A, B, speed);
			voidspace();
			if (A >= 39){
				B = 0;
			}
			A = A + 1;
		}
	}
	else if (direction == 3){//3 moves the string one step to the up for each time steps
		for (int i = 0; i < step; i++)
		{
			printing(text, A, B, speed);
			voidspace();
			if (B >= 19){
				B = 0;
			}
			B = B + 1;
		}
	}
	else if (direction == 4){ //4 moves the string one step to the down for each time steps
		for (int i = 0; i < step; i++)
		{
			printing(text, A, B, speed);
			voidspace();

			B = B - 1;
		}
	}
	else if (direction == 0){ //0 keeps the string stationary
		for (int i = 0; i < step; i++)
		{
			printing(text, A, B, speed);
			voidspace();
		}
	}

}

//Clears garbage value from the board

void voidspace(){
	for (int i = 0; i<20; i++){
		for (int j = 0; j<40; j++){
			displayBoard[i][j] = ' ';
		}
	}
}

//Depending on the value, alphabet draws a single alphabet. Determined by the position anchor point each alphabet draws on a 7x7 grid

void alphabet(char text, int A, int B){
	switch (text)
	{
	case 'a':
	case 'A':
		displayBoard[19 - B][A + 3] = '#';
		displayBoard[19 - B + 1][A + 1] = '#'; displayBoard[19 - B + 1][A + 5] = '#';
		displayBoard[19 - B + 2][A + 0] = '#'; displayBoard[19 - B + 2][A + 6] = '#';
		displayBoard[19 - B + 3][A + 0] = '#'; displayBoard[19 - B + 3][A + 1] = '#'; displayBoard[19 - B + 3][A + 2] = '#'; displayBoard[19 - B + 3][A + 3] = '#'; displayBoard[19 - B + 3][A + 4] = '#'; displayBoard[19 - B + 3][A + 5] = '#'; displayBoard[19 - B + 3][A + 6] = '#';
		displayBoard[19 - B + 4][A + 0] = '#'; displayBoard[19 - B + 4][A + 6] = '#';
		displayBoard[19 - B + 5][A + 0] = '#'; displayBoard[19 - B + 5][A + 6] = '#';
		displayBoard[19 - B + 6][A + 0] = '#'; displayBoard[19 - B + 6][A + 6] = '#';
		break;
	case 'b':
	case 'B':
		displayBoard[19 - B][A + 0] = '#'; displayBoard[19 - B][A + 1] = '#'; displayBoard[19 - B][A + 2] = '#'; displayBoard[19 - B][A + 3] = '#'; displayBoard[19 - B][A + 4] = '#'; displayBoard[19 - B][A + 5] = '#';
		displayBoard[19 - B + 1][A + 0] = '#'; displayBoard[19 - B + 1][A + 6] = '#';
		displayBoard[19 - B + 2][A + 0] = '#'; displayBoard[19 - B + 2][A + 6] = '#';
		displayBoard[19 - B + 3][A + 0] = '#'; displayBoard[19 - B + 3][A + 1] = '#'; displayBoard[19 - B + 3][A + 2] = '#'; displayBoard[19 - B + 3][A + 2] = '#'; displayBoard[19 - B + 3][A + 4] = '#'; displayBoard[19 - B + 3][A + 3] = '#'; displayBoard[19 - B + 3][A + 5] = '#'; displayBoard[19 - B + 3][A + 6] = '#';
		displayBoard[19 - B + 4][A + 0] = '#'; displayBoard[19 - B + 4][A + 6] = '#';
		displayBoard[19 - B + 5][A + 0] = '#'; displayBoard[19 - B + 5][A + 6] = '#';
		displayBoard[19 - B + 6][A + 0] = '#'; displayBoard[19 - B + 6][A + 1] = '#'; displayBoard[19 - B + 6][A + 2] = '#'; displayBoard[19 - B + 6][A + 3] = '#'; displayBoard[19 - B + 6][A + 4] = '#'; displayBoard[19 - B + 6][A + 5] = '#';
		break;
	case 'c':
	case 'C':
		displayBoard[19 - B][A + 2] = '#'; displayBoard[19 - B][A + 3] = '#'; displayBoard[19 - B][A + 4] = '#';
		displayBoard[19 - B + 1][A + 0] = '#'; displayBoard[19 - B + 1][A + 6] = '#';
		displayBoard[19 - B + 2][A + 0] = '#';
		displayBoard[19 - B + 3][A + 0] = '#';
		displayBoard[19 - B + 4][A + 0] = '#';
		displayBoard[19 - B + 5][A + 0] = '#'; displayBoard[19 - B + 5][A + 6] = '#';
		displayBoard[19 - B + 6][A + 2] = '#'; displayBoard[19 - B + 6][A + 3] = '#'; displayBoard[19 - B + 6][A + 4] = '#';
		break;
	case 'd':
	case 'D':
		displayBoard[19 - B][A + 0] = '#'; displayBoard[19 - B][A + 1] = '#'; displayBoard[19 - B][A + 2] = '#'; displayBoard[19 - B][A + 3] = '#'; displayBoard[19 - B][A + 4] = '#'; displayBoard[19 - B][A + 5] = '#';
		displayBoard[19 - B + 1][A + 0] = '#'; displayBoard[19 - B + 1][A + 6] = '#';
		displayBoard[19 - B + 2][A + 0] = '#'; displayBoard[19 - B + 2][A + 6] = '#';
		displayBoard[19 - B + 3][A + 0] = '#'; displayBoard[19 - B + 3][A + 6] = '#';
		displayBoard[19 - B + 4][A + 0] = '#'; displayBoard[19 - B + 4][A + 6] = '#';
		displayBoard[19 - B + 5][A + 0] = '#'; displayBoard[19 - B + 5][A + 6] = '#';
		displayBoard[19 - B + 6][A + 0] = '#'; displayBoard[19 - B + 6][A + 1] = '#'; displayBoard[19 - B + 6][A + 2] = '#'; displayBoard[19 - B + 6][A + 3] = '#'; displayBoard[19 - B + 6][A + 4] = '#'; displayBoard[19 - B + 6][A + 5] = '#';
		break;
	case 'e':
	case 'E':
		displayBoard[19 - B + 3][A + 0] = '#'; displayBoard[19 - B + 3][A + 1] = '#'; displayBoard[19 - B + 3][A + 2] = '#'; displayBoard[19 - B + 3][A + 3] = '#'; displayBoard[19 - B + 3][A + 4] = '#'; displayBoard[19 - B + 3][A + 5] = '#'; displayBoard[19 - B + 3][A + 6] = '#';
		displayBoard[19 - B][A + 0] = '#'; displayBoard[19 - B][A + 1] = '#'; displayBoard[19 - B][A + 2] = '#'; displayBoard[19 - B][A + 3] = '#'; displayBoard[19 - B][A + 4] = '#'; displayBoard[19 - B][A + 5] = '#'; displayBoard[19 - B][A + 6] = '#';
		displayBoard[19 - B + 6][A + 0] = '#'; displayBoard[19 - B + 6][A + 1] = '#'; displayBoard[19 - B + 6][A + 2] = '#'; displayBoard[19 - B + 6][A + 3] = '#'; displayBoard[19 - B + 6][A + 4] = '#'; displayBoard[19 - B + 6][A + 5] = '#'; displayBoard[19 - B + 6][A + 6] = '#';
		displayBoard[19 - B + 1][A + 0] = '#';
		displayBoard[19 - B + 2][A + 0] = '#';
		displayBoard[19 - B + 4][A + 0] = '#';
		displayBoard[19 - B + 5][A + 0] = '#';
		break;
	case 'F':
	case 'f':
		displayBoard[19 - B + 3][A + 0] = '#'; displayBoard[19 - B + 3][A + 1] = '#'; displayBoard[19 - B + 3][A + 2] = '#'; displayBoard[19 - B + 3][A + 3] = '#'; displayBoard[19 - B + 3][A + 4] = '#'; displayBoard[19 - B + 3][A + 5] = '#'; displayBoard[19 - B + 3][A + 6] = '#';
		displayBoard[19 - B][A + 0] = '#'; displayBoard[19 - B][A + 1] = '#'; displayBoard[19 - B][A + 2] = '#'; displayBoard[19 - B][A + 3] = '#'; displayBoard[19 - B][A + 4] = '#'; displayBoard[19 - B][A + 5] = '#'; displayBoard[19 - B][A + 6] = '#';
		displayBoard[19 - B+6][A + 0] = '#';
		displayBoard[19 - B + 1][A + 0] = '#';
		displayBoard[19 - B + 2][A + 0] = '#';
		displayBoard[19 - B + 4][A + 0] = '#';
		displayBoard[19 - B + 5][A + 0] = '#';
		break;
	case 'g':
	case 'G':
		displayBoard[19 - B][A + 1] = '#'; displayBoard[19 - B][A + 2] = '#'; displayBoard[19 - B][A + 3] = '#'; displayBoard[19 - B][A + 4] = '#'; displayBoard[19 - B][A + 5] = '#';
		displayBoard[19 - B + 1][A + 0] = '#'; displayBoard[19 - B + 1][A + 6] = '#';
		displayBoard[19 - B + 2][A + 0] = '#';
		displayBoard[19 - B + 3][A + 0] = '#';
		displayBoard[19 - B + 4][A + 0] = '#'; displayBoard[19 - B + 4][A + 5] = '#'; displayBoard[19 - B + 4][A + 6] = '#';
		displayBoard[19 - B + 5][A + 6] = '#'; displayBoard[19 - B + 5][A] = '#';
		displayBoard[19 - B + 6][A + 1] = '#'; displayBoard[19 - B + 6][A + 2] = '#'; displayBoard[19 - B + 6][A + 3] = '#'; displayBoard[19 - B + 6][A + 4] = '#'; displayBoard[19 - B + 6][A + 5] = '#';
		break;
	case 'H':
	case 'h':
		displayBoard[19 - B + 3][A + 0] = '#'; displayBoard[19 - B + 3][A + 1] = '#'; displayBoard[19 - B + 3][A + 2] = '#'; displayBoard[19 - B + 3][A + 3] = '#'; displayBoard[19 - B + 3][A + 4] = '#'; displayBoard[19 - B + 3][A + 5] = '#'; displayBoard[19 - B + 3][A + 6] = '#';
		displayBoard[19 - B][A + 0] = '#'; displayBoard[19 - B][A + 6] = '#';
		displayBoard[19 - B + 6][A + 0] = '#'; displayBoard[19 - B + 6][A + 6] = '#';
		displayBoard[19 - B + 1][A + 0] = '#'; displayBoard[19 - B + 1][A + 6] = '#';
		displayBoard[19 - B + 2][A + 0] = '#'; displayBoard[19 - B + 2][A + 6] = '#';
		displayBoard[19 - B + 4][A + 0] = '#'; displayBoard[19 - B + 4][A + 6] = '#';
		displayBoard[19 - B + 5][A + 0] = '#'; displayBoard[19 - B + 5][A + 6] = '#';
		break;
	case 'i':
	case 'I':
		displayBoard[19 - B + 3][A + 3] = '#';
		displayBoard[19 - B][A + 1] = '#'; displayBoard[19 - B][A + 2] = '#'; displayBoard[19 - B][A + 3] = '#'; displayBoard[19 - B][A + 4] = '#'; displayBoard[19 - B][A + 5] = '#';
		displayBoard[19 - B + 6][A + 3] = '#'; displayBoard[19 - B + 6][A + 1] = '#'; displayBoard[19 - B + 6][A + 2] = '#'; displayBoard[19 - B + 6][A + 4] = '#'; displayBoard[19 - B + 6][A + 5] = '#';
		displayBoard[19 - B + 1][A + 3] = '#';
		displayBoard[19 - B + 2][A + 3] = '#';
		displayBoard[19 - B + 4][A + 3] = '#';
		displayBoard[19 - B + 5][A + 3] = '#';
		break;
	case 'J':
	case 'j':
		displayBoard[19 - B][A + 6] = '#';
		displayBoard[19 - B + 1][A + 6] = '#';
		displayBoard[19 - B + 2][A + 6] = '#';
		displayBoard[19 - B + 3][A + 6] = '#';
		displayBoard[19 - B + 4][A + 6] = '#';
		displayBoard[19 - B + 5][A + 6] = '#'; displayBoard[19 - B + 5][A + 0] = '#';
		displayBoard[19 - B + 6][A + 6] = '#'; displayBoard[19 - B + 6][A + 5] = '#'; displayBoard[19 - B + 6][A + 4] = '#'; displayBoard[19 - B + 6][A + 3] = '#'; displayBoard[19 - B + 6][A + 2] = '#'; displayBoard[19 - B + 6][A + 1] = '#';
		break;
	case 'K':
	case 'k':
		displayBoard[19 - B][A + 6] = '#'; displayBoard[19 - B][A] = '#';
		displayBoard[19 - B + 1][A + 4] = '#'; displayBoard[19 - B + 1][A] = '#';
		displayBoard[19 - B + 2][A] = '#'; displayBoard[19 - B + 2][A + 2] = '#';
		displayBoard[19 - B + 3][A] = '#'; displayBoard[19 - B + 3][A + 1] = '#';
		displayBoard[19 - B + 6][A + 6] = '#'; displayBoard[19 - B + 6][A] = '#';
		displayBoard[19 - B + 5][A + 4] = '#'; displayBoard[19 - B + 5][A] = '#';
		displayBoard[19 - B + 4][A] = '#'; displayBoard[19 - B + 4][A + 2] = '#';
		break;
	case 'L':
	case 'l':
		displayBoard[19 - B][A] = '#';
		displayBoard[19 - B + 1][A] = '#';
		displayBoard[19 - B + 2][A] = '#';
		displayBoard[19 - B + 3][A] = '#';
		displayBoard[19 - B + 6][A + 6] = '#'; displayBoard[19 - B + 6][A] = '#'; displayBoard[19 - B + 6][A + 1] = '#'; displayBoard[19 - B + 6][A + 2] = '#'; displayBoard[19 - B + 6][A + 3] = '#'; displayBoard[19 - B + 6][A + 4] = '#'; displayBoard[19 - B + 6][A + 5] = '#';
		displayBoard[19 - B + 5][A] = '#';
		displayBoard[19 - B + 4][A] = '#';
		break;
	case 'm':
	case 'M':
		displayBoard[19 - B][A] = '#'; displayBoard[19 - B][A + 1] = '#'; displayBoard[19 - B][A + 5] = '#'; displayBoard[19 - B][A + 6] = '#';
		displayBoard[19 - B + 1][A] = '#'; displayBoard[19 - B + 1][A + 2] = '#'; displayBoard[19 - B + 1][A + 4] = '#'; displayBoard[19 - B + 1][A + 6] = '#';
		displayBoard[19 - B + 2][A] = '#'; displayBoard[19 - B + 2][A + 3] = '#'; displayBoard[19 - B + 1][A + 6] = '#';
		displayBoard[19 - B + 3][A] = '#'; displayBoard[19 - B + 3][A + 6] = '#';
		displayBoard[19 - B + 4][A] = '#'; displayBoard[19 - B + 4][A + 6] = '#';
		displayBoard[19 - B + 5][A] = '#'; displayBoard[19 - B + 5][A + 6] = '#';
		displayBoard[19 - B + 6][A] = '#'; displayBoard[19 - B + 6][A + 6] = '#';
		break;
	case 'n':
	case 'N':
		displayBoard[19 - B][A] = '#'; displayBoard[19 - B][A + 1] = '#'; displayBoard[19 - B][A + 6] = '#';
		displayBoard[19 - B + 1][A] = '#'; displayBoard[19 - B + 1][A + 2] = '#'; displayBoard[19 - B + 1][A + 6] = '#';
		displayBoard[19 - B + 2][A] = '#'; displayBoard[19 - B + 2][A + 3] = '#'; displayBoard[19 - B + 3][A + 6] = '#';
		displayBoard[19 - B + 3][A] = '#'; displayBoard[19 - B + 3][A + 6] = '#'; displayBoard[19 - B + 3][A + 4] = '#';
		displayBoard[19 - B + 4][A] = '#'; displayBoard[19 - B + 4][A + 6] = '#'; displayBoard[19 - B + 4][A + 5] = '#';
		displayBoard[19 - B + 5][A] = '#'; displayBoard[19 - B + 5][A + 6] = '#';
		displayBoard[19 - B + 4][A] = '#'; displayBoard[19 - B + 6][A + 6] = '#';
		break;
	case 'O':
	case 'o':
		displayBoard[19 - B][A + 1] = '#'; displayBoard[19 - B][A + 1] = '#'; displayBoard[19 - B][A + 2] = '#'; displayBoard[19 - B][A + 3] = '#'; displayBoard[19 - B][A + 4] = '#'; displayBoard[19 - B][A + 5] = '#';
		displayBoard[19 - B + 1][A] = '#'; displayBoard[19 - B + 1][A + 6] = '#';
		displayBoard[19 - B + 2][A] = '#'; displayBoard[19 - B + 2][A + 6] = '#';
		displayBoard[19 - B + 3][A] = '#'; displayBoard[19 - B + 3][A + 6] = '#';
		displayBoard[19 - B + 4][A] = '#'; displayBoard[19 - B + 4][A + 6] = '#';
		displayBoard[19 - B + 5][A] = '#'; displayBoard[19 - B + 5][A + 6] = '#';
		displayBoard[19 - B + 6][A + 1] = '#'; displayBoard[19 - B + 6][A + 2] = '#'; displayBoard[19 - B + 6][A + 3] = '#'; displayBoard[19 - B + 6][A + 4] = '#'; displayBoard[19 - B + 6][A + 5] = '#';
		break;
	case 'P':
	case 'p':
		displayBoard[19 - B][A + 1] = '#'; displayBoard[19 - B][A + 1] = '#'; displayBoard[19 - B][A + 2] = '#'; displayBoard[19 - B][A + 3] = '#'; displayBoard[19 - B][A + 4] = '#'; displayBoard[19 - B][A + 5] = '#';
		displayBoard[19 - B + 1][A] = '#'; displayBoard[19 - B + 1][A + 6] = '#';
		displayBoard[19 - B + 2][A] = '#'; displayBoard[19 - B + 2][A + 6] = '#';
		displayBoard[19 - B + 3][A] = '#'; displayBoard[19 - B + 3][A + 1] = '#'; displayBoard[19 - B + 3][A + 2] = '#'; displayBoard[19 - B + 3][A + 3] = '#'; displayBoard[19 - B + 3][A + 4] = '#'; displayBoard[19 - B + 3][A + 5] = '#';
		displayBoard[19 - B + 4][A] = '#';
		displayBoard[19 - B + 5][A] = '#';
		displayBoard[19 - B + 6][A] = '#';
		break;
	case 'q':
	case 'Q':
		displayBoard[19 - B][A + 1] = '#'; displayBoard[19 - B][A + 1] = '#'; displayBoard[19 - B][A + 2] = '#'; displayBoard[19 - B][A + 3] = '#'; displayBoard[19 - B][A + 4] = '#'; displayBoard[19 - B][A + 5] = '#';
		displayBoard[19 - B + 1][A] = '#'; displayBoard[19 - B + 1][A + 6] = '#';
		displayBoard[19 - B + 2][A] = '#'; displayBoard[19 - B + 2][A + 6] = '#';
		displayBoard[19 - B + 3][A] = '#'; displayBoard[19 - B + 3][A + 6] = '#';
		displayBoard[19 - B + 4][A] = '#'; displayBoard[19 - B + 4][A + 4] = '#'; displayBoard[19 - B + 4][A + 6] = '#';
		displayBoard[19 - B + 5][A] = '#'; displayBoard[19 - B + 5][A + 5] = '#';
		displayBoard[19 - B + 6][A + 1] = '#'; displayBoard[19 - B + 6][A + 2] = '#'; displayBoard[19 - B + 6][A + 3] = '#'; displayBoard[19 - B + 6][A + 4] = '#'; displayBoard[19 - B + 6][A + 6] = '#';
		break;
	case 'R':
	case 'r':
		displayBoard[19 - B][A] = '#'; displayBoard[19 - B][A + 1] = '#'; displayBoard[19 - B][A + 2] = '#'; displayBoard[19 - B][A + 3] = '#'; displayBoard[19 - B][A + 4] = '#'; displayBoard[19 - B][A + 5] = '#';
		displayBoard[19 - B + 1][A] = '#'; displayBoard[19 - B + 1][A + 6] = '#';
		displayBoard[19 - B + 2][A] = '#'; displayBoard[19 - B + 2][A + 6] = '#';
		displayBoard[19 - B + 3][A] = '#'; displayBoard[19 - B + 3][A + 1] = '#'; displayBoard[19 - B + 3][A + 2] = '#'; displayBoard[19 - B + 3][A + 3] = '#'; displayBoard[19 - B + 3][A + 4] = '#'; displayBoard[19 - B + 3][A + 5] = '#';
		displayBoard[19 - B + 4][A] = '#'; displayBoard[19 - B + 4][A + 1] = '#';
		displayBoard[19 - B + 5][A] = '#'; displayBoard[19 - B + 5][A + 3] = '#';
		displayBoard[19 - B + 6][A] = '#'; displayBoard[19 - B + 6][A + 5] = '#';
		break;
	case 's':
	case 'S':
		displayBoard[19 - B][A + 1] = '#'; displayBoard[19 - B][A + 2] = '#'; displayBoard[19 - B][A + 3] = '#'; displayBoard[19 - B][A + 4] = '#'; displayBoard[19 - B][A + 5] = '#'; displayBoard[19 - B][A + 6] = '#';
		displayBoard[19 - B + 1][A] = '#';
		displayBoard[19 - B + 2][A] = '#';
		displayBoard[19 - B + 3][A] = '#'; displayBoard[19 - B + 3][A + 1] = '#'; displayBoard[19 - B + 3][A + 2] = '#'; displayBoard[19 - B + 3][A + 3] = '#'; displayBoard[19 - B + 3][A + 4] = '#'; displayBoard[19 - B + 3][A + 5] = '#';
		displayBoard[19 - B + 4][A + 6] = '#';
		displayBoard[19 - B + 5][A + 6] = '#';
		displayBoard[19 - B + 6][A] = '#'; displayBoard[19 - B + 6][A + 1] = '#'; displayBoard[19 - B + 6][A + 2] = '#'; displayBoard[19 - B + 6][A + 3] = '#'; displayBoard[19 - B + 6][A + 4] = '#'; displayBoard[19 - B + 6][A + 5] = '#';
		break;
	case 'T':
	case 't':
		displayBoard[19 - B + 3][A + 3] = '#';
		displayBoard[19 - B][A] = '#'; displayBoard[19 - B][A + 1] = '#'; displayBoard[19 - B][A + 2] = '#'; displayBoard[19 - B][A + 3] = '#'; displayBoard[19 - B][A + 4] = '#'; displayBoard[19 - B][A + 5] = '#'; displayBoard[19 - B][A + 6] = '#';
		displayBoard[19 - B + 6][A + 3] = '#';
		displayBoard[19 - B + 1][A + 3] = '#';
		displayBoard[19 - B + 2][A + 3] = '#';
		displayBoard[19 - B + 4][A + 3] = '#';
		displayBoard[19 - B + 5][A + 3] = '#';
		break;
	case 'U':
	case 'u':
		displayBoard[19 - B][A] = '#'; displayBoard[19 - B][A + 6] = '#';
		displayBoard[19 - B + 1][A] = '#'; displayBoard[19 - B + 1][A + 6] = '#';
		displayBoard[19 - B + 2][A] = '#'; displayBoard[19 - B + 2][A + 6] = '#';
		displayBoard[19 - B + 3][A] = '#'; displayBoard[19 - B + 3][A + 6] = '#';
		displayBoard[19 - B + 4][A] = '#'; displayBoard[19 - B + 4][A + 6] = '#';
		displayBoard[19 - B + 5][A] = '#'; displayBoard[19 - B + 5][A + 6] = '#';
		displayBoard[19 - B + 6][A + 1] = '#'; displayBoard[19 - B + 6][A + 2] = '#'; displayBoard[19 - B + 6][A + 3] = '#'; displayBoard[19 - B + 6][A + 4] = '#'; displayBoard[19 - B + 6][A + 5] = '#';
		break;
	case 'V':
	case 'v':
		displayBoard[19 - B][A] = '#'; displayBoard[19 - B][A + 6] = '#';
		displayBoard[19 - B + 1][A] = '#'; displayBoard[19 - B + 1][A + 6] = '#';
		displayBoard[19 - B + 2][A] = '#'; displayBoard[19 - B + 2][A + 6] = '#';
		displayBoard[19 - B + 3][A] = '#'; displayBoard[19 - B + 3][A + 6] = '#';
		displayBoard[19 - B + 4][A] = '#'; displayBoard[19 - B + 4][A + 6] = '#';
		displayBoard[19 - B + 5][A + 1] = '#'; displayBoard[19 - B + 5][A + 2] = '#'; displayBoard[19 - B + 5][A + 4] = '#'; displayBoard[19 - B + 5][A + 5] = '#';
		displayBoard[19 - B + 6][A + 3] = '#';
		break;
	case 'W':
	case 'w':
		displayBoard[19 - B][A] = '#'; displayBoard[19 - B][A + 6] = '#';
		displayBoard[19 - B + 1][A] = '#'; displayBoard[19 - B + 1][A + 6] = '#';
		displayBoard[19 - B + 2][A] = '#'; displayBoard[19 - B + 2][A + 6] = '#';
		displayBoard[19 - B + 3][A] = '#'; displayBoard[19 - B + 3][A + 6] = '#';
		displayBoard[19 - B + 4][A] = '#'; displayBoard[19 - B + 4][A + 6] = '#'; displayBoard[19 - B + 4][A + 3] = '#';
		displayBoard[19 - B + 5][A] = '#'; displayBoard[19 - B + 5][A + 1] = '#'; displayBoard[19 - B + 5][A + 2] = '#'; displayBoard[19 - B + 5][A + 4] = '#'; displayBoard[19 - B + 5][A + 5] = '#'; displayBoard[19 - B + 5][A + 6] = '#';
		displayBoard[19 - B + 6][A] = '#'; displayBoard[19 - B + 6][A + 6] = '#';
		break;
	case 'X':
	case 'x':
		displayBoard[19 - B][A] = '#'; displayBoard[19 - B][A + 1] = '#'; displayBoard[19 - B][A + 6] = '#';
		displayBoard[19 - B + 1][A] = '#'; displayBoard[19 - B + 1][A + 6] = '#';
		displayBoard[19 - B + 2][A + 1] = '#'; displayBoard[19 - B + 2][A + 2] = '#'; displayBoard[19 - B + 2][A + 4] = '#'; displayBoard[19 - B + 2][A + 5] = '#';
		displayBoard[19 - B + 3][A + 3] = '#';
		displayBoard[19 - B + 4][A + 1] = '#'; displayBoard[19 - B + 4][A + 2] = '#'; displayBoard[19 - B + 4][A + 4] = '#'; displayBoard[19 - B + 4][A + 5] = '#';
		displayBoard[19 - B + 5][A] = '#'; displayBoard[19 - B + 5][A + 6] = '#';
		displayBoard[19 - B + 6][A] = '#'; displayBoard[19 - B + 6][A + 6] = '#';
		break;
	case 'Y':
	case 'y':
		displayBoard[19 - B][A] = '#'; displayBoard[19 - B][A+6] = '#';
		displayBoard[19 - B + 1][A] = '#'; displayBoard[19 - B+1][A+6] = '#';
		displayBoard[19 - B + 2][A + 1] = '#'; displayBoard[19 - B + 2][A + 2] = '#'; displayBoard[19 - B + 2][A + 4] = '#'; displayBoard[19 - B + 2][A + 5] = '#';
		displayBoard[19 - B + 3][A + 3] = '#';
		displayBoard[19 - B + 4][A + 3] = '#';
		displayBoard[19 - B + 5][A + 3] = '#';
		displayBoard[19 - B + 4][A + 3] = '#';
		break;
	case 'z':
	case 'Z':
		displayBoard[19 - B][A] = '#'; displayBoard[19 - B][A + 1] = '#'; displayBoard[19 - B][A + 2] = '#'; displayBoard[19 - B][A + 3] = '#'; displayBoard[19 - B][A + 4] = '#'; displayBoard[19 - B][A + 5] = '#'; displayBoard[19 - B][A + 6] = '#';
		displayBoard[19 - B + 1][A + 5] = '#';
		displayBoard[19 - B + 2][A + 4] = '#';
		displayBoard[19 - B + 3][A + 3] = '#';
		displayBoard[19 - B + 4][A + 2] = '#';
		displayBoard[19 - B + 5][A + 1] = '#';
		displayBoard[19 - B + 6][A] = '#'; displayBoard[19 - B + 6][A + 1] = '#'; displayBoard[19 - B + 6][A + 2] = '#'; displayBoard[19 - B + 6][A + 3] = '#'; displayBoard[19 - B + 6][A + 4] = '#'; displayBoard[19 - B + 6][A + 5] = '#'; displayBoard[19 - B + 6][A + 6] = '#';
		break;
	case '0':
		displayBoard[19 - B][A + 1] = '#'; displayBoard[19 - B][A + 1] = '#'; displayBoard[19 - B][A + 2] = '#'; displayBoard[19 - B][A + 3] = '#'; displayBoard[19 - B][A + 4] = '#'; displayBoard[19 - B][A + 5] = '#';
		displayBoard[19 - B + 1][A] = '#'; displayBoard[19 - B + 1][A + 6] = '#';
		displayBoard[19 - B + 2][A] = '#'; displayBoard[19 - B + 2][A + 6] = '#'; displayBoard[19 - B + 2][A + 4] = '#'; displayBoard[19 - B + 2][A + 5] = '#';
		displayBoard[19 - B + 3][A] = '#'; displayBoard[19 - B + 3][A + 6] = '#'; displayBoard[19 - B + 3][A + 3] = '#';
		displayBoard[19 - B + 4][A] = '#'; displayBoard[19 - B + 4][A + 6] = '#'; displayBoard[19 - B + 4][A + 1] = '#'; displayBoard[19 - B + 4][A + 2] = '#';
		displayBoard[19 - B + 5][A] = '#'; displayBoard[19 - B + 5][A + 6] = '#';
		displayBoard[19 - B + 6][A + 1] = '#'; displayBoard[19 - B + 6][A + 2] = '#'; displayBoard[19 - B + 6][A + 3] = '#'; displayBoard[19 - B + 6][A + 4] = '#'; displayBoard[19 - B + 6][A + 5] = '#';
		break;
	case '1':
		displayBoard[19 - B][A + 2] = '#'; displayBoard[19 - B][A + 3] = '#';
		displayBoard[19 - B + 1][A + 3] = '#'; displayBoard[19 - B + 1][A + 1] = '#';
		displayBoard[19 - B + 2][A + 3] = '#'; displayBoard[19 - B + 2][A + 0] = '#';
		displayBoard[19 - B + 3][A + 3] = '#';
		displayBoard[19 - B + 4][A + 3] = '#';
		displayBoard[19 - B + 5][A + 3] = '#';
		displayBoard[19 - B + 6][A + 3] = '#'; displayBoard[19 - B + 6][A + 1] = '#'; displayBoard[19 - B + 6][A + 2] = '#'; displayBoard[19 - B + 6][A + 4] = '#'; displayBoard[19 - B + 6][A + 5] = '#';
		break;
	case '2':
		displayBoard[19 - B][A + 1] = '#'; displayBoard[19 - B][A + 2] = '#'; displayBoard[19 - B][A + 3] = '#'; displayBoard[19 - B][A + 4] = '#'; displayBoard[19 - B][A + 5] = '#';
		displayBoard[19 - B + 1][A] = '#'; displayBoard[19 - B + 1][A + 6] = '#';
		displayBoard[19 - B + 2][A + 5] = '#';
		displayBoard[19 - B + 3][A + 4] = '#';
		displayBoard[19 - B + 4][A + 3] = '#';
		displayBoard[19 - B + 5][A + 2] = '#';
		displayBoard[19 - B + 6][A] = '#'; displayBoard[19 - B + 6][A + 1] = '#'; displayBoard[19 - B + 6][A + 2] = '#'; displayBoard[19 - B + 6][A + 3] = '#'; displayBoard[19 - B + 6][A + 4] = '#'; displayBoard[19 - B + 6][A + 5] = '#'; displayBoard[19 - B + 6][A + 6] = '#';
		break;
	case '3':
		displayBoard[19 - B][A] = '#'; displayBoard[19 - B][A + 1] = '#'; displayBoard[19 - B][A + 2] = '#'; displayBoard[19 - B][A + 3] = '#'; displayBoard[19 - B][A + 4] = '#'; displayBoard[19 - B][A + 5] = '#'; displayBoard[19 - B][A + 6] = '#';
		displayBoard[19 - B + 1][A + 5] = '#';
		displayBoard[19 - B + 2][A + 4] = '#';
		displayBoard[19 - B + 3][A + 3] = '#'; displayBoard[19 - B + 3][A + 4] = '#';
		displayBoard[19 - B + 4][A + 6] = '#';
		displayBoard[19 - B + 5][A + 6] = '#'; displayBoard[19 - B + 5][A] = '#';
		displayBoard[19 - B + 6][A + 1] = '#'; displayBoard[19 - B + 6][A + 2] = '#'; displayBoard[19 - B + 6][A + 3] = '#'; displayBoard[19 - B + 6][A + 4] = '#'; displayBoard[19 - B + 6][A + 5] = '#';
		break;
	case '4':
		displayBoard[19 - B][A + 4] = '#'; displayBoard[19 - B][A + 5] = '#';
		displayBoard[19 - B + 1][A + 5] = '#'; displayBoard[19 - B + 1][A + 3] = '#';
		displayBoard[19 - B + 2][A + 2] = '#'; displayBoard[19 - B + 2][A + 5] = '#';
		displayBoard[19 - B + 3][A + 1] = '#'; displayBoard[19 - B + 3][A + 5] = '#';
		displayBoard[19 - B + 4][A + 0] = '#'; displayBoard[19 - B + 4][A + 1] = '#'; displayBoard[19 - B + 4][A + 2] = '#'; displayBoard[19 - B + 4][A + 3] = '#'; displayBoard[19 - B + 4][A + 4] = '#'; displayBoard[19 - B + 4][A + 5] = '#'; displayBoard[19 - B + 4][A + 6] = '#';
		displayBoard[19 - B + 5][A + 5] = '#';
		displayBoard[19 - B + 6][A + 5] = '#';
		break;
	case '5':
		displayBoard[19 - B][A] = '#'; displayBoard[19 - B][A + 1] = '#'; displayBoard[19 - B][A + 2] = '#'; displayBoard[19 - B][A + 3] = '#'; displayBoard[19 - B][A + 4] = '#'; displayBoard[19 - B][A + 5] = '#'; displayBoard[19 - B][A + 6] = '#';
		displayBoard[19 - B + 1][A] = '#';
		displayBoard[19 - B + 2][A] = '#'; displayBoard[19 - B + 2][A + 1] = '#'; displayBoard[19 - B + 2][A + 2] = '#'; displayBoard[19 - B + 2][A + 3] = '#'; displayBoard[19 - B + 2][A + 4] = '#'; displayBoard[19 - B + 2][A + 5] = '#';
		displayBoard[19 - B + 3][A + 6] = '#';
		displayBoard[19 - B + 4][A + 6] = '#';
		displayBoard[19 - B + 5][A] = '#'; displayBoard[19 - B + 5][A + 6] = '#';
		displayBoard[19 - B + 6][A] = '#'; displayBoard[19 - B + 6][A + 1] = '#'; displayBoard[19 - B + 6][A + 2] = '#'; displayBoard[19 - B + 6][A + 3] = '#'; displayBoard[19 - B + 6][A + 4] = '#'; displayBoard[19 - B + 6][A + 5] = '#';
		break;
	case '6':
		displayBoard[19 - B][A + 2] = '#'; displayBoard[19 - B][A + 3] = '#'; displayBoard[19 - B][A + 4] = '#'; displayBoard[19 - B][A + 5] = '#'; displayBoard[19 - B][A + 6] = '#';
		displayBoard[19 - B + 1][A + 1] = '#';
		displayBoard[19 - B + 2][A] = '#';
		displayBoard[19 - B + 3][A] = '#'; displayBoard[19 - B + 3][A + 1] = '#'; displayBoard[19 - B + 3][A + 2] = '#'; displayBoard[19 - B + 3][A + 3] = '#'; displayBoard[19 - B + 3][A + 4] = '#'; displayBoard[19 - B + 3][A + 5] = '#';
		displayBoard[19 - B + 4][A] = '#'; displayBoard[19 - B + 4][A + 6] = '#';
		displayBoard[19 - B + 5][A] = '#'; displayBoard[19 - B + 5][A + 6] = '#';
		displayBoard[19 - B + 6][A + 1] = '#'; displayBoard[19 - B + 6][A + 2] = '#'; displayBoard[19 - B + 6][A + 3] = '#'; displayBoard[19 - B + 6][A + 4] = '#'; displayBoard[19 - B + 6][A + 5] = '#';
		break;
	case '7':
		displayBoard[19 - B][A] = '#'; displayBoard[19 - B][A + 1] = '#'; displayBoard[19 - B][A + 2] = '#'; displayBoard[19 - B][A + 3] = '#'; displayBoard[19 - B][A + 4] = '#'; displayBoard[19 - B][A + 5] = '#'; displayBoard[19 - B][A + 6] = '#';
		displayBoard[19 - B + 1][A + 5] = '#';
		displayBoard[19 - B + 2][A + 4] = '#';
		displayBoard[19 - B + 3][A + 3] = '#';
		displayBoard[19 - B + 4][A + 2] = '#';
		displayBoard[19 - B + 5][A + 1] = '#';
		displayBoard[19 - B + 6][A] = '#';
		break;
	case '8':
		displayBoard[19 - B][A + 1] = '#'; displayBoard[19 - B][A + 2] = '#'; displayBoard[19 - B][A + 3] = '#'; displayBoard[19 - B][A + 4] = '#'; displayBoard[19 - B][A + 5] = '#';
		displayBoard[19 - B + 1][A] = '#'; displayBoard[19 - B + 1][A + 6] = '#';
		displayBoard[19 - B + 2][A] = '#'; displayBoard[19 - B + 2][A + 6] = '#';
		displayBoard[19 - B + 3][A + 1] = '#'; displayBoard[19 - B + 3][A + 2] = '#'; displayBoard[19 - B + 3][A + 3] = '#'; displayBoard[19 - B + 3][A + 4] = '#'; displayBoard[19 - B + 3][A + 5] = '#';
		displayBoard[19 - B + 4][A] = '#'; displayBoard[19 - B + 4][A + 6] = '#';
		displayBoard[19 - B + 5][A] = '#'; displayBoard[19 - B + 5][A + 6] = '#';
		displayBoard[19 - B + 6][A+1] = '#'; displayBoard[19 - B + 6][A + 2] = '#'; displayBoard[19 - B + 6][A + 3] = '#'; displayBoard[19 - B + 6][A + 4] = '#'; displayBoard[19 - B + 6][A + 5] = '#';
		break;
	case '9':
		displayBoard[19 - B][A + 1] = '#'; displayBoard[19 - B][A + 2] = '#'; displayBoard[19 - B][A + 3] = '#'; displayBoard[19 - B][A + 4] = '#'; displayBoard[19 - B][A + 5] = '#';
		displayBoard[19 - B + 1][A] = '#'; displayBoard[19 - B + 1][A + 6] = '#';
		displayBoard[19 - B + 2][A] = '#'; displayBoard[19 - B + 2][A + 6] = '#';
		displayBoard[19 - B + 3][A + 1] = '#'; displayBoard[19 - B + 3][A + 2] = '#'; displayBoard[19 - B + 3][A + 3] = '#'; displayBoard[19 - B + 3][A + 4] = '#'; displayBoard[19 - B + 3][A + 5] = '#'; displayBoard[19 - B + 3][A + 6] = '#';
		displayBoard[19 - B + 4][A + 6] = '#';
		displayBoard[19 - B + 5][A + 5] = '#';
		displayBoard[19 - B + 6][A] = '#'; displayBoard[19 - B + 6][A + 1] = '#'; displayBoard[19 - B + 6][A + 2] = '#'; displayBoard[19 - B + 6][A + 3] = '#'; displayBoard[19 - B + 6][A + 4] = '#';
		break;
	default:
		break;
	}
}

//Calls alphabet and prints every character of the string into the board

void printing(string text, int X, int Y, int speed){
	for (int i = 0; i<text.length(); i++){
		alphabet(text[i], X, Y);
		X = X + 8;
	}
	show(speed);
}

void clrscr(){
	system ("clear"); //used for clearing the screen for each frame
}

//Displays the board in th console

void show(int speed){
	for (int i = 0; i<20; i++){
		for (int j = 0; j<40; j++){
			cout << displayBoard[i][j];
		}
		cout << endl;
	}
	breaktime(speed);
	clrscr();
}

//Determines the delay depending on user input

void breaktime(int speed)
{
	speed = 10000000 / speed;
	for (int i = 0; i < speed; ++i)
	{
	}
}
