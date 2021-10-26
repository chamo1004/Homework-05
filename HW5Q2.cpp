#include <iostream>
using namespace std;

int totalSeconds(int hours, int minutes, int seconds)
{
	hours = hours * 60 * 60;
	minutes = minutes * 60;
    
    return hours + minutes + seconds;
}

int timeDifferece(int time1 , int time2)
{
	if(time1 < time2)
	{
		return time2 - time1;
	}
	
	return time1 - time2;
}


int main() 
{
	int hours[2],minuts[2],seconds[2];
	int time1,time2;
	
	
	cout << " -- Input time 1 and 2 --" << endl;
	cout << endl;
	
	for(int i=0; i<2; ++i)
	{
		cout << "Enter time " << i+1 << endl;
		
		hours[i] = -1;
		
		while(!(hours[i] >= 1 && hours[i] <= 12))
		{
			cout << "Input hours : (Between 1 and 12) : ";
			cin >> hours[i];
			
			if(!(hours[i] >= 1 && hours[i] <= 12))
			{
				cout << "Invalid input,enter hours again..." << endl; 
			}
		}
		
		minuts[i] = -1;
		while(!(minuts[i] >= 1 && minuts[i] <= 60))
		{
			cout << "Input Minutes : ";
			cin >> minuts[i];
			
			if(!(minuts[i] >= 1 && minuts[i] <= 60))
			{
				cout << "Invalid input,enter minutes again..." << endl; 
			}
		}
		
		seconds[i] = -1;
		while(!(seconds[i] >= 1 && seconds[i] <= 60))
		{
			cout << "Input Seconds : ";
			cin >> seconds[i];
			
			if(!(seconds[i] >= 1 && seconds[i] <= 60))
			{
				cout << "Invalid input,enter seconds again..." << endl; 
			}
		}
		
		cout<<endl;
	}
	
	time1 = totalSeconds (hours[0],  minuts[0], seconds[0]);
	time2 = totalSeconds (hours[1],  minuts[1], seconds[1]);	
	
	cout << "the amount of time in seconds between two times : " << timeDifferece(time1 , time2) << endl;
	
	return 0;
}

