#include <bits/stdc++.h>
using namespace std;
/*This repository contains a solution to the [Saving Taxes](https://www.codechef.com/problems/TAXSAVING) problem, where individuals in Chefland must pay taxes if their income exceeds a specified threshold. 
The goal is to calculate the minimum amount of investment required to reduce taxable income to or below the threshold. The program takes multiple test cases as input, with each test case providing the income and the tax-free threshold, 
and outputs the minimum investment needed. It handles up to 100 test cases efficiently, ensuring no taxes are owed if the right amount is invested.*/
int main() {
	// My code starts here
  int t,min_amount;
  cin>>t; //no of testcases
  while(t>0){
      int x,y;
      cin>>x;
      cin>>y;
      min_amount=x-y;
      cout<<min_amount<<endl;
      t--;
  }
}
