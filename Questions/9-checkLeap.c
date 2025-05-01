    //Check if a year is a leap year.

#include<stdio.h>

int main(){
    int year;
    printf("Enter the Year=");
    scanf("%d",&year);

    //check leap
    if((year%4==0 && year % 100 != 0) || (year % 400 == 0))
    {
        printf("Leap Year");
    }
    else{
        printf("No leap year");
    }

    return 0;
}



/*
Explanation of condition=



Sure! Let's break down this statement in Hinglish to make it easier to understand:

Statement:

if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
Step-by-Step Explanation in Hinglish:
year % 4 == 0:

year % 4 ka matlab hai "year ko 4 se divide karo aur remainder check karo."
Agar remainder 0 hai, to matlab year 4 se divide ho sakta hai.
Example: Agar year 2024 hai, to 2024 % 4 == 0 (because 2024 is divisible by 4).
year % 100 != 0:

year % 100 != 0 ka matlab hai "year ko 100 se divide karo aur check karo ki remainder 0 na ho."
Agar remainder 0 nahi hai, to matlab year 100 se divide nahi ho raha.
Example: Agar year 2024 hai, to 2024 % 100 != 0 (because 2024 is not divisible by 100).
Combined first part: (year % 4 == 0 && year % 100 != 0):

Yeh check karta hai ki:
Agar year 4 se divide ho sakta ho (i.e., year % 4 == 0), aur
Agar year 100 se divide nahi ho raha ho (i.e., year % 100 != 0).
Agar yeh dono conditions sach hain, to year leap year hai.
Example: Year 2024:
2024 % 4 == 0 (True)
2024 % 100 != 0 (True)
2024 is a leap year.

year % 400 == 0:

Yeh part check karta hai ki "year 400 se divide ho raha ho".
Agar year 400 se divide ho raha hai, to bhi wo leap year hoga, chahe wo 100 se divide ho ya na ho.
Example: Year 2000:
2000 % 400 == 0 (True)
2000 is a leap year because it’s divisible by 400.
Full Condition: ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0):

Yeh condition do cheezein check karti hai:
Agar year 4 se divide ho raha ho aur 100 se divide nahi ho raha ho.
Ya agar year 400 se divide ho raha ho.
Agar koi bhi condition sach hai, to year leap year hoga.
Example:
Year 2024:

2024 % 4 == 0 (True)
2024 % 100 != 0 (True)
2024 is a leap year.
Year 1900:

1900 % 4 == 0 (True)
1900 % 100 != 0 (False, because 1900 is divisible by 100)
1900 is NOT a leap year, because it's divisible by 100 and not by 400.
Year 2000:

2000 % 4 == 0 (True)
2000 % 100 != 0 (False, because 2000 is divisible by 100)
2000 % 400 == 0 (True, because 2000 is divisible by 400)
2000 is a leap year, because it's divisible by 400.
Summary in Hinglish:
Leap Year Rule:
Agar year 4 se divide ho aur 100 se divide na ho, to leap year hai.
Ya phir agar year 400 se divide ho, to wo bhi leap year hai.

*/