class Solution {
public:
    double angleClock(int hour, int minutes) {
           
          double mh = (30*minutes)/5.0;
        hour=hour%12;
        double hh=hour*30+(minutes*30)/60.00;
        
        return abs(mh-hh)<=180?abs(mh-hh):360-abs(mh-hh);
    }
};