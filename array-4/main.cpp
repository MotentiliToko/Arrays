#include <iostream>

using namespace std;

int main()
{
    int r;
	int c;
	int array[10][10];
	int i;
	int j;
	int highest;
	int lowest;
	
    cout<<"Please enter number of rows and columns: ";
    cin>>r>>c;
    
    cout<<endl<<"Please enter matrix: "<<endl;
    
    for(i=0;i<r;++i)
    {
        for(j=0;j<c;++j)
        cin>>array[i][j];
    }
 
    highest=array[0][0];
    lowest=array[0][0];
    
    for(i=0;i<r;++i)
    {
        for(j=0;j<c;++j)
        {
            if(array[i][j]>highest)
                highest=array[i][j];
            else
                if(array[i][j]<lowest)
                    lowest=array[i][j];
        }
    }
    
    cout<<endl<<"Highest element is:"<<highest<<endl<<"Lowest element is:"<<lowest<<endl;
    return 0;
}