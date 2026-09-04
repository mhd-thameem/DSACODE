class Solution {
public:
    string dayOfTheWeek(int day, int month, int year) {
        int ans=day;
        for(int i=1971;i<year;i++){
            bool isLeap=(i%4==0 && i%100!=0)||(i%400==0);
            if(isLeap){
                ans+=366;
            }else{
                ans+=365;
            }
        }
        vector<int> days_in_month = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        bool isLeap=(year%4==0 && year%100!=0)||(year%400==0);
        for(int i=0;i<month-1;i++){
            ans+=days_in_month[i];
        }
        if(isLeap && month>2){
            ans+=1;
        }vector<string> days = {"Thursday", "Friday", "Saturday", "Sunday", "Monday", "Tuesday", "Wednesday"};
        return days[ans % 7];
    }
};