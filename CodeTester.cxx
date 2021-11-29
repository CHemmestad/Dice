#include <iostream>

using namespace std ;

class dice {
	public :
		int sides ; 
		int dices ;
		dice ( int sides1 , int dices1 ) {
			sides = sides1 ;
			dices = dices1 ;
			int rolls [ dices ] ;
			
			for ( int x = 0 ; x < dices ; x++ ) {
				srand(time(NULL)) ; 
				int roll = rand ( ) %sides+1 ;
				rolls [ x ] = roll ;
			}
		}
} ;

int main( ) {
	
	int x ; 
	int y ;
	cout << "How many sides do you want the dice to have?" << endl ;
	cin >> x ; 
	cout << "How many dices do you want to roll?" << endl ;
	cin >> y ;
	dice gameOne ( x , y ) ;
	
	return 0 ;
}













