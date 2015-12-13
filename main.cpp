//
//  Lab III Part III
//
//  Created by Edgar Esparza on 6/11/15.
//

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    
    const int Limit = 500;
    int count = 0;
    long int hypotenuseSquared;
    long int sidesSquared;
    int side1, side2, hyp;
    
    cout << "Side 1\tSide 2\tSide3" << endl;
    
    for(side1=1;side1<=Limit;side1++)
       
    {
        for(side2=side1;side2<=Limit;side2++)
        {
            for(hyp=side2;hyp<=Limit;hyp++)
            {
                hypotenuseSquared = pow(hyp,2);
                sidesSquared = (pow(side1,2) + pow(side2,2));
                
                if ( hypotenuseSquared == sidesSquared )
                {
                    cout << side1 << '\t' << side2 << '\t' << hyp << '\n';
                    count++;
                }
            }
        }
    }
    
    cout << "A total of " << count << " triples were found." << endl;
    return 0; 
}
