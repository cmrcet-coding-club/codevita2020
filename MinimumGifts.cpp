//code by Ande Dheeraj Reddy  

// CODE TO FIND MINIMUM GIFTS REQUIRED PRIORITY RATINGS IS GIVEN FOR EMPLOYES

/*
Greedy works here ( Think of a supportive proof as as assignment ).

Start with the guy with the least rating. Obviously he will receive 1 candy.
If he did recieve more than one candy, we could lower it to 1 as none of the neighbor have higher rating.
Now lets move to the one which is second least. If the least element is its neighbor, then it receives 2 gifts, else we can get away with assigning it just one gift.
We keep repeating the same process to arrive at optimal solution.
*/

#include<bits/stdc++.h>
using namespace std;
int mingifts (vector<int> &ratings) {
    int gifts = 0;
	int size = ratings.size();

	// if the vector is empty: return zero
	if (size == 0) return gifts;

	int giftState = 1;
	for (int i = 0; i < size; i++)
	{
		if (i == size - 1)
		{
			gifts += giftState;
			continue;
		}

		if (ratings[i + 1] > ratings[i])
		{
			gifts += giftState;
			giftState++;
		}
		else if (ratings[i + 1] < ratings[i])
		{
			int startgiftState = giftState;
			int startIndex = i;

			while (i + 1 < size && ratings[i + 1] < ratings[i])
			{
				i++;
			}

			int startgiftStateFromRight = i - startIndex + 1;
			gifts += (startgiftStateFromRight + 1) * startgiftStateFromRight / 2;

			// Adjusting for the local maxima point.
			if (startgiftState > startgiftStateFromRight)
			{
				gifts += startgiftState - startgiftStateFromRight;
			}

			// Let's exclude this local minima point now as this will be accounted in the next iteration.
			gifts--;
			i--;
			giftState = 1;
		}
		else
		{
			gifts += giftState;
			giftState = 1;
		}
	}
         
	// return the miimum gifts required the the given ratings vector
	return gifts;
}

//driver code
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
	long n,l;
	cin>>n;
        vector<long > rating; // vector of ratings
	    
	for(int i=0;i<n;i++)
	{ cin>>l;
	  rating.push_back(l);
	}
	
	//print the output, mingifts function return the minimum gifts required  
        cout<<mingifts(rating)<<endl;
    }
        return 0;
}
