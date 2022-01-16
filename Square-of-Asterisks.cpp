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
    int counter(1) , side (0) ,row(1) ;
    cout << " Enter side : " ;
    cin >> side ;
    
    while (counter<=side){
        if(counter == 1){
            while (row<=side){
                cout <<"*" ;
                row++ ;
            }
            row = 1 ;
            cout<<endl<<endl ;
        }

        if(counter != 1){
            if(counter != side){
            
            cout << "*";
            while(row<=side-2){

            
                cout<<" ";
                row++;
            
            }
            row = 1 ;
            cout << "*";
            cout << endl << endl ;

            }
        }

        if(counter == side){
            while(row<=side){
                cout << "*" ;
                row++ ;
            }
            row = 1 ;
            cout << endl ;
        }

        counter++;
    }
    }