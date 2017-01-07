//
// Created by kakarotto on 1/3/17.
//



#ifndef SHAKYAMUNI_CONTROLLER_H
#define SHAKYAMUNI_CONTROLLER_H

#include <shakyamuni/PreProcess/PreProcess.h>
#include <shakyamuni/FeatureExtract/FeatureExtract.h>
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
        FeatureExtract *featureExtract;
        CharacterRepresent *characterRepresent;
        std::string videoFileName;
        std::string imageFIleName;

        void playImage();
        void playVideo();

    public:
        void test();

        void runImage(const char[]);
        void runImage(const std::string&);

        void runVideo(const char[]);
        void runVideo(const std::string&);

        void setVideoFileName(const std::string &videoFileName);

        void setImageFIleName(const std::string &imageFIleName);

        void setVideoFileName(const char *videoFileName);

        void setImageFIleName(const char *imageFIleName);

        void setPreProcessPtr(PreProcess *preProcessPtr);

        void setFeatureExtract(FeatureExtract *featureExtract);

        void setCharacterRepresent(CharacterRepresent *characterRepresent);
    };
}

#endif //SHAKYAMUNI_CONTROLLER_H
