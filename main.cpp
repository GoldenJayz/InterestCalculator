#include <iostream>
#include <stdlib.h>
#include <tgmath.h>
using namespace std;

// Author Jaden

double solveForTotal(int initial, float growthRate, int time, int timeRate)
{
   // A=P(1+r/n)^nt
   float retval = 0;
   int exp = time * timeRate;
   retval = initial * (1 + (growthRate / timeRate));
   retval = (double) pow(retval, exp);
   return retval;
}

double solveForExp(int total, int initial, float growthRate)
{
   int retval = 0;
   
   double log1Data = (double) total / initial;
   double log2Data = (double) 1 + growthRate;
   retval = (double) log(log1Data) / log(log2Data);

   return retval;
}

int main()
{
   // double res = solveForTotal(15000, 0.0105, 1, 1);
   char res;

   do
   {
       cout << "What type of problem do you want to solve.\n 1) Solve for total?\n 2) Solve for exponent?\n (1, 2)" << endl;
       cin >> res;
   } while (res != '1' && res != '2');

   if (res == '1')
   {
       double initial, growthRate, time, timeRate = ' ';
       
       cout << "initial value: " << initial << endl;
       
       while (intial == ' ')
       {

       }

   }


   double res2 = solveForExp(30000, 15000, 0.0105);
   cout << res2 << endl;


   cin.get();
   return 0;
}
