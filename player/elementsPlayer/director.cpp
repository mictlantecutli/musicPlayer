#include <iostream>
#include "track.cpp"
#include "invokeSong.cpp"
#include <vector>

using namespace std;


class Director{
    //The responsibility of a Director is to control the sequence of the music player.

    private:
        bool isPlaying; //this is useful to check if the music player is ON or OFF
        int option; 
        vector<Track> playlist; //This save  the songs with its info
        int trackSelected; //this track the number of song selected
        char response; //This save y or n (yes or not). Help to come back to main menu or continue
        InvokeSong player; //an instance of InvokeSong class
    
    public:
        Director(){
            isPlaying = true;
            option = -1;
            trackSelected = -1;
        }
        // void startPlayer();
        // void showMenu();
        // void getOption();
        // void validateOption();


    //Methods
    void startMusicPlayer(){
        while (isPlaying){
        
            cout << "\n***Music Player is ON****" << endl;
            showMenu();
            getOption();   
        }

        cout << "\n***Music Player is OFF***" << endl;

    }

    void showMenu(){
        cout << "======= Music Player Menu =====" << endl;
        cout << "1. Play List" << endl;
        cout << "2. Stop Song" << endl;
        cout << "4. Add Song" << endl;
        cout << "0. Exit" << endl;
        
        
    }

    /*This method is used in the startMusicPlayer method to ask the user to 
    pick an menu option*/
    void getOption(){
        cout << "Choose an option: ";
        cin >> option;
        cin.ignore(); 
        validateOption();    
    }

    /*This method is used in the displayPlayList method to add 
    songs to the vector*/
    void addSong(){
        string title; 
        int year;
        string album; 
        string artist; 
        string path;
        
        //ask the user for the song details
        cout << "\n****Fill your song info*****" << endl;
        cout << "Song title: ";
        getline(cin, title); //cin means "console input"
        cout << "Year Song: ";
        cin >> year; 
        cin.ignore(); // this leave a break line so I need to ignore it
        cout << "Song Album: ";
        getline(cin, album);
        cout << "Song Artist: ";
        getline(cin, artist);
        cout << "Song Path: ";
        getline(cin, path);

        //Add a Track instance to the playlist vector
        Track newTrack(title, year, album, artist, path);
        playlist.push_back(newTrack); //add a song at the end of the vector

        //the commented following code is only for testing
        // cout << playlist.size() << endl;
        cout << "\n🎵" << title << " Song is added!" << endl;
        cout << "You can check the playlist with option '1'" << endl;

    }



    /*This method is used in the validateOption(cases), is used when the user
    pick option 1 (playlist)*/
    void displayPlayList(){

        if (playlist.empty()){
            cout << "\n⚠️ The playlist is empty. Add song. Click on number 4" << endl;
        }else{
            //display the elements in the vector
            cout << "\n****This is your playlist****" << endl;
            for (size_t i = 0; i < playlist.size(); ++i) {
                cout << i + 1 << ". " << playlist[i];  
            }

            /*This code return the user to the main menu or continue
            playing any song*/
            cout << "\nContinue playing?(y/n): ";
            cin >> response;

            if (response == 'y'){
                cout << "Choose a song number to play: ";
                cin >> trackSelected;
                cin.ignore();
                if(trackSelected > 0 && trackSelected<=(int)playlist.size()){
                    player.playMusic(playlist[trackSelected-1]);

                }


            }else if(response == 'n'){
                cout << endl;

            }
           
        }
    }


    /*This method handle the cases when the user choose an option...
    in the menu*/
    void validateOption(){
        switch (option){
            case 0:
                isPlaying = false;
                break;
            case 1:
                displayPlayList();
                break;
            case 2:
                player.stopMusic();
                break;
            case 4:
                addSong();
                break;

        }

    }

    
};





   