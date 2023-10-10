#include <iostream>
using namespace std;
float hoursleft(float days, float neededhours, float workers) ;
main()
{
    float neededhours, days, workers;
    cout << "Enter the needed hours: ";
    cin >> neededhours;
    cout << "Enter the days that the firm has: ";
    cin >> days;
    cout << "Enter the number of all workers: ";
    cin>>workers;
    hoursleft(days,neededhours,workers);
}
float hoursleft(float days, float neededhours, float workers ) {
 float work = days * workers * 9;
if (work < neededhours){

    float timeleft = neededhours - work;
    cout << "Not enough time! " << timeleft << " hours needed.";
}

if (work > neededhours)
{
    float timeleft = work - neededhours;
    cout << "Yes!" << timeleft << " hours left.";
}
return 0;
}