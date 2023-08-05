#ifndef TRACE_RACE_MUSICPLAYER_H
#define TRACE_RACE_MUSICPLAYER_H
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include "iostream"
using namespace std;
using namespace sf;

class MusicPlayer {
    sf::Music backgroundMusic;
    bool isMuted;

public:
    MusicPlayer(): isMuted(false){
        backgroundMusic.openFromFile("files/music/Comfort.ogg");
        backgroundMusic.setLoop(true);
        backgroundMusic.play();
        backgroundMusic.setVolume(20);
    }
    void toggleMute(){
        // unmute
        if (isMuted) {
            backgroundMusic.setVolume(20);
            isMuted = false;
        }
        // mute
        else {
            backgroundMusic.setVolume(0);
            isMuted = true;
        }
    }

};


#endif //TRACE_RACE_MUSICPLAYER_H
