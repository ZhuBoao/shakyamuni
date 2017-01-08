//
// Created by kakarotto on 1/3/17.
//



#ifndef SHAKYAMUNI_CONTROLLER_H
#define SHAKYAMUNI_CONTROLLER_H

#include <shakyamuni/PreProcess/PreProcess.h>
#include <shakyamuni/CharacterRepresent/CharacterRepresent.h>

namespace skmn {
    class Controller {
    private:
        Image input;
        Image processed;
        ImgSize outputSize;
        Video input_video;
        Video processed_video;
        PreProcess *preProcessPtr;
        CharacterRepresent *characterRepresent;
        std::string videoFileName;
        std::string imageFIleName;

        void playImage(const int &width);

        void playVideo();

    public:
        void runImage(const char[], const int &width = 120);

        void runImage(const std::string &, const int &width = 120);

        void runVideo(const char[]);

        void runVideo(const std::string &);

        void setVideoFileName(const std::string &videoFileName);

        void setImageFIleName(const std::string &imageFIleName);

        void setVideoFileName(const char *videoFileName);

        void setImageFIleName(const char *imageFIleName);

        void setPreProcessPtr(PreProcess *preProcessPtr);

        void setCharacterRepresent(CharacterRepresent *characterRepresent);
    };
}

#endif //SHAKYAMUNI_CONTROLLER_H
