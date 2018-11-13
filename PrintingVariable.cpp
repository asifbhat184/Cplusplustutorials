/*GOAL: Practice writing to the console and learn 
 * **the variables types available in C++
 * **Print the sizes of each variable to the console.
 * **Print them in the following order:
 * **int, short, long, char, float, double, bool
 * **
 * **Use the command sizeof(variable type) ie: sizeof(int)
 * */

#include <iostream>

using namespace std;

int main()
{
	cout<<sizeof(int)<<"\n"<<sizeof(short)<<"\n"<<sizeof(long)<<"\n"<<sizeof(char)<<"\n"<<sizeof(float)<<"\n"<<sizeof(double)<<"\n"<<sizeof(bool);
}

