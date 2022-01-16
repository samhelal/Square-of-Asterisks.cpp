/*16. 4.26 (Square of Asterisks) Write a program that reads in the
size of the side of a square, then prints a hollow square of that
size out of asterisks and blanks. Your program should work for
squares of all side sizes between 1 and 20. For example, if
your program reads a size of 5, it should print
*****
*   *
*   *
*   *
*****
(c++ how to program)*/#include<iostream>
using namespace std ;

int main(){
    
    int counter(1) , side (0) ,row(1) ;      //initialize the counter to (1) and the square side value to (0) and the row wight counter(1). 
    
    cout << "Enter side : (from 1 to 20)" ;  // prompet message to ask the user how tall and weight of square u want .
    cin >> side ; //input the side value .
    
    while (counter<=side){        //while counter less than or equal to side 
        if(counter == 1){         //if counter equal the first , to make just print the top side full asterisk ***** .
            while (row<=side){    //while the row less than or equal side value print (*) the first side .  
                cout <<"*" ;
                row++ ;
            }
            row = 1 ;           // revalue the row to 1 to use it again in the next . 
            cout<<endl<<endl ;
        }

        
        if(counter != 1){             // if the counter not the first 
            if(counter != side){      // if the counter not the final
            cout << "*";              // print just one  (*) in the left rectangle side                
            while(row<=side-2){       //while row less than or equal the side value -2 (dont print the first and the final ) (*    *)
                cout<<" ";            //prin blanks between the two asterisks . 
                row++;                // add one to the row counter 
            }
            row = 1 ;                // revalue the row to 1 to use it again in the next .
            cout << "*";             // print the right side 
            cout << endl << endl ;
            }
        }

        
        if(counter == side){            //if the counter equal final , to print just the bottom side full asterisk ***** .
            while(row<=side){           //while row less than or equal side .
                cout << "*" ;           
                row++ ;
            }
            row = 1 ;
            cout << endl ;
        }

        counter++;
    }
    }
