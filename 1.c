//FIRST PROGRAM(1)

#include<stdio.h>
#include<conio.h>
int main()
{
	int tom;
	int Tom;
	printf("Hello world");
	return 0;
}

//SECOND PROGRAM(2)

#include<stdio.h>
int main()
{
	int a=7;
	float b=8.5;
	char c='a';
	int d=8;
	int e= 10+20;
	
	printf("the value of a is %d\n",a);
	printf("the value of b is %f\n",b);
	printf("the value of c is %c\n",c);
	printf("sum of a and d is %d\n",a+d);
	printf("sum of a and d is %d\n",e);
	printf("sub of a and d is %d\n",a-d);
	printf("mul of a and d is %d\n",a*d);
	printf("div of a and d is %d\n",a/d);
	
	return 0;
}


//THIRD PROGRAM(3)

#include<stdio.h>
int main()
{
	int a,b,sum;
	printf("Enter the first number\n");
	scanf("%d",&a);
	printf("Enter the second number\n");
	scanf("%d",&b);
	printf("The sum of a and b is %d",a+b);
	
	return 0;
}



//FOURTH PROGRAM(4)

#include<stdio.h>
int main()
{
	int a=10;
	int b=20;
	printf("The sum of a and b is= %d",a+b);
	return 0;
}
	



//FIND THE AREA OF A RECTANGLE(1)

#include<stdio.h>                                          
int main()                                               
{ 
 
int length,breadth;
printf("enter length\n");
scanf("%d",&length);
printf("enter breadth\n");
scanf("%d",&breadth);  
printf("Area of rectangle=%d",(length*breadth));

return 0;                                                      
}

	
//FIND THE AREA OF A CIRCLE	(2)USER DEFINED
	
#include<stdio.h>                                          
int main()                                               
{ 
 
int r;
scanf("%d",&r);
printf("Area of the circle %f\n",(3.14*r*r));

return 0;
}	
	
..........................................................	
	
#include<stdio.h>
int main()
{
	int radius=4;
	float pi=3.14;
	printf("Area of the circle=%f\n",pi*radius*radius);
	
	return 0;	
}
	
//FIND THE VOLUME OF THE CIRCLE(3) USER DEFINED

#include<stdio.h>                                          
int main()                                               
{ 
 
int  radius,height;
scanf("%d",&radius);
scanf("%d",&height);
printf("volume of the cylinder= %f\n",(3.14*radius*radius*height));

return 0;
}		
	
	
...................................................................	
	
#include<stdio.h>
int main()
{
	int radius=3;
	int height=3;
	float pi=3.14;
	printf("Volume of the cylinder =%f\n",pi*radius*radius*height);
	
	return 0;	
}
	
	
//FIND THE CELCIUS TO FAHRENHEIT(4)	

#include<stdio.h>
int main()
{
float celsius=37,fahrenheit;
fahrenheit=(celsius*9/5)+32;

printf("The value of this celsius temprature to fahrenheit is %f",fahrenheit);

return 0;
}



//FIND THE SIMPLE INTEREST (5)

#include<stdio.h>
int main()
{
int principal=100,rate=4,years=1;
int simpleInterest=(principal*rate*years)/100;
printf("The value of simpleInterest is %d",simpleInterest);

return 0;
}


//.......................................TYPE OF INSTRUCTION...............................


//    1-TYPE DECLARATION INSTRUCTION.
//    2-ARITHMETICS INSTRUCTION.
//    3-CONTROL INSTRUCTION.



//..........................(1) TYPE DECLARATION INSTRUCTION PRACTICE...........................

#include<stdio.h>
int main()
{
	int a=4,b,c;
	 b=c=a;
	printf("The value of a is=%d\n",a);
	printf("The value of b is=%d\n",b);
	printf("The value of c is=%d\n",c);	

return 0;
}

//..................(1) TYPE DECLARATION INSTRUCTION PRACTICE.......................................


#include<stdio.h>
int main()
{

float a=1.1;
float b=a+8.9;
printf("The value of b is=%f\n",b);

return 0;
}


//..........................(1) TYPE DECLARATION INSTRUCTION PRACTICE...............................

#include<stdio.h>
int main()
{
	int a,b,c,d;
	a=b=c=d=30;
	
printf("The value of a is=%d\n",a);
printf("The value of b is=%d\n",b);
printf("The value of c is=%d\n",c);
printf("The value of d is=%d\n",d);

return 0;
}

//........................(2) ARITHMATIC INSTRUCTION PRACTICE..................................


#include<stdio.h>
#include<math.h>//ye pawer ke liye use hua hai(4^5).
int main()
{
	int a=4;
	int b=8;
	int z=b*a;
	int c;
	c=a*b;
//  a*b=c;  //ye inlegal hai aisa nahi kar sakte .
	
printf("The value of a+b is= %d\n",a+b);
printf("The value of a-b is= %d\n",a-b);
printf("The value of a*b is= %d\n",a*b);
printf("The value of a/b is= %d\n",a/b);

printf("The value of z  is= %d\n",z);
printf("The value of c is= %d\n",c);

printf("5 When divided by 2 leaves a remainder of= %d\n",5%2);
printf("-5 When divided by 2 leaves a remainder of= %d\n",-5%2);
printf("5 When divided by -2 leaves a remainder of =%d\n",5%-2);

//printf("The value of 4 * 5 is %d\n",(4)(5));//ye sahi nahi hai kyu ki hum yaha koin sa operation kara rahe hai hamne nahi bataya.
printf("The value of 4 * 5 is = %d\n",(4)*(5));//ye sahi hai.

//printf("The value of 4 ^ 5 is %d\n",4^5);THERE IS NO OPERATOR TO PERFORM EXPONENTIATION IN C,YE GALAT HAI YE 4 KA PAWER 5 NAHI HAI.
//YE UPAR WALA ERROR NAHI DEGA OUTPUT 1 AYEGA KYU KI YE BITWISE  XOR OPERATOR HAI PAR YE OUTPUT GALAT HAI(4^5).


printf("The value of 4 to the power 5 is = %f\n",pow(4,5));//yaha par float likhana padhega kyu ki yaha par double return karta hai.

return 0;
}

//..............................(2) ARITHMATIC  OPERATION / INSTRUCTION (TYPE CONVERSION)..................................


#include<stdio.h>
int main()
{
printf("The value of 6 + 5 is = %d\n",6 + 5);             //integer + integer = integer
printf("The value of 6 + 5.6 is = %f\n",6 + 5.6);        //integer + float = float
printf("The value of 6.1 + 5.6 is = %f\n", 6.1 + 5.6);  //float + float = float
printf("The value of 5 / 2 is = %d\n",5 / 2);          // integer +integer =integer
printf("The value of 5.0 / 2 is = %f\n",5.0 / 2);     //float +integer = float
printf("The value of 2 / 5 is = %d\n", 2 / 5);       //integer +integer=integer
printf("The value of 2.0 / 5 is = %f\n", 2.0 / 5);  //float +integer=float

return 0;
}


//...........................OPERATOR PRACEDENCE............................

//first priority=   *,/,%
//second priority=    +,- 
//third priority=     =


#include<stdio.h>
int main()
{
int x=4;
int y=9;

printf("The value of 3*x-8*y is %d\n",3*x-8*y);
printf("The value of 3*x-8*y is %d\n",3*(x-8*y));
printf("The value of 8*y / 3*x is %d\n",8*y / 3*x) ;//8*9/3*4=72/12=6 Aana chahiye par answer kuchh aur hi aa raha hai kyu ki yaha par bodmas rull nahi lagega.
//yaha par assosiativity left to right jayega aur jo pahale operator  rahega usaki  assosiativity /priority adhik hogi.
//8*9/3*4=72/3 *4=24*4=96answer hoga .

return 0;
}


//..................................CONTROL INSTRUCTION.........................................................


//     1-SEQUENCE CONTROL INSTRUCTION.
//     2-DECISION CONTROL INSTRUCTION.
//     3-LOOP CONTROL INSTRUCTION.
//     4-CASE CONTROL INSTRUCTION.



//.......................PRACTICE SET................................................................

//QUESTION ->1


#include<stdio.h>
int main()
{
int a;b=a;
return 0;
}

//This program is not valid.


#include<stdio.h>
int main()
{
	int a; int b;
	
	return 0;
}

//This program is valid.


#include<stdio.h>
int main()
{
int v=3^3;
printf("%d",v);
return 0;
}

//This program is valid.But not a correct answer.Because clanguage is not use in bitwise xor operator.


#include<stdio.h>
int main()
{
char dt='21 dec 2021'

return 0;
}

//This program is not valid.Because charector only one charector store.


#include<stdio.h>
int main()
{
	char dt='2';
	return 0;
}

//This program is valid .because charector only one charector store.

//QUESTION->2

//     1) what data type will 3.0/8-2 return ?

//      =>Answer is double data type.


#include<stdio.h>
int main()
{
float d=(3.0/8-2);
printf("%f",d);

return 0;
}



//   QUESTION->3


//    Q3.  write a program to determine wheather a number is divisible by 97 or not ?

#include<stdio.h>
int main()
{
int num;
printf("Enter the number \n");
scanf("%d",&num);
printf("Divisibility test return =%d\n",num % 97);

return 0;
}


//  QUESTION->4


//    Q4. Explain step by step evaluation of 3*x/y-z+k where x=2 ,y=3 ,z=3, k=1.

#include<stdio.h>
int main()
{
int x=2,y=3,z=3,k=1;
int result= 3*x/y-z+k ;
         // 3*2/y-z+k
        // 6/3-z+k
       //2-z+1
      //3-z
     //3-3=0
printf("The value of result is %d",result);


return 0;
}

//  QUESTION->5

//  Q5. 3.0+1 WILL BE:
//      a)Integer
//      b)Floating point number
//      c)character

#include<stdio.h>
int main()
{
	printf("The number will be %f\n",3.0+1);
	
	return 0;
}

//   Answer is b) floating point number.



//*...................CHAPTER-> 3 CONDITIONAL INSTRUCTION........................


// ----------  DECISION MAKING INSTRUCTION IN C LANGUAGE -------------------------------
//                   1) IF ELSE STATEMENT.
//                   2) SWITCH STATEMENT.



//  C PROGRAMING TO CHECK WHETHER A NUMBER IS  EVEN OR ODD.
#include<stdio.h>
int main()
{
	int a;
	
	printf("Enter a number\n");
	scanf("%d",&a);
	
	if(a%2==0)
	{
		printf("%d is a even number\n",a);
		
	}
	else
	{
		
		printf("%d is a odd number\n",a);
		
	}
	return 0;
}


.....................................................................................

#include<stdio.h>
int main()
{

	int age;
	
	printf("Enter your age \n");
	scanf("%d",&age);
	if(age>18)
	{
		printf("%d you can drive\n",age);
		
	}
	else
	{
		
	    printf("%d you cannot drive\n",age);
	
    }
	return 0;
}



//........................RELATIONAL OPERATOR....................................

/* NOTE->    1)(==)DOUBLE EQUAL TO EQUALITY CHECK KE LIYE HOTA HAI.AUR YE RELATIONAL OPERATOR HAI.
             2)(=)EQUAL KA MATALAB ASSIGMENT OPERATOR HOTA HAI.    */



#include<stdio.h>
int main()
{

	int age;
	
	printf("Enter your age \n");
	scanf("%d",&age);
	if(age>=18)    //It is a relational operator(greater than equal to)
	{
		printf("%d you can drive\n",age);
		
	}
	else
	{
		
	    printf("%d you cannot drive\n",age);
	
    }
    if(age==50)
    {
    	
    	printf("Halfcentury you can drive\n",age);
	}
	return 0;
}



//...........................................LOGICAL OPERATOR................................................


//NOTE->     1)(&&)YE LOGICAL AND OPREATOR HAI AUR.
//           2)(&)YE BITWISE OPREATOR HAI.   
//           3)(&&)AND OPERATOR, BOTH CONDITION ARE TRUE THEN OUPUT IS TRUE.
//           4)(||)OR OPERATOR,AT LEAST ONE CONDITION IS TRUE THEN OUPUT IS TRUE.AUR BOTH CONDITION IS TRUE THEN OUTPUT IS TRUE.
//           5)(!)NOT OPERATOR, AGAR DONO FALSE HAI TO OUTPUT TRUE AYEGA .ISAKA HAMESHA ULTA HI OUTPUT ATA HAI.


#include<stdio.h>
int main()
{

	int age;
	
	printf("Enter your age \n");
	scanf("%d",&age);
	if( age<=70 && age>=18) 
	{
		printf("you are above 18 and below 70,You can drive\n",age);
		
	}
	else
	{
		
	    printf(" you cannot drive\n",age);
	
    }
    
	return 0;
}


//........................................  IF ELSE IF ..................................................


#include<stdio.h>
int main()
{
int num;

printf("Enter your number\n");
scanf("%d",&num);

if(num==1){       /* isame pahale ye condition check hoga agar ye condition true hogi to direct ye program return 0 par chali jayegi yani bahar ho jayegi ,
                  lekin agar ye first wali condition false  ho jati hai to hamari second wali condition check karegi agar second wali true ho jati hai to 
                  program se bahar yani return 0 par chali jayegi agar false hoti hai to fir third condition check karegi .aise hi ye jab tak condition true 
                  nahi ho jati tab tak ye one by one sari condition check karti hi jayegi.    */
                  
	printf("your number is one\n");
}
else if(num==2)
{
	printf("your number is two\n");
	
}
else if(num==3)
{
	printf("your number is three\n");
	
}
else
{
	printf("Its number is not 1,2 or 3\n");
	
}

	return 0;
}

//       NOTE->    ISAME ELSE WALA CONDITION OPPOSIONAL HOTA HAI.YE LIKH BHI SAKTE HAI YA NAHI BHI.



//......................OPERATOR PRECIDENCE...............................................

/* PRIORITY              OPERATOR

    1st       ->         (  ! )
                
    2nd       ->         ( * , / , % )
                 
    3rd       ->         ( + , - )
                 
    4th       ->         ( < > , < = ,> = )
                 
    5th       ->         ( = = , ! = )
                 
    6th       ->         ( & & )
                 
    7th       ->         ( | | )
                 
    8th       ->         ( = )           */


//...................................CONDITIONAL OPERATOR.............................
/*                  -> CONDITIONAL OPERATOR IF ELSE KE SHORT FORM HOTE HAI .

    ->                      ( ?, : )->YE HAI TERNARY OPERATOR .  */


#include<stdio.h>
int main()
{
int a;

printf("Enter a \n");
scanf("%d",&a);

  (a<5)? printf("A is less than 5") : printf("A is not less than 5");

	return 0;
}



//................................................SWITCH CASE CONTROL INSTRUCTION..........................................................


#include<stdio.h>
int main()
{
int rating;
printf("Enter your rating (1-5)\n");
scanf("%d",&rating);

switch(rating)
{
	case 1:
		printf("your rating is one \n"); 
		break;
	case 2:
		printf("your rating is two \n");
		break;
	case 3:
		printf("your rating is three \n");
		break;
	case 4:
		printf("your rating is four \n");
		break;
	case 5:
		printf("your rating is five \n");
		break;
	default:
		printf("Invalid rating \n");
		break;
}
		
	return 0;	
}



//  QUIZE QUESTION->


/*  Q1. Write a program to find grade of a student given his marks based on below:
    90-100=A            <70 = F
    80-90=B            
    70-80=C
    60-70=D */

#include<stdio.h>
int main()
{
	int marks;
	
	printf("Grade of a students\n");          //YE PROGRAM GALAT HAI ISAKO SAHI KARANA HAI.
	scanf("%d",&marks);
	
	switch(marks)
	{
	    case (90-100):
	    	printf("Grade A\n");
		    break;
		case (80-90):
	    	printf("Grade B\n");
		    break;
		case (70-80):
	    	printf("Grade C\n");
		    break;	
		case (60-70):
	    	printf("Grade D\n");
		    break;			
	
		
	return 0;	
}



//.............................................. PRACTICE SET CHAPTER-> 3 ...........................................................


//    Q1.  What will be the output of this program

//                int a=10;
//                if(a=11)
//                printf("I an 11");
//                else 
//                printf("I am not 11");


#include<stdio.h>
int main()
{
	int a=10; 
	 
 if(a=11)
 {
    printf("I am 11");
 }
    
 else 
 {
    printf("I am not 11");
 }
	
	return 0;
}



/*    Q2.  Write a  program to find out whether a student is pass or fail.if it requires total 40% and at least 33% in each subject to pass assume
    3 subjects and take marks as or input from the user.*/

 

#include<stdio.h>
int main()
{
	int physics,chemistry,maths;
	float total;
	
	printf("Enter physics marks=\n ");
	scanf("%d",&physics);
	
	printf("Enter chemistry marks=\n ");
	scanf("%d",&chemistry);
	
	printf("Enter maths marks=\n ");
	scanf("%d",&maths);
	
	total=(physics+chemistry+maths)/3;
	
	if((total<40)||physics<33||chemistry<33||maths<33)
	{
		printf("your total percentage is %f and you are fail",total);
	}
	else
	{
		printf("your total percentage is %f and you are pass",total);
	}

	
	return 0;
}



/*    Q3.  Calculate income tax paid by an employee to the government as per the slabs mentioned below.
             Incomeslab           Tax
             2.5l-5.0L             5%
             5.0l-10.0L           20%
             ABOVE 10.0L          30%          
      NOTE THAT THERE IS NO TAX BELOW 2.5L TAKE INCOME AMOUNT AS AN INPUT FROM THE USER. */       
 

#include<stdio.h>
int main()
{
float tax=0,income;

printf("Enter your income\n");
scanf("%f",&income);

if(income >= 250000 && income <= 500000)
{
	tax = tax + 0.05 * (income - 250000);
}

if(income >= 500000 && income <= 1000000)
{
	tax = tax + 0.20 * (income - 500000);
}

if(income >= 1000000)
{
	tax = tax + 0.30 * (income - 1000000);
}
	printf("your net income tax to be paid  by 26th of this month is %f\n",tax);
	
	return 0;
}



/*    Q4.  Write a program to find whether a year entered by the user is a leap year or not .Take year as an input from the user.   */
 

#include<stdio.h>
int main()


	return 0;
}



/*    Q5.  Write a program to determine whether a character entered by the user is lowercase or not.   */
 

#include<stdio.h>
int main()
{
	//97-122 =a-z   ASCII VALUES
	
	char ch;
	printf("Enter the charactor\n");
	scanf("%c",&ch);
	if(ch<=122 && ch>=97)
	{
		printf("It is lowercase\n");
	}
	else
	{
		printf("It is not lowercase\n");
	}
	


	return 0;
}




/*    Q6.  Write a program to find greater of four numbers entered by the user.   */


#include<stdio.h>
int main()
{
	
	return 0;
}



/*.....................................(CHAPTER->4)......LOOP CONTROL INSTRUCTION............................................

#     THERE ARE THREE TYPE OF LOOPS 
         1) WHILE LOOP
         2)DO WHILE LOOP
         3)FOR LOOP                          */


/*--------------------------------------------1) WHILE LOOP--------------------------------------------------------- */


#include<stdio.h>
int main()
{
int a;
scanf("%d",&a);
while(a<10)
{
	printf("%d\n",a);
	a++;
}
	
	return 0;
}

/*************************************************************************************************************************/

#include<stdio.h>
int main()
{
int i=0;
while(i<10)
{
	printf("The value of i is = %d\n",i);
	i++;
}

	return 0;
}



/*    Q1.  Write a program to print natural number from 10 to 20. When intial loop counter i is intialiged to 0.   */
 

#include<stdio.h>
int main()
{
	int i=0;
	
	while(i<=20)
{
	if(i>=10)
	{
		printf("The value of i is %d\n ",i);
	}
	i++;
}
	return 0;
}



/********************************************* # INCREAMENT OR DECREAMENT OPERATOR # ****************************************/ 

/*   NOTE:-
 
    1)   ++i-> plus plus i ka matalab pahale increament karo phir print karo.
    2)   i++-> i plus plus ka matalab pahale print karo phir increament karo.          
    3)   (+ =)-> ye compound assignment operator .                          
    4)   (i+=10)-> isaka matalab increament i by 10.

#include<stdio.h>
int main()
{
	int i=5;
	printf("The value after i++ is %d\n",i++);
	printf("The value of i is %d\n",i);
	
	
	return 0;
}


/*******************************************************************************************************************************/


#include<stdio.h>
int main()
{
	int i=5;
	printf("The value after i++ is %d\n",++i);
	printf("The value of i is %d\n",i);
	
	
	return 0;
}


/*****************************************************************************************************************************/

/*-------------------------------USE OF(i+=10;)INCREAMENT I BY 10-----------------------------------------------*/ 

#include<stdio.h>
int main()
{
	int i=5;
	printf("The value after i++ is %d\n",++i);
	printf("The value of i is %d\n",i);
	i+=10;
	printf("The value of i is %d\n",i);
	
	return 0;
}


/**************************************** 2) DO WHILE LOOP  **********************************************************/

/*     NOTE=>  1) WHILE->   CHECK THE CONDITION & THEN EXECUTS THE CODE.
               2) DO-WHILE->  EXECUTES THE CODE & THEN CHECK THE CONDITION.           
               3) DO -WHILE LOOP  =  WHILE LOOP WHICH EXECUTES AT LEAST ONCE.   
               4) DO-WHILE LOOP KAM SE KAM AK BAAR TO RUN KAREGA HI KAREGA USAKE BAAD CONDITION CHECK KAREGA.    */
               
               
#include<stdio.h>
int main()
{
	int i=0;
	do
	{
		printf("The value of i is %d\n",i);
		i++;
		
	} while(i<10);
	
	return 0;
}



/*  Q1.  WRITE A PROGRAM TO PRINT FIRST N NATURAL NUMBER USING DO-WHILE LOOP.   
          INPUT= 4
          OUTPUT=1,2,3,4.                */
          

#include<stdio.h>
int main()
{
	int i=0;
	int n;
	printf("Enter the value of n\n");
	scanf("%d",&n);
	do
	{
		printf("The number is %d \n",i+1);
		i++;
		
	} while(i<n);
	
	return 0;
}



/**************************************************** 3) FOR LOOP *************************************************/


#include<stdio.h>
int main()
{
	for(int a=0 ; a<=10 ; a++)
	{
		printf("The value of a is = %d \n " , a);
	}
	
	return 0;
}


/*    Q1.   WRITE A PROGRAM TO PRINT FIRST N NATURAL NUMBER USING FOR LOOP.     */ 


#include<stdio.h>
int main()
{
	for( )
	return 0;
	
}


/**********************************  DECREAMENT OPERATOR    *****************************************************************/


#include<stdio.h>
int main()
{
	for(int i=5 ; i ; i--)
	{
		printf("The value of i is = %d\n  " , i);
		
	}
	return 0;
}



/*    Q1.  Write a program to print N Nnatural number in reverse order.   */
 

#include<stdio.h>
int main()
{
	int n;
	printf("Enter the value of n \n");
	scanf("%d",&n);
	
	for(int i=n ; i ; i--)
	{
		printf("The value of i is = %d\n  " , i);
		
	}
	
	return 0;
}



/***************************** THE BREAK STATEMENT OF C **************************************************************/

#include<stdio.h>
int main()
{
  int i=0;
  do
  {
  	printf("The value of i is = %d \n",i);
  	//i++;
  	
  	if(i==4)
  	{
  		break;
	  }
        i++;
  	
  } while(i<10);
	
	return 0;
}


/***********************************  THE CONTINUE STATEMENT OF C *****************************************************/



#include<stdio.h>
int main()
{
  int skip = 5, i = 0;
  while(i<10)
  {
  	i++;
  	if(i!= skip)
  	{
  		continue;
	  }
	  else
	  {
	  	printf("%d \n", i);
	  }
  }
	return 0;
}


/****************************     PRACTICE SET CHAPTER-4   ***********************************************/

/*   Q1. WRITE A PROGRAM TO PRINT MULTIPLICATION TABLE OF A GIVEN NUMBER N.   */




/*   Q2. WRITE A PROGRAM TO PRINT MULTIPLICATION TABLE OF 10 IN REVERSED ORDER.   */


#include<stdio.h>
int main()
{
	printf("Multipication table of 10 \n");
	
 for( int i = 10 ; i ; i--)
 {
 	printf("10 X %d = %d \n ", i , 10 * i);
 }
	return 0;
}



/*   Q3. A DO WHILE LOOP IS  EXECUTED :-
         i)   at least once. 
         ii)  at least twice.
         iii) at most once.      

 =>  ANSWER-  i) at least once.                         */



/*   Q4. WHET CAN BE DONE USING ONE TYPE OF LOOP CAN ALSO BE DONE USING THE OTHER TWO TYPES OF LOOPS -TRUE OR FALSE ?    

=>   ANSWER-  True                                 */




/*   Q5.WRITE A PROGRAM TO SUM FIRST TEN NATURAL NUMBERS USING WHILE LOOP.       */



#include<stdio.h>
int main()
{
	int i=1,sum=0,n=10;
	
	while(i<=n)
	{
		sum +=i;
		i++; 
	}
	printf("The value of sum(1 to 10) is = %d \n",sum);
	
	return 0;
}



/*   Q6. WRITE A PROGRAM TO IMPLEMENT PROGRAM 5 USING FOR AND DO- WHILE LOOP.   */


/***********for loop se ye wala  program**********************************************/


#include<stdio.h>
int main()
{
	int i,sum=0,n=10;
	
	for(i=0;i<=n;i++)
	{
		sum +=i;
	}
	printf("The value of sum(1 to 10) is = %d \n",sum);
	
	return 0;
}
/******************* do -while se upar wala program *****************************************/

#include<stdio.h>
int main()
{
	
	return 0;
}




/*   Q7. WRITE A PROGRAM TO CALCULATE THE SUM OF THE NUMBER OCCURING IN THE MULTIPLICATION TABLE OF 8.(CONSIDER 8 X 1 TO 8 X 10). */

#include<stdio.h>
int main()
{
	
	return 0;
}




/*  Q8. WRITE A PROGRAM TO CALCULATE THE FACTORIAL OF A GIVEN NUMBER USING A FOR LOOP.                      */


#include<stdio.h>
int main()
{
	int i = 0, n = 7, factorial = 1;
	
	for(i = 1; i <= n ; i++)
	{
		factorial *= i ;
	}
	printf(" The value of factorial %d is %d " , n , factorial );
	
	return 0;
}


/*  Q9.  REAPEAT 8 USING WHILE LOOP.                        */


#include<stdio.h>
int main()
{
	
	return 0;
}


/*  Q10.  WRITE A PROGRAM TO CHECK WHETHER A GIVEN NUMBER IS PRIME OR NOT USING LOOPS.             */



#include<stdio.h>
int main()
{
	int n=3 , prime=1 ;
	for(int i=2;i<n;i++)
	{	
	if(n%i==0)
	{
	prime=0;	
	break;
	}
    } 
	if(prime==0 )
	{
		printf("This is not a prime number");
	}
	else
	{
		printf("This is a prime number");
	}


	return 0;
}
 


/*  Q11. IMPLEMENT 10 USING OTHER TYPES OF LOOP.                         */


#include<stdio.h>
int main()
{
	
	
return 0;
}


/**************************************************************  PROJECT NO => 1   **************************************************************************
*************************************************************************************************************************************************************
*************************************************************************************************************************************************************
************************************************************************************************************************************************************/



















	
