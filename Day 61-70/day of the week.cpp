class Solution {
public:
    string dayOfTheWeek(int day, int month, int year) {
      
        if (month < 3) {
            month += 12;
            year--;
        }

        int h = (day + 13 * (month + 1) / 5 + year + year / 4 - year / 100 + year / 400) % 7;

       
        const vector<string> daysOfWeek = {"Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};

        return daysOfWeek[h];
    }
};
