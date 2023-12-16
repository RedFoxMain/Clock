#include <windows.h>
#include <iostream>

unsigned int delayForSleep = 1000;

void Clock(int digits[8]){
	int limits[8] = {9,9,2,4,6,9,6,9};
	digits[7] += 1;
	for(int i = 7; i >= 0; i--){
		if(digits[i] > limits[i]){
			digits[i] = 0;
			digits[i - 1] += 1;
		}
	}
}

void PrintClock(int digits[8]){
	printf("День %i%i | Час %i%i | Минуты %i%i | Секунды %i%i\n", digits[0], digits[1], digits[2], digits[3], digits[4], digits[5], digits[6], digits[7]);
	Sleep(delayForSleep);
	system("cls");
}

int main(){
	int digits[8] = {0,0,0,0,0,0,0,0};
	while(true){
		Clock(digits);
		PrintClock(digits);
	}
}