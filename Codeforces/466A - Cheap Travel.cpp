#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int nRides,SpecialTicketCost,OneRideCost,SpecialTicketRides;
    cin >> nRides >> SpecialTicketRides >> OneRideCost >> SpecialTicketCost;
    if( (SpecialTicketRides*OneRideCost)>= SpecialTicketCost )
    {
     cout << (nRides/SpecialTicketRides)*SpecialTicketCost
             + min((nRides%SpecialTicketRides)*OneRideCost,SpecialTicketCost);
    }
    else
    {
        cout << OneRideCost*nRides;
    }
    return 0;
}