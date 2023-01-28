/*
----------------------------------------------------------------------------
               Project title   : INERTIA(personal virtual assistant)
               Made By         : Shankar Singh Mahanty
               Written in      : C++
               Platform        : WINDOWS
               IDE used        : VS CODE
 ----------------------------------------------------------------------------
*/

#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <string.h>
#include <ctime>

using namespace std;

void wishme(){
    time_t now = time(0);
    tm *time = localtime(&now);

    if (time-> tm_hour < 12){
        cout<< "Good Morning My Master"<<endl;
        string phrase = "Good Morning My Master";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
    }

    else if (time-> tm_hour >= 12 && time->tm_hour <= 16){
        cout<< "Good Afternoon My Master"<<endl;
        string phrase = "Good Afternoon My Master";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
    }
    
    else if (time-> tm_hour > 16 && time->tm_hour < 24){
        cout<< "Good Evening My Master"<<endl;
        string phrase = "Good Evening My Master";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
    }
}

string space2add(string text)
{
    for(int i = 0; i < text.length(); i++)
    {
        if(text[i] == ' ')
            text[i] = '+';
    }
    return text;
}

string space2mod(string text)
{
    for(int i = 0; i < text.length(); i++)
    {
        if(text[i] == ' ')
            text[i] = '_';
    }
    return text;
}

string space2change(string text)
{
    for(int i = 0; i < text.length(); i++)
    {
        if(text[i] == ' ')
            text[i] = '-';
    }
    return text;
}

void datetime()
{
    time_t now = time(0);
    char *dt = ctime(&now);
    cout<<"The date and time is "<<endl << dt <<endl;
    string s= "The date and time is " + (string)dt;
    string command = "espeak \"" + s + "\"";
    const char *charCommand = command.c_str();
    system(charCommand);
}

int main()
{
    system("cls");
                    cout << "\t\t\t<============================= W E L C O M E==================================>" << endl;
                    cout << "\t\t\t<========================= I'M VIRTUAL ASSISTANT =============================>" << endl;
                    cout << "\t\t\t<========================== MY NAME IS INERTIA ===============================>" << endl;
                    cout << "\t\t\t<============= I'M HERE TO HELP YOU AND MAKE YOUR LIFE EASY ==================>" << endl;

    char password[20];
    char ch[150];

    do
    {
        cout<<"======================="<<endl;
        cout<<"| ENTER YOUR PASSWORD |"<<endl;
        cout<<"======================="<<endl<<endl;
        string phrase = "enter your password";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);

        gets(password);

        for (int i=0; i<strlen(password); i++)
        password[i] = tolower(password[i]);

        STARTUPINFO startInfo = {0};
        PROCESS_INFORMATION processInfo = {0};

        if(strcmp(password, "shankar 1506")==0)
        {
            system("color 0a");
            cout<<"\n<==================================================================================================>\n\n";
            wishme();
           do
           {
             cout<<"\n<==================================================================================================>\n\n";
                cout<<endl<<"How can i help you My Master...."<<endl<<endl;

                string phrase = "How can i help you My Master";
                string command = "espeak \"" + phrase + "\"";
                const char *charCommand = command.c_str();
                system(charCommand);

                cout<<"Your query ===> ";
                gets(ch);
                for (int i=0; i<strlen(ch); i++)
                ch[i] = tolower(ch[i]);
                string temp =ch;
                cout<<endl;
                cout<<"Here is the result for your query ===> ";

                if(strcmp(ch, "hi") == 0 || strcmp(ch, "hey") == 0 || strcmp(ch, "hello") == 0 ){
                    cout<<"Hello My Master Hope You Are Doing Good....."<<endl;
                    string phrase = "Hello My Master........Hope you are doing good";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }
                
                else if(strcmp(ch, "bye") == 0 || strcmp(ch, "stop") == 0 || strcmp(ch, "exit") == 0 ){
                    cout<<"Good Bye sir, have a nice day!!!!"<<endl;
                    string phrase = "Good Bye sir, have a nice day";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("color f");
                    exit(0);
                }
                
                else if(strcmp(ch, "who are you") == 0 || strcmp(ch, "tell me about yourself") == 0 || strcmp(ch, "about") == 0 ){
                    cout<<"I'm a virtual assistant. My Name is INERTIA created by my Master Mr. Shankar Singh Mahanty."<<endl;
                    string phrase = "I am a virtual assistant   My Name is INERTIA.....created by my master Mr. Shankar Singh Mahanty";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }

                else if(strcmp(ch, "how are you") == 0 || strcmp(ch, "whatsup") == 0 || strcmp(ch, "how is your day") == 0 ){
                    cout<<"I'm good sir, Hope You Are Also in Good Health.."<<endl;
                    string phrase = "I'm good sir, Hope You Are Also in Good Health";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }

                else if(strcmp(ch, "time") == 0 || strcmp(ch, "date") == 0){

                    datetime();
                }

                else if(strcmp(ch, "open notepad") == 0){
                    cout<<"opening notepad....."<<endl;
                    string phrase = "opening notepad";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    CreateProcess(TEXT("C:\\Windows\\notepad.exe"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startInfo, &processInfo);
                }

                else if(strcmp(ch, "open powerpoint") == 0)
                {
                    cout<<"Opening Powerpoint....."<<endl;
                    string phrase = "Opening Powerpoint";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    CreateProcess(TEXT("C:\\Program Files\\Microsoft Office\\root\\Office16\\POWERPNT.exe"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startInfo, &processInfo);
                }

                else if(strcmp(ch, "open file explorer") == 0)
                {
                    cout<<"Opening file explorer....."<<endl;
                    string phrase = "Opening file explorer";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start explorer");
                }

                else if(strcmp(ch, "open windows media player") == 0)
                {
                    cout<<"Opening Windows Media Player....."<<endl;
                    string phrase = "Opening Windows Media Player";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start wmplayer");
                }
                else if(strcmp(ch, "open task manager") == 0)
                {
                    cout<<"Opening Task Manager....."<<endl;
                    string phrase = "Opening Task Manager";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start taskmgr");
                }
                
                else if(strcmp(ch, "open excel") == 0)
                {
                    cout<<"Opening Excel....."<<endl;
                    string phrase = "Opening Excel";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    CreateProcess(TEXT("C:\\Program Files\\Microsoft Office\\root\\Office16\\EXCEL.exe"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startInfo, &processInfo);
                }

                else if(strcmp(ch, "open word") == 0)
                {
                    cout<<"Opening WORD....."<<endl;
                    string phrase = "Opening Word";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    CreateProcess(TEXT("C:\\Program Files\\Microsoft Office\\root\\Office16\\WINWORD.exe"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startInfo, &processInfo);
                }

                else if(strcmp(ch, "open paint") == 0)
                {
                    cout<<"Opening MS Paint....."<<endl;
                    string phrase = "Opening Paint";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start mspaint");
                }

                else if(temp.find("what")==0 || temp.find("who")==0 || temp.find("where")==0 || temp.find("when")==0 || temp.find("which")==0 || 
                temp.find("whom")==0 || temp.find("whose")==0 || temp.find("why")==0 || temp.find("whether")==0 ||temp.find("how")==0 || temp.find("?")==temp.length()-1 )
                {
                    cout<<"CHECKING INTERNET CONNECTION...."<<endl;
                    string phrase = "CHECKING INTERNET CONNECTION";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);

                    cout<<"I am A genius , I can easily Provide the answer...Wait For me"<<endl;
                    phrase = "I am A genius , I can easily Provide the answer...Wait for me";
                    command = "espeak \"" + phrase + "\"";
                    charCommand = command.c_str();
                    system(charCommand);
                    temp= "start https://www.google.com/search?q="  + space2add(temp);
                    const char* comm = temp.c_str();
                    system(comm);
                }
                
                else if(strcmp(ch, "open google") == 0){
                    cout<<"openining google....."<<endl;
                    string phrase = "opening google";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start https://www.google.com");
                }
                
                else if(strcmp(ch, "open flipkart") == 0){
                    cout<<"openining flipkart....."<<endl;
                    string phrase = "opening flipkart";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start https://www.flipkart.com");
                }

                else if(strcmp(ch, "open netflix") == 0){
                    cout<<"openining netflix....."<<endl;
                    string phrase = "opening netflix";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start https://www.netflix.com/in/");
                }

                else if(strcmp(ch, "open amazon prime") == 0)
                {
                    cout<<"openining Amazon Prime....."<<endl;
                    string phrase = "opening amazon prime";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start https://www.primevideo.com");
                }

                else if(strcmp(ch, "open whatsapp") == 0)
                {
                    cout<<"openining Whatsapp....."<<endl;
                    string phrase = "opening whatsapp";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start https://web.whatsapp.com/");
                }

                else if(strcmp(ch, "open youtube") == 0){
                    cout<<"openining YouTube....."<<endl;
                    string phrase = "opening youtube";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start https://www.youtube.com");
                }

                else if(strcmp(ch, "open instagram") == 0){
                    cout<<"openining instagram....."<<endl;
                    string phrase = "opening instagram";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start https://www.instagram.com");
                }

                 else if(strcmp(ch, "tell me about todays weather") == 0  || (strcmp("weather",ch)==0))
                 {
                    cout<<"Searching For Weather Updates....."<<endl;
                    string phrase = "Searching For Weather Updates";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start https://weather.com/en-IN/weather/today/l/b19e1fd81fd015b890c7ca885c21f05eaa7171895c95af66d5997fb2bf944fe8");
                }

                else if(strcmp(ch, "open spotify") == 0)
                {
                    cout<<"Which song You wanna Listen To sir"<<endl;
                    string phrase = "Which song You wanna Listen To sir";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    gets(ch);
                    if(strcmp(ch,"no simply open spotify")==0)
                    {
                    cout<<"openining Spotify....."<<endl;
                    string phrase = "opening spotify";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start https://open.spotify.com/");
                    }

                    else{
                    cout<<"Okay Sir playing "<<ch<<" For You";
                    temp="Okay Sir playing " + (string)ch +" For You"; 
                    string phrase = temp;
                    string command = "espeak \"" + temp + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);    
                    string s1="start https://open.spotify.com/search/";
                    string res = s1 + space2mod(ch);
                    const char *comSong=res.c_str();
                    system(comSong);
                    }
                }

                else if(strcmp(ch, "open facebook") == 0){
                    cout<<"openining facebook....."<<endl;
                    string phrase = "opening facebook";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start https://www.facebook.com");
                }

                else if(strcmp("movie",ch)==0){
                    cout<<"Enter The Movie Name"<<endl;

                    string phrase = "Enter The Movie Name";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    gets(ch);
                    string s1="start https://www.divicast.com/search/";
                    string res=s1+ space2change(ch);
                    const char *comMov=res.c_str();
                    system(comMov);
                    
                    string phrase1 = "Enjoy your Movie Sir";
                    string command1 = "espeak \"" + phrase1 + "\"";
                    const char *charCommand1 = command1.c_str();
                    system(charCommand1);
                }

                else if(strcmp("song",ch)==0){
                    cout<<"Enter The Song Name"<<endl;
                    
                    string phrase = "Enter The Song Name";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    gets(ch);
                    strcat(ch," song");
                    string s1="start https://www.youtube.com/results?search_query=";
                    string res=s1 + space2add(ch);
                    const char *comSong=res.c_str();
                    system(comSong);
                }

                else if(strcmp("shut down",ch) == 0){
                    cout<<"Are You Sure You Wanna Shut Down your pc Press 1 for it Otherwise 0?"<<endl;
                    string speak="Are You Sure You Wanna Shut Down your pc. Press one for it Otherwise press zero?";
                    string command1 = "espeak \"" + speak + "\"";
                    const char *charCommand1 = command1.c_str();
                    system(charCommand1);
                    int ch;
                    cin>>ch;
                    if(ch==1)
                    {
                    cout<<"Shutting Down in 30sec See You Soon....."<<endl;
                    string phrase = "Shutting Down in Thirty seconds See You Soon";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("shutdown /s");
                    }
                }
                
                else if(strcmp("restart",ch) == 0){
                    cout<<"Restarting Your Lovely Pc Wait For Me....."<<endl;
                    string phrase = "Restarting Your Lovely Pc Wait For Me";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("shutdown /r");
                }

                else if(strcmp("play my favorite song",ch)==0)
                {   // this is done in my system becoz it is present inside the same folder where the code and eSpeak is.
                    cout<<"Okay sir PLaying Pasoori for You";
                    string phrase ="Okay sir Paying Paasoori for You...";
                    string command =  "espeak \"" + phrase + "\"";
                     const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start pasoorii.mp3");
                }

                else if(strcmp(ch, "open calculator") == 0)
                {
                    cout<<"Opening Calculator....."<<endl;
                    string phrase = "Opening Calculator";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start calc");
                }

                else if(strcmp("open file",ch)==0)
                {
                    cout<<"\nEnter The File Name which you want to open"<<endl;
                    string phrase = "Enter The File Name which you want to open";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    gets(ch);
                    temp="start "+(string)ch;
                    system(temp.c_str());
                }
                
                else if(strcmp("close chrome browser",ch)==0)               
                {
                    cout<<"Closing Chrome browser...."<<endl;
                    string phrase = "closing chrome browser";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("TASKKILL /IM chrome.exe");
                }

                else if(strcmp("close brave browser",ch)==0)
                {
                    cout<<"Closing Brave browser..."<<endl;
                    string phrase = "closing Brave browser";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("TASKKILL /IM brave.exe");
                }
                else{
                    cout<<"Sorry could not understand your query please ty again !!!"<<endl;
                    string phrase = "Sorry could not understand your query please ty again";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }

            }while(1);
        }

        else
                {
                    system("cls");
                    cout << "\t\t\t<============================= W E L C O M E==================================>" << endl;
                    cout << "\t\t\t<========================= I'M VIRTUAL ASSISTANT =============================>" << endl;
                    cout << "\t\t\t<=========================== MY NAME IS INERTIA ==============================>" << endl;
                    cout << "\t\t\t<============= I'M HERE TO HELP YOU AND MAKE YOUR LIFE EASY ==================>" << endl
                         << endl;
                    system("color c");
                    cout << "======================" << endl;
                    cout << "X Incorrect Password X" << endl;
                    cout << "======================" << endl << endl;
                    string phrase = "Incorrect Password, Please enter correct password";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }
    } while (1);

    return 0;
}