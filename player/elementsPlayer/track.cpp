#include <iostream>
#include <string>

using namespace std;

class Track{
    /*A track with a different attributres: year release, album, artist name.

    The responsibility of Track is to contain the basic information of a song.

    Attributes:
        title (string): The name of the song.
        year_release (int): The year the song was released.
        album (string): The name of the album where the song is.
        artist_name (string): The interpreter of the song.
    */

    private:
        string title_song;
        int year_release;
        string album_song;
        string artist_name;
        string file_path;

    public:
        //constructor that initializes the attributes
        Track(string title, int year, string album, string artist, string path){
            title_song = title;
            year_release = year;
            album_song = album;
            artist_name = artist;
            file_path = path;
        }

        friend ostream& operator<<(ostream& os, const Track& track) {
            os << "Title: " << track.title_song << endl;  
            return os;
        }

    //Methods
    void showTrackInfo() const{
        // method to show information of the song
        cout << "\nPlaying " << title_song << ", " << year_release << ", " << album_song << ", " << artist_name << endl;

    }

    //Method to get the path
    string getFilePath() const{
        return file_path;
    }

};
