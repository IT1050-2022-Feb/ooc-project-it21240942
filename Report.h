//Report.h
#include <iostream>
#include <cstring>
using namespace std;

class Report
{
private:
    int reportID;
    char reportName[50];
public:
    Report();
    Report(int rID, const char rName[]);
    void addReportAdmin();
    void displayReportDetails();
    ~Report();
};
