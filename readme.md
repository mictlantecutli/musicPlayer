# Overview

With this music player project, I aim to expand my knowledge of the C++ language.

In general, in this project, I apply the use of variables, conditionals, loops, logical expressions, functions that I used in classes, classes, and the use of the vector structure. I also played an MP3 file using the cstdlib and unistd.h libraries.

This project has a main menu, which is: 1. Play List, 2. Stop Song, 4. Add Song, 0. Exit.

Play List displays the list of songs in the music player; if there are no songs, it prompts the user to select option 4 (Add Song). If there are songs (or only one song), it asks the user if they want to play any songs. If so, it asks the song number in the playlist and plays the selected song, displaying the details of the song (title, artist, album) that is currently playing.

Add Song is for adding songs to the music player. It asks the user for the song title, album, artist, and file path.

Stop Music stops the music, and the user can continue by choosing an option from the main menu.

Finally, "Exit" closes the music player.

{Provide a link to your YouTube demonstration. It should be a 4-5 minute demo of the software running and a walkthrough of the code. Focus should be on sharing what you learned about the language syntax.}

[Software Demo Video](http://youtube.link.goes.here)

# Development Environment

To develop this software I used:
-Visual Studio Code. I used it to edit the code and see the architecture of the files.
-C++ language
-iostream library to print the text messages
-cstdlib library, to send signals to the system of stop the preocesses
-unistd.h library to start processes and be able to play music and the software at the same time.

# Useful Websites

- [Microsoft - comments topic](https://learn.microsoft.com/es-es/cpp/cpp/comments-cpp?view=msvc-170)
- [w3schools - about inputs in C++](https://www.w3schools.com/cpp/showcpp.asp?filename=demo_user_input2)
- [w3schools - basics C++](https://www.w3schools.com/cpp)
- [Unix & Linux - kill signals topic](https://unix.stackexchange.com/questions/377191/why-are-we-using-kill-9-always)
- [Cplusplus - ponters topic](https://cplusplus.com/doc/tutorial/pointers/)
- [Microsoft - cstdlib library](https://learn.microsoft.com/es-es/cpp/standard-library/cstdlib?view=msvc-170)
- [Unix - fork topic](https://pubs.opengroup.org/onlinepubs/7908799/xsh/fork.html)
- [Microsoft - operador '<<'](https://learn.microsoft.com/es-es/cpp/standard-library/overloading-the-output-operator-for-your-own-classes?view=msvc-170)
- [Medium - comments topic](https://medium.com/@vimalathasvithusan/demystifying-the-unistd-h-header-file-in-c-programming-9c57342e294d)

-- [AI](https://chatgpt.com/)


# Future Work

- Implement Next song, previous song, and pause song options
- I need to validate user input and display warning messages when it's not the expected input.
- Add colors to the fonts to distinguish different parts of the Music Player (headers, validation messages, menus)

