#include <iostream>
using namespace std;

int main() {
	int t ;
	cin >>t;
	while(t--)
	{
    int n, array_A[100],array_D[100];  //increase this value for end limits
    cin>>n;
    int arrival_count= 0;
    int  departure_count= 0;
    int coincide;
    for (int i = 0; i < n; ++i)
    {
        cin>>array_A[i];
    }
    for (int i = 0; i < n; ++i)
    {
        cin>>array_D[i];
    }

for(int i=0; i<n-1 ;i++)
    {
        for(int j =i+1;j<n;j++)
        {
            if(array_A[i]==array_A[j])
            {
                arrival_count++;
            }
        }
    }
for(int i=0; i<n-1 ;i++)
    {
        for(int j =i+1;j<n;j++)
        {
            if(array_D[i]==array_D[j])
            {
                departure_count++;
            }
        }
    }


for (int i = 0,j = 0; i < n && j < n; i++,j++)
{
    if(array_A[i]=array_D[j])
    {
        coincide++;
    }
}


    int arrivals = arrival_count +1;
    int departure = departure_count +1;
    cout<<"Arrivals count = "<<arrival_count<<endl;
    cout<<"Departure count = "<<departure_count<<endl;
    cout<<"Coincident value "<<coincide<<endl;

	}
	return 0;
}

// 3
// 1 1 2
// 2 2 3
// 4
// 1 5 4 3
// 4 6 10 4
// 3
// 1 4 3
// 2 6 5


