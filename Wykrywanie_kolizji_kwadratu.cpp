#include <iostream>

using namespace std;

void kolizja(float x1,float w1,float x2,float w2)
{
//Pseudo code to evaluate the separation of box1 and box2
float length = x2 - x1; //odległość pomiędzy punktami
float half_width_box1 = w1*0.5; //obliczenie środka pierwszego pudełka i przypisanie do zmiennej
float half_width_box2 = w2*0.5; //obliczenie środka drugiego pudełka i przypisanie do zmiennej
 
int gap_between_boxes = length - half_width_box1 - half_width_box2;
if(gap_between_boxes > 0) cout<<"Między pudełkami jest duża odległość";
else if(gap_between_boxes == 0) cout<<"Pudełka stykają się";
else if(gap_between_boxes < 0) cout<<"Pudełka zawieraja się w sobie";
}

int main()
{

	kolizja(5,10,15,10);
}
