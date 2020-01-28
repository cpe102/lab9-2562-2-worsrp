#include<iostream>
using namespace std;

int main(){
	int count[5] = {},num=0; 
	char grade;
	cout << "Please input grade of each student (A-F) or input 0 to exit.\n";
	do{
		cout << "Student [" << num+1 << "]: ";
		cin >> grade; 
		if(grade=='A'){ 
			count[0]++;
		}else if(grade=='B'){
			count[1]++;
		}else if(grade=='C'){
			count[2]++;
		}else if(grade=='D'){
			count[3]++;
		}else if(grade=='F'){
			count[4]++;
		}else{ 
			if(grade=='0')break;
			cout << "Wrong input. Please input again.\n";
			num-=1;
		}
		num++; 
	}while(grade!='0');
	
	
	cout << "In total " << num << " students.\n";
	cout << "A = " << count[0] <<",";
	cout << "B = " << count[1] <<",";
	cout << "C = " << count[2] <<",";
	cout << "D = " << count[3] <<",";
	cout << "F = " << count[4] <<",";	

	
	
	return 0;

	/*Student [1]: A
Student [2]: F
Student [3]: C
Student [4]: D
Student [5]: D
Student [6]: C
Student [7]: A
Student [8]: X
Wrong input. Please input again.
Student [8]: X
Wrong input. Please input again.
Student [8]: A
Student [9]: C
Student [10]: 0
In total 9 students.
A = 3, B = 0, C = 3, D = 2, F = 1*/
}
