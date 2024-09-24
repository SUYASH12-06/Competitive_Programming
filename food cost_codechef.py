#This repository contains a solution to the [Food Costs](https://www.codechef.com/problems/FOODCOST) problem, where the objective is to calculate the total cost of food items over multiple test cases. Each test case provides a list of food items along with their costs, and the task is to compute the total expenditure for each case. 
#The solution handles multiple test cases efficiently, ensuring the accurate summation of costs for different sets of food items. Ideal for beginners in competitive programming, it emphasizes handling input-output operations and basic arithmetic calculations.


x,y=input().split()  #taking x and y as single line string input and splitting it
x=int(x)    #typecasting x into int
y=int(y)    #typecasting y into int
weekly_cost=6*x+y
print(weekly_cost)
