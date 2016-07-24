#pragma once

#include <memory>
#include "VLCMovie.h"

class ofxVLCVideoPlayer
{
    std::tr1::shared_ptr<VLCMovie> vlcMovieInstance;
    ofTexture dummyTexture;
	ofImage dummyImage;
public:
    ofxVLCVideoPlayer(void);
    ~ofxVLCVideoPlayer(void);
    bool loadMovie(string name, string directSoundAudioGuid = "");
    void closeMovie();
    void update();
	bool isFrameNew();
    ofTexture &getTextureReference();
    ofPixels &getPixelsRef();
	ofImage &getThumbnailImage();
    void draw(float x, float y, float w, float h);
    void draw(float x, float y);
    void play();
    void pause();
    void stop();
    bool getIsMovieDone();
    void setPosition(float pct);
    void setLoopState(ofLoopType state);
    float getHeight();
    float getWidth();
    bool isPlaying();
	bool isLoaded();
	float getPosition();
	int getTimeMillis();
	void setTimeMillis(int ms);
    float getFPS();
    float getDuration();
    void setFrame(int frame);
	void firstFrame();
	void nextFrame();
    int getCurrentFrame();
    int getTotalNumFrames();
    void setVolume(int volume);
    void toggleMute();
	bool isTextureValid() { return vlcMovieInstance->hasData(); }
};

