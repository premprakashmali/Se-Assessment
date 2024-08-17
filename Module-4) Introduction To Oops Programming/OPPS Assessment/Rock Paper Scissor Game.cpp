#include<iostream>    // use for standard input/output operations
#include<stdlib.h>    // use for srand() and rand() functions
#include<ctime>       // use for time(0) function to seed random number generator
using namespace std;


class RockPaperScissor{
	
	private:
		int userscore;   //this variable track to user score
		int computscore; //this variable track to computer score
		string username;
		
	public:
		  // use Constructor for initialize scores
		  RockPaperScissor()
		  {
		  	userscore =0;
		  	computscore=0;
		  }
		  
		  Setusername(){
		  	cout<<"Enter the name: ";
		  	cin>>username;
		  }
		  
		  //use to function to display the game menu and take the user choice
		 void displaymenu()
		  {
		  	cout<<"Welcome to Rock-Paper-Scissor Game !!"<<endl;
		  	cout<<"Choose the one following choice"<<endl;
		  	cout<<"1. Rock"<<endl;
		  	cout<<"2. Paper"<<endl;
		  	cout<<"3. Scissors"<<endl;
		  }
		  //This function to generate the computer choice using random numbers
		  
		  int generatecomptchoice(){
		  	srand(time(0)); //its generate the random number in current time
		  	return(rand()%3)+1; //generate the random number between 1-3
		  }
		  
		  //This function to find the winner of a single round
		  
		 void findwinner(int userchoice,int computerchoice)
		  {
		  	//Display the computer choice
		  	cout<<"Computer choice : "<<choiceToString(computerchoice)<<endl;
		  	
		  	//logic of finding the winner
		  	if(userchoice == computerchoice)
		  	{
		  		cout<<"This match tie !"<<endl;
			}
			// Rock beats Scissors
			else if(userchoice == 1 && computerchoice == 3){
				cout<<username<<" win the round !"<<endl;
				userscore++;	
			}
			// Paper beats Rock
			else if(userchoice == 2 && computerchoice == 1){
		  	    cout<<username<<" You win the round !"<<endl;
			    userscore++;
				
			}
			// Scissors beats Paper
			else if(userchoice == 3 && computerchoice == 3){
			    cout<<username<<"You win the round !"<<endl;
			    userscore++;   //increment in userscore
			}
			else{
			    cout<<"Computer wins the round !"<<endl;
				computscore++;  //increment in computerscore
				
			}
		  	
		  }
		  
		  //This Function to convert choice number to string representation
		  
		    string choiceToString(int choice) {
            switch (choice) {
            case 1: return "Rock";
            case 2: return "Paper";
            case 3: return "Scissors";
            case 4: return "Scissors";
            default: return "Invalid choice!";
        }
    }
		// Main function to play the game for 3 rounds
		void playgame(){
			int userchoice,computerchoice;
			int numrounds;
			
			Setusername();
			cout<<username<<" How many rounds you want to play? :";
			cin>>numrounds;
			
			
			for(int i=1;i<=numrounds;i++)
			{
			cout<<"Round "<<i<<":"<<endl;
				
		    // Display the menu and get the user's choice
		    
		    displaymenu();
		    cout << "Enter your choice (1-3): ";
            cin >> userchoice;
               
             // Generate computer's choice
		    computerchoice =generatecomptchoice();
		     // find the winner of  round
		    findwinner(userchoice, computerchoice);
		     
			}
			
			// Display the final scores and the overall winner
		    cout<<"Final Score:"<<endl;
			cout<<username<<" score :"<<userscore<<endl;
			cout<<"computer score : "<<computscore<<endl;
			
			if(userscore>computscore)
			{
				cout<<"Congrates ! you  wins the game"<<endl;
			}
			else if(userscore<computscore)
			{
				cout<<"Congrates ! Computer wins the game"<<endl;
			}
			else{
				cout<<"The game is a tie!"<<endl;
			}
		}
		  
};
int main()
{
	RockPaperScissor obj; //make object to RockPaperScissor class
	obj.playgame();      //called the playgame by object
	
	return 0;
}


