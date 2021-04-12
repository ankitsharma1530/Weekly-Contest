

class Solution {
public:
    int find(int d,int m,int y) {
		vector<int> days = {0,3,2,5,0,3,5,1,4,6,2,4}; 
		if(m < 3) y -= 1;
		return (y + (y/4 - y/100 + y /400) + days[m-1] + d) % 7;
	}
	
        string dayOfTheWeek(int day, int month, int year) 
	{
        // Today is 8th April 2021 - Thursday
        string daysInWeek [7] = { "Thursday", "Friday", "Saturday","Sunday", "Monday", "Tuesday","Wednesday"}; 
		int c1 = find(8,4,2021);
		int c2 = find(day, month, year);

		
		int diff = c2-c1;
		if (diff <0) {
			diff = diff + 7;
		}
		cout<< diff<< endl;
        return daysInWeek[diff]; 
    }
};
