#include <iostream> 
#include <ctime>
#include <cstdlib>
char getUserChoice(); 
char getComputerChoice();
void ShowChoice (char choice);
void determineWinner(char UserChoice , char ComputerChoice);

int main() { 
char player;
char computer;
player = getUserChoice();
std::cout << "your choice is: ";
ShowChoice(player);

computer = getComputerChoice();
std::cout << "Computer choice is: ";
ShowChoice(computer);

determineWinner(player, computer);















    return 0;
}



char getUserChoice(){
char player; 
do{
std::cout << "Welcome to Rock, Paper, Scissors!\n";
std::cout << "Enter your choice! (R for Rock, P for Paper, S for Scissors)\n";
std::cin >> player;
 

}while(player != 'r' && player != 'p' && player != 's');

return player; 

} 
char getComputerChoice(){
  
     srand(time(0));
     int num = rand() % 3 + 1;
switch(num){
case 1:
    return 'r';
    case 2:
    return 'p';
    case 3:
    return 's';

return 0;

}

}

void ShowChoice (char choice){
switch(choice){
case 'r':
    std::cout << "Rock\n";
    break;

case 'p':
     std::cout << "Paper\n";
    break;

case 's':
     std::cout << "Scissors\n";
    break;
}


}




void determineWinner(char UserChoice , char ComputerChoice){

    switch(UserChoice){
        case 'r':
        
            if(ComputerChoice == 'r'){
                std::cout << "It's a tie!\n";
            }
            else if(ComputerChoice == 'p'){
                std::cout << "Computer wins!\n";
            }
            else{
                std::cout << "You win!\n";
            }
            break;
       case 'p':
        
            if(ComputerChoice == 'r'){
                std::cout << "You win!\n";
            }
            else if(ComputerChoice == 'p'){
                std::cout << "It's a tie!\n";
            }
            else{
                std::cout << "Computer wins!\n";
            }
            break;

        case 's':
        
            if(ComputerChoice == 'r'){
                std::cout << "Computer wins!\n";
            }
            else if(ComputerChoice == 'p'){
                std::cout << "You win!\n";
            }
            else{
                std::cout << "It's a tie!\n";
            }
            break;    
    }







}


