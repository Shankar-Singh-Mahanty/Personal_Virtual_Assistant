# Personal_Virtual_Assistant
* This is a personal virtual assistant named inertia works on text-to-speech basis. Its maximum features works properly in offline mode.
* For the speech feature, I have used eSpeak voice synthesizer.
* If you want to listen to the voice then first you have to download and install the eSpeak.exe file respectively according to your system.
* ( https://espeak.sourceforge.net/download.html. )
* After the proper installation of the voice synthesizer, you again need to place the eSpeak.exe application file in the same directory where the code exists.
(= copy it)



What I had did Inside the code
-> that is if anyone wants to contribute or add some more features then he/she must follow the below instructions.


* To listen to the speech, these 4 lines must be included in the code:
string phrase = "whatever message you want to listen to";
string command = "espeak \"" + phrase + "\"";
const char *charCommand = command.c_str();
system(charCommand);


* To open any file format in the system, we need to put the file path between the double quotes, as shown below:
ShellExecute(NULL, "open", "file path", NULL, NULL, SW_NORMAL);
Note: in file path, please put two \ wherever there is one \


* To open .exe files such as ms-word, paint, excel, notepad etc. the following command is used.
CreateProcess(TEXT("file path"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startInfo, &processInfo);
Note: in file path, please put two \ wherever there is one \


 We can add as many files and executable files as we want to make the virtual assistant more user friendly and perform various tasks.
 I had did some of them.


THANK YOU!
