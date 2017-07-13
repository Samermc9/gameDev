#include <iostream>
#include <windows.h>
#include <conio.h>
#include <iomanip>


using namespace std;
int main (int argc, char** argv)
{
    string name; //Answer refers to the options available, whereas the p stands for which part of the story is it on.
    string ans1p1= "I am good! Thanks";
    string ans2p1= "I feel a bit down lately..";
    string ans3p1= "I am ok";
    int ansToQuestion, inp;
    int x= 50;



    Sleep(1000);
    cout << "You enter a bakery full of people, and meet an old man carrying a basket of bread who bumped into you....\n\n";
    Sleep(1000);
    cout << "Oh, sorry my dear, I didn't notice you.\n";
    Sleep(1000);
    cout << "What is your name young child?\n\n";
    cout << "Enter your name in the space below\n";
    cin>> name;
    Sleep(1000);
    cout << "\nOh " <<name<< "\n\n";
    Sleep(1000);
    cout << "The bakery is usually full during weekends, people say that this is the best bakery in town, don't you agree?\n\n";
    cout << "Type 1 for a yes, 2 for a no";
    cin >> inp;

    if (inp== 1)
    cout << "\nWonderful, I do agree!"<< endl;
    else if (inp== 2)
    cout << "\nOh that's a shame" << "\a" << endl;




    cout << "Anyway I have to getting going now, see you\n\n";
    cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n";
    Sleep(1500);
    cout << "Your phone starts ringing...\n\n";
    Sleep(1000);
    cout << "It's your mom\n";
    Sleep(1000);
    cout << "You pick up\n\n";
    Sleep(1000);
    cout << "Did you get the packet of bread I asked you to?\n\n";
    Sleep(1000);
    cout <<  "Apparently you forgot to get some bread since you were too busy talking to the old man.\n\n";
    Sleep(1000);
    cout << "Go buy bread for 10 coins?\n\n";
    cout << "Type 1 for yes. type 2 for a no";
    cin >> inp;

    if (inp== 1)
    {

    x= x-10;
    cout << "\n\nYou now have " << x << " coins left" << endl;
    Sleep(1000);
    cout << "You return home and give the bread to your mother..\n\n";
    Sleep(1000);
    cout << "Thank you so much! I can finish preparing dinner now.\n\n";
    Sleep(1000);
    cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n";
    cout << "You go to bed after dinner and wake up the next day preparing for school\n\n";

    }

    else if (inp== 1)
    {
    cout << "You decided not to get bread";
    Sleep(1000);
    cout << "Mom: why didn't you get the bread? I thought I asked you to do so.";
    Sleep(1000);
    cout << "Anyway, accidents happen\n";
    Sleep(1000);
    cout << "You go to bed and wake up the next day preparing for school\n\n";


    }
     cout << "You see your friend, its currently homeroom time.\n\n"<< endl;
     cout << "It's quite noisy right now.";
     cout << "Friend: Hello " << name << " How are you today?"<< endl;
     Sleep(1000);
     cout << "Respond by choosing one of the three options by entering the corresponding number\n" << endl;

     cout << "1. " << ans1p1 << endl;
     cout << "2. " << ans2p1 << endl;
     cout << "3. " << ans3p1 << endl;

     cin >> ansToQuestion;


     switch(ansToQuestion) {
     case 1:
        cout << "That's good to hear!" << endl;
        break;
     case 2:
        cout << "Oh I am sorry, is there anything I can do to cheer you up?" << endl;
        break;
     case 3:
        cout << "Hmmmm, ok :)" << endl;
     default :
        cout << "Remember to only use values given." << endl;
     }
    cout << "The teacher comes in the class goes silent." << endl;


























}





