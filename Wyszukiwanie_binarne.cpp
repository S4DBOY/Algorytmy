/*
 * Wyszukiwanie_binarne.cpp
 * 
 * Copyright 2016 Kamil Szwaradzki <1tibszwaradzki@gmail.com>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


/*
+ilość miejsc w tabeli : 100
+losowanie liczb do tabeli z zakresu : Użytkownik ma podać!
-Wyświetlenie oraz sortowanie tych liczb
*/
#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <functional>

using namespace std;

int main()
{
    int tab_to_rand[ 100 ];
    int x,y,k,choice;
    bool statement=false;
    cout<<"Podaj początek zakresu: ";
    cin>>x;
    cout<<"\nPodaj koniec zakresu: ";
    cin>>k;
    k=k-x;
    while(statement!=true)
    {
        for(int i=0;i<100;i++)
            {
                choice=rand()%k+x;
                tab_to_rand[i]=choice;
                cout<<tab_to_rand[i]<<"\n";
            }

        sort( tab_to_rand, tab_to_rand + 100 );
        cout << "Tablica tab_to_rand posortowana rosnąco: \n";

        for( int i = 0; i < 100; i++ )
            {
                cout << tab_to_rand[ i ] << '\n';
            }
            
            int lewy=0;
            int prawy=100-1;
            int s=0;
            poczatek:
            if(lewy>prawy)
            {
				s=-1;
				cout<<"Element nie występuje w zbiorze !";
				break;
				}else
				{ 
					y=rand()%10+1;
					s=(lewy+prawy)/2;
					if(tab_to_rand[s]==y)
					{
						cout<<"Element występuje w zbiorze na pozycji "<<s;
						}
						else
						{
							if(tab_to_rand[s]<y)
							{
								lewy=s+1;
								goto poczatek;
								}
								else{
										prawy=s-1;
										goto poczatek;
									}
							}
					}
				
            statement=true;
    }
    //system("pause");
        return 0;
}
