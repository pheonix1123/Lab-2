#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    
    
 /* Integer18
 Дано ціле число, більше 999.
 Використовуючи одну операцію цілочисельного ділення
 і одну операцію взяття залишку від ділення,
 знайти цифру, відповідну розряду тисяч в записі цього числа.
 */
 int n;
 int res;
 
 cout << "Integer18" << endl;
 cout << "n = ";
 cin >> n;
 

 // Знаходимо цифру тисяч за допомогою ділення та остачі
 res = (n / 1000) % 10; 
 
 cout << "Result: " << res << endl;


 /* Boolean42
 Дано точку з координатами (x, y) і радіус R.
 Перевірити істинність висловлювання:
 "Точка з координатами (x, y) лежить в середині кола
 радіусом R з центром у початку координат".
 */
 double x, y, R;
 bool res2;
 
 cout << "Boolean42" << endl;
 cout << "x = ";
 cin >> x;
 
 cout << "y = ";
 cin >> y;
 
 cout << "R = ";
 cin >> R;
 
 // Перевіряємо, чи знаходиться точка всередині кола
 res2 = (x * x + y * y) < (R * R);
 
 cout << "Result: " << res2 << endl;
 
 
 /* Math26
 Обчислити значення математичного виразу
 для введеного значення x.
 */
 double x3;

 cout << "Math26" << endl;
 cout << "x = ";
 cin >> x3;

 // Обчислюємо чисельник, знаменник та результат
 double top1 = 4 * tan(pow(x3, 2)) * sin(x3);
 double top2 = sqrt(abs(1 - pow(sin(x3), 2) * tan(x3))) / 5;

 double bottom = pow(4 + pow(x3, 3) / 5, 1.0 / 3)
              + log(abs(x3)) / log(2);

 double res3;
 res3 = (top1 + top2) / bottom;

 cout << "Result: " << res3 << endl;
    return 0;
}
