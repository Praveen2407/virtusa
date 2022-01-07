
#include <iostream>
#include <vector>
#include <ctime>
#include <unistd.h>
using namespace std;

int main()
{
    vector<string> v1;
    vector<string> v2;
    
    int teams;
    cout << "Welcome to Football tournment\n";
    cout << "Enter the teams number"<<endl;
    cin >> teams;
    
    //minmum 2 teams should be there
    if( teams <= 1){
        cout << "Wrong data\n";
        cout << "Please enter correct numbers of team\n";
    }
    else{
        cout << "Please enter the team details"<<endl;
        
        //adding team names to vector
        for(int i=1;i<=teams;i++){
                
            string team_name;
            cout <<"Enter Team Name"<<endl;
            cin >> team_name;
            v1.push_back(team_name);
            v2.push_back(team_name);
        }
    }
        
    for(int i=0;i<v1.size();i++){

        //To keep track for time and date
        time_t now = time(0);
        // convert now to string form
        char* dt = ctime(&now);        
        
        cout << "\nMatch's are started at "<< v1[i] <<" ground and time is " << dt <<endl;    
        for(int j=0;j<v1.size();j++){
            if( i != j)
                cout << "Match is between " << v1[i]<<" vs " <<v2[j] << " at " << v1[i] <<" ground"<<endl;
        }

       sleep(5); //assuming diff time for diff matches 
    }
    return 0;
}

/*

Input:
Teams number
4
Teams name
A
B
C
D
Output

Match's are started at A ground and time is Fri Jan  7 15:51:17 2022

Match is between A vs B at A ground
Match is between A vs C at A ground
Match is between A vs D at A ground

Match's are started at B ground and time is Fri Jan  7 15:51:22 2022

Match is between B vs A at B ground
Match is between B vs C at B ground
Match is between B vs D at B ground

Match's are started at C ground and time is Fri Jan  7 15:51:27 2022

Match is between C vs A at C ground
Match is between C vs B at C ground
Match is between C vs D at C ground

Match's are started at D ground and time is Fri Jan  7 15:51:32 2022

Match is between D vs A at D ground
Match is between D vs B at D ground
Match is between D vs C at D ground
*/
