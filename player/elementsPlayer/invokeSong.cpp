#include <iostream>
#include <cstdlib>
#include <unistd.h> //This is the standard Unix header(This interact with the system)
// #include "track.cpp"
using namespace std;

class InvokeSong {
private:
    int pid;
   
public:
    InvokeSong(){
        pid=-1;

    }  

    void playMusic(const Track& track) {
 
        string filePath = track.getFilePath();

        //creating a new process (child process) to keep the main program working
        pid = fork();  

        if (pid == 0) { 
          
            execlp("afplay", "afplay", filePath.c_str(), NULL); //execlp(const char *file, const char *arg0, ..., (char *)0);
            exit(0);
            //The parent process
        } else if (pid > 0) { 
            //rendering track info 
            track.showTrackInfo();
        } else {
            std::cerr << "Occur something wrong.\n";
        }
    }


    void stopMusic() {
        if (pid > 0) {
            system(("kill -9 " + to_string(pid)).c_str());
            pid = -1;
        }
    }
};