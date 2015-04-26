/* BCS 230 (CRN 23798)
 * HW 8 - Due 04/14/2015
 * Nicholas Sargente - ID R01621655
 * Date.h - Calendaric functions
 ********************************************************************
 * I Hereby claim all the following code is my own original work.
 */

class Date {
    private:
        int year, month, day;
    public:
        void setDate(int, int, int);
        int getYear();
        int getMonth();
        int getDay();
        Date();
        Date(int, int, int);
        void print();
        bool equalDate(Date);
};
