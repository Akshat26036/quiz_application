#include<stdio.h>
int main()
{
    int i;
    int score=0; // total score store in this variable
    int answer; // answer given by the user store in this variable
    int user;
    int userdetails;
    printf("ENTER YOUR FIRST NAME :\n");
    scanf("%s",&userdetails);
    printf("ENTER YOUR LAST NAME :\n");
    scanf("%s",&userdetails);
    printf("ENTER YOUR AGE IN DIGITS:\n");
    scanf("%d",&userdetails);
    printf("ENTER YOUR MOBILE NUMBER :\n");
    scanf("%d",&userdetails);
    printf("!!!!!!!!!!!!!!!!!!!!!DISCLAIMER :-- THIS GAME IS MADE FOR INCREASING YOUR KNOWLEDGE !!!!!!!!!!!!!!!!!!!!!!!!!\n\n");
    printf("************************************************************************************************************\n\n\n");
    printf("_______________________________________WELCOME TO THE QUIZ GAME_____________________________________________\n\n");  // basic overall starting view

    printf("*************************************************************************************************************\n\n");
    printf("***************************************press 7 to start the game*********************************************\n\n");      // input by the user to start the game
    printf("***************************************press 0 to quite the game*********************************************\n\n");
    printf("***************************************press 1 to exit the game**************************************+*******\n\n");      // if user wants to end the game
    scanf("%d",&i);
    if (i==7)
    {
        printf("The game is start\n\n");         //loop of (0and7) from  start to end of the game
    }
    else if(i==0)
    {
        printf("The game is ended\n\n");
    }
    else if(i==1)
    {
        printf("to exit \n\n");
    }
    else
    {
        printf("Invalid\n\n");
    }
    if(i==7)
    {
                            //loop of 0and 7 starts with curly brackets
printf("--------Select Your Subject You Are Interested ---------------\n\n");
printf("1)Computer            2) Maths            3)General Knowledge  \n\n");
scanf("%d",&user);
if(user==1)
{
    printf("You Choose Computer Subject \n\n");

        printf("**************Computer Basic Question Each Questions Have 2 Points Be Careful To Give Your Answer*****************\n\n");


        printf("1)Which one is the first search engine in network?\n\n");   //question
        printf("1)Google\n");
        printf("2)Archie\n");              // correct answer
        printf("3)Altavistan\n");
        printf("4)Wais\n");
        printf("Enter your answer :");
        scanf("%d",&answer);
        if (answer==2)

        {
            printf("Correct Answer\n");
            score=score+2;
            printf("You have scored %d points\n",score);
        }
        else
        {
            printf("Wrong Answer\n");
            score=score-2;
            printf("You have scored %d points\n",score);
        }
printf("----------------------------------------------------------------\n\n");
        printf("2)Which one is the first web browser invented in 1990?\n\n");                //question
        printf("1)Internet Explorer\n");
        printf("2)Mosaic\n");
        printf("3)Mozilla\n");
        printf("4)Nexus\n");                                                              // correct answer
        printf("Enter Your Answer :");
        scanf("%d",&answer);
        if (answer==4)
        {
            printf("Correct answer\n");
            score=score+2;
            printf("You have scored %d points\n",score);
        }
        else
        {
            printf("Wrong answer\n");
            score=score-2;
            printf("you have scored %d points\n",score);
    }
    printf("---------------------------------------------------------------\n\n");
    printf("3)First computer virus is known as?\n\n");// question
    printf("1)Rabbit\n");
    printf("2)Creeper Virus\n");  // answer
    printf("3)Elk Cloner\n");
    printf("4)SCA Virus\n");

    printf("Enter Your Answer:");
    scanf("%d",&answer);

    if(answer==2)
    {
        printf("Correct Answer\n");
        score=score+2;
        printf("You have scored %d points\n",score);
    }
    else
    {
        printf("Wrong Answer\n");
        score=score-2;
        printf("You have scored %d points\n",score);
    }
    printf("-------------------------------------------------------------------\n\n");
    printf("4)Who is known as the Father Of Computer?\n\n");   // question
    printf("1)Charles Babbage\n");    // asnwer
    printf("2)Federico Faggin\n");
    printf("3)Douglas Engelbart\n");
    printf("4)William Douglas\n");
    printf("Enter Your Answer:\n");
    scanf("%d",&answer);

    if(answer==1)
    {
        printf("Correct Answer\n");
        score=score+2;
        printf("You have scored %d points\n",score);
    }
    else
    {
        printf("Wrong Answer\n");
        score=score-2;
        printf("You have scored %d points\n",score);
    }
    printf("--------------------------------------------------------------------\n\n");
    printf("5)Who is the Father of Mouse?\n\n");  // question
    printf("1)Douglas Engelbart\n");   // asnwer
    printf("2)Dennis Ritchie\n");
    printf("3)Ken Thompson\n");
    printf("4)Brian Kernighan\n");
    printf("Enter Your Answer:\n");
    scanf("%d",&answer);
    if(answer==1)
    {
    printf("Correct Answer\n" );
    score=score+2;
    printf("You have scored %d points\n",score);
    }
    else
    {
        printf("Wrong Answer\n");
        score=score-2;
        printf("you have scored %d points\n",score);
    }
    printf("----------------------------------------------------------------------\n\n");
    printf("6)Who is the Father of C language?\n\n");   // question
    printf("1)Tim Berners Lee\n");
    printf("2)Dennis Ritchie\n");    // answer
    printf("3)Guido van Rossum\n");
    printf("4)Charles Babbage\n");
    printf("Enter Your Answer:\n");
    scanf("%d",&answer);
    if(answer==2)
    {
        printf("Correct Answer\n");
        score=score+2;
        printf("You have scored %d points\n",score);
    }
    else
    {
        printf("Wrong Answer\n");
        score=score-2;
        printf("You have scored %d points\n",score);
    }
    printf("\n\n\n\n\n\n!!!!Your Level is increasing be Careful!!!!\n\n");
    printf("-------------------------------------------------------------------------\n\n");
  printf("7)Which of the following is known as primary memory?\n\n");    // question
  printf("1)Hard Disk\n");
  printf("2)Compact Disk\n");
  printf("3)Ram Access Memory\n");             // answer
  printf("4)Optical Derive\n");
  printf("Enter Your Answer:\n");
  scanf("%d",&answer);
  if (answer==3)
  {
      printf("Correct Answer\n");
      score=score+2;
      printf("You have scored %d points\n",score);
  }
  else
  {

      printf("Wrong Answer\n");
      score=score-2;
      printf("You have scored %d points\n",score);
  }
  printf("------------------------------------------------------------------------------\n\n");
    printf("8)Which of the following is output device?\n\n");     // question
    printf("1)Monitor\n");           // answer
    printf("2)Mouse\n");
    printf("3)Keyboard\n");
    printf("4)Joystick\n");
    printf("Enter Your Answer:\n");
    scanf("%d",&answer);

    if(answer==1)
    {
        printf("Correct Answer\n");
        score=score+2;
        printf("You have scored %d points\n",score);
    }
    else
    {
        printf("Wrong Answer\n");
        score=score-2;
        printf("You have scored %d points\n",score);
    }
    printf("-----------------------------------------------------------------------------\n\n");
    printf("9)Which function is required to give input in C language?\n\n"); // question
    printf("1)Printf function\n");
    printf("2)Scanf function\n");      // answer
    printf("3)Input function\n");
    printf("4)Output function\n");
    printf("Enter Your Answer:\n");
    scanf("%d",&answer);

    if(answer==2)
    {
        printf("Correct Answer\n");
        score=score+2;
        printf("You have scored %d points\n",score);
    }
    else
    {
        printf("Wrong Answer\n");
        score=score-2;
        printf("You have scored %d points\n",score);
    }
    printf("------------------------------------------------------------------------------\n\n");
    printf("10)Which datatype is used for decimal value?\n\n");   // question
    printf("1)string datatype\n");
    printf("2)integer datatype\n");
    printf("3)float datatype\n");    // answer
    printf("4)character datatype\n");
    printf("Enter Your Answer:\n");
    scanf("%d",&answer);

    if(answer==3)
    {
        printf("Correct Answer\n");

        score=score+2;
        printf("You have scored %d points\n",score);
    }
    else
    {
        printf("Wrong Answer\n");
        score=score-2;
        printf("You have scored %d points\n",score);
    }
}
else if(user==2)
{
    printf("You Choose Maths Subjects\n\n");
    printf("************Maths Basic Questions each of 2 marks be careful ************\n\n"); // maths start
    printf("1)2+25-10=?\n\n");         // question
    printf("1)10\n");
    printf("2)20\n");
    printf("3)17\n");      // answer
    printf("4)25\n");
    printf("Enter Your Answer:\n");
    scanf("%d",&answer);

    if(answer==3)
        {
        printf("Correct Answer\n");
        score=score+2;
        printf("You have scored %d points\n",score);
        }

        else
        {
            printf("Wrong Answer\n");
            score=score-2;
            printf("You have scored %d points\n",score);
        }
        printf("----------------------------------------------------------------------------\n\n");
        printf("2)10*2+5-3=?\n\n");        //question
        printf("1)55\n");
        printf("2)62\n");
        printf("3)66\n");
        printf("4)22\n");       // answer
        printf("Enter Your Answer\n\n");
        scanf("%d",&answer);

        if (answer==4)
        {
            printf("Correct Answer\n");
            score=score+2;
            printf("You have scored %d points\n",score);
        }
        else
        {
            printf("Wrong Answer\n");
            score=score-2;
            printf("You have scored %d points\n",score);
        }
printf("--------------------------------------------------------------------------------------\n\n");
        printf("3)5+{48*5(5+4-2)+2=?\n\n");   // question
        printf("1)1200\n");
        printf("2)1150\n");
        printf("3)1687\n");    // answer
        printf("4)1666\n");
        printf("Enter Your Answer:\n");
        scanf("%d",&answer);

        if(answer==3)
        {
            printf("Correct Answer\n");
            score=score+2;
            printf("You have scored %d points\n",score);
        }
        else
        {
            printf("Wrong Answer\n");
            score=score-2;
            printf("You have scored %d points\n",score);
        }
        printf("---------------------------------------------------------------------------------\n\n");
        printf("4)If x+y=5,2x-y=10,find the value of x and y?\n\n");  // question
        printf("1)x=5,y=5\n");
        printf("2)x=0,y=5\n");
        printf("3)x=5,y=0\n");    // answer
        printf("4)x=0,y=5\n");
        printf("Enter Your Answer:\n");
        scanf("%d",&answer);
       if (answer==3)
      {
       printf("Correct Answer\n");
       score=score+2;
      printf("You have scored %d points\n",score);
       }
      else
       {
       printf("Wrong Answer\n");
      score=score-2;
      printf("You have scored %d points\n",score);
      }
printf("--------------------------------------------------------------------------------------------\n\n");
        printf("5)If x=5,y=x+5,then what is the value of 2y?\n\n");    //  question
        printf("1)20\n");   // answer
        printf("2)25\n");
        printf("3)15\n");
        printf("4)22\n");
        printf("Enter Your Answer:\n");
        scanf("%d",&answer);
        if (answer==1)
        {
            printf("Correct Answer\n");
            score=score+2;
            printf("You have scored %d points\n",score);
        }
        else
        {
            printf("Wrong Answer\n\n");
            score=score-2;
            printf("You have scored %d points\n",score);
        }
        printf("------------------------------------------------------------------------------------\n\n");
        printf("6)if x+y=2,x+2y=4,then find the value of x and y?\n\n");     // question
        printf("1)x=0,y=-2\n");
        printf("2)x=2,y=2\n");
        printf("3)x=0,y=2\n");        // answer
        printf("4)x=-2,y=2\n");
        printf("Enter Your Answer\n");
        scanf("%d",&answer);
        if(answer==3)
        {
            printf("Correct Answer\n");
            score=score+2;
            printf("You have scored %d points\n",score);
        }
        else
        {
            printf("Wrong Answer\n");
            score=score-2;
            printf("You have scored %d points\n",score);
        }
        printf("---------------------------------------------------------------------------------------\n\n");
        printf("7)What is the differentiation of'cos x'?\n\n");//         question
        printf("1)tan x\n");
        printf("2)sin x\n");
        printf("3)-sin x\n");     // answer
        printf("4)cot x\n");
        printf("Enter Your Answer:\n");
        scanf("%d",&answer);
        if(answer==3)
        {
            printf("Correct Answer\n");
            score=score+2;
            printf("You have scored %d points\n",score);
        }
        else
        {
            printf("Wrong Answer\n");
            score=score-2;
            printf("You have scored %d points\n",score);
        }
        printf("-----------------------------------------------------------------------------------------\n\n");
        printf("8)What is the square of 18?\n\n");     // question
        printf("1)324\n");
        printf("2)326\n");                      // answer
        printf("3)328\n");
        printf("4)-326\n");
        printf("Enter Your Answer:\n");
        scanf("%d",&answer);
        if(answer==2)
        {
            printf("Correct Answer\n");
            score=score+2;
            printf("You have scored %d points\n",score);
        }
        else
        {
            printf("Wrong Answer\n");
            score=score-2;
            printf("You have scored %d points\n",score);
        }
        printf("-------------------------------------------------------------------------------------------\n\n");
        printf("9)What is the sum of the first 20 even natural numbers?\n\n");       // question
        printf("1)415\n");
        printf("2)420\n");            // answer
        printf("3)422\n");
        printf("4)418\n");
        printf("Enter Your Answer:\n");
        scanf("%d",&answer);
        if(answer==2)
        {
            printf("Correct Answer\n");
            score=score+2;
            printf("You have scored %d points\n",score);
        }
        else
            {
            printf("Wrong Answer\n");
            score=score-2;
            printf("You have scored %d points\n",score);
        }
        printf("---------------------------------------------------------------------------------------------\n\n");
        printf("10)5523/3=?\n\n");    // question
        printf("1)1842\n");
        printf("2)1841\n");         // answer
        printf("3)1838\n");
        printf("4)1844\n");
        printf("Enter Your Answer:\n");
        scanf("%d",&answer);
        if (answer==2)
        {
            printf("Correct Answer\n");
            score=score+2;
            printf("You have scored %d points\n",score);
        }
        else
        {
            printf("Wrong Answer\n");
            score=score-2;
            printf("You have scored %d points\n",score);
        }
        }

        else
        {
            printf("You choose General Knowledge\n\n");
        printf("-------------------------------------------------------------------------------------------\n\n");
        printf("**************Basic General Knowledge  Questions ***************\n\n");
        printf("1)Who is known as the father of nation?\n\n");
        printf("1)Sardar Vallab Bhai Patel\n");
        printf("2)Bhagat Singh\n");
        printf("3)Mahatma Gandhi\n");
        printf("4)Jawallal Nehru\n");
        printf("Enter Your Answer:\n");
        scanf("%d",&answer);
        if (answer==3)
        {
            printf("Correct Answer\n");
            score=score+2;
            printf("You have scored %d points\n",score);
        }
        else
            {
            printf("Wrong Answer\n");
            score=score-2;
            printf("You have scored %d points\n",score);
        }
        printf("-----------------------------------------------------------------------------------------------\n\n");
        printf("2)Who is known as the Iron Man of India?\n\n");
        printf("1)Rajeev Gandhi\n");
        printf("2)Sardar Vallabhai Patel\n");
        printf("3)Bhagat Singh\n");
        printf("4)Sukhdev\n");
        printf("Enter Your Answer:\n");
        scanf("%d",&answer);
        if(answer==2)
        {
            printf("correct answer\n");
            score=score+2;
            printf("You have scored %d points\n",score);
        }
        else
            {
            printf("Wrong Answer\n");
            score=score-2;
            printf("You have scored %d points\n",score);
        }
        printf("--------------------------------------------------------------------------------------------------\n\n");
        printf("3)When was India declared as an Independent Country?\n\n");
        printf("1)26 January 1947\n");
        printf("2)15 August 1947\n");
        printf("3)26 August 1947\n");
        printf("4)15 August 1948\n");
        printf("Enter Your Answer\n");
        scanf("%d",&answer);
        if(answer==2)
        {
            printf("Correct Answer\n");
            score=score+2;
            printf("You have scored %d points\n",score);
        }
else
    {
            printf("Wrong Answer\n");
            score=score-2;
            printf("You have scored %d points\n",score);
        }
        printf("----------------------------------------------------------------------------------------------------\n\n");
        printf("4)Who known as the 'Missile Man of India?'\n\n");
        printf("1)Dr.B.R Ambedkar\n");
        printf("2)K.R.Narayanan\n");
        printf("3)Dr.A.P.J Abdul Kalam\n");
        printf("4)Zail Singh\n");
        printf("Enter Your Answer:\n");
        scanf("%d",&answer);
        if(answer=3)
        {
            printf("Correct Answer\n");
            score=score+2;
            printf("You have scored %d points\n",score);
        }
        else
            {
            printf("Wrong Answer\n");
            score=score-2;
            printf("You have scored %d points\n",score);
        }
        printf("----------------------------------------------------------------------------------------------------\n\n");
        printf("5)Who wrote the national song of India?\n\n");
        printf("1)Bamkin Chandra Chatterjee\n");
        printf("2)Rabindranath Tagore\n");
        printf("3)Amarnath Tagore\n");
        printf("4)Premchand\n");
        printf("Enter Your Answer:\n");
        scanf("%d",&answer);
        if(answer==1)
        {
            printf("Correct Answer\n");
            score=score+2;
            printf("You have scored %d points\n",score);
        }
        else
            {
            printf("Wrong Answer\n");
            score=score-2;
            printf("You have scored %d points\n",score);
        }
        printf("--------------------------------------------------------------------------------------------------------\n\n");
        printf("6)Who give the slogan of 'Do or Die'?\n\n");
printf("1)Mahatma Gandhi\n");
printf("2)Yusuf Meherally\n");
printf("3)Chempakaraman Pillai\n");
printf("4)Netaji Subhash Chanrdra Bose\n");
printf("Enter Your Answer\n");
scanf("%d",&answer);
if (answer==1)
{
printf("Correct Answer\n");
score=score+2;
printf("You have scored %d points\n",score);
}
else
{
printf("Wrong Answer\n");
score=score-2;
printf("You have scored %d points\n",score);
}
printf("--------------------------------------------------------------------------------------------------------------\n\n");
printf("7)Who give the slogan of Inquilab Zindabad?\n\n");
printf("1)Mahatma Gandhi\n");
printf("2)Maulana Hasrat Mohani\n");
printf("3)Bhagat Singh\n");
printf("4)Premchand\n");
printf("Enter Your Answer:\n");
scanf("%d",&answer);
if(answer==2)
{
    printf("Correct Answer\n");
    score=score+2;
    printf("You have scored %d points\n",score);
}
else
{
printf("Wrong Answer\n");
score=score-2;
printf("You have scored %d points\n",score);
}
printf("---------------------------------------------------------------------------------------------------------------\n\n");
printf("8)What is the capital of Uttar Pradesh?\n\n");
printf("1)Raipur\n");
printf("2)chandigarh\n");
printf("3)Lucknow\n");
printf("4)panji\n");
printf("Enter Your Answer\n");
scanf("%d",&answer);
if(answer==3)
{
    printf("Correct Answer\n");
    score=score+2;
    printf("You have scored %d points\n",score);
}
else{
    printf("Wrong Answer\n");
    score=score-2;
    printf("You have scored %d points\n",score);
}
printf("------------------------------------------------------------------------------------------------------------------\n\n");
printf("9)What is the full form of RBI?\n\n");
printf("1)Reserve Bank of Indonasia\n");
printf("2)Research Bank of India\n");
printf("3)Reserved Bank of India\n");
printf("4)Reserve Bank of India\n");
printf("Enter Your Answer:\n");
scanf("%d",&answer);
if(answer==4)
{
    printf("Correct Answer\n");
    score=score+2;
    printf("You have scored %d points\n",score);
}
else
{
    printf("Wrong Answer\n");
    score=score-2;
    printf("You have scored %d points\n",score);
}
printf("--------------------------------------------------------------------------------------------------------------------\n\n");
printf("10) How many continents and oceans are there in the world?\n\n");
printf("1)7 continents and 8 oceans\n");
printf("2)6 continents and 7 oceans\n");
printf("3)8 continents and 7 oceans\n");
printf("4)7 continents and 7 oceans\n");
scanf("%d",&answer);
if(answer==4)
{
    printf("Correct answer\n");
    score=score+2;
    printf("You have scored %d points\n",score);
}
else
{
    printf("Wrong Answer\n");
    score=score-2;
    printf("You have scored %d points\n",score);
}
        }

printf("***********************************************Session has ended**********************************************\n\n");
{
printf("Results=%d points\n",score);       // total score obtained
}


if (score>=8)
{
    printf("*******************************You performed well***********************************\n\n ");
}
else if(score>=6)
{
    printf("**********************************performed well next time**************************\n\n");
}
else
{
    printf("**********************************Try again need more practice***************************************\n\n");
}


   }                     // loops of 0and7 ends with the curly brackets
    }
