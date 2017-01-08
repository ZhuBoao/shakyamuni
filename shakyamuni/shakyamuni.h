//
// Created by leonardo on 1/7/17.
//

#ifndef SHAKYAMUNI_SHAKYAMUNI_H
#define SHAKYAMUNI_SHAKYAMUNI_H

#include <shakyamuni/Types/types.h>
#include <shakyamuni/PreProcess/PreProcess.h>
#include <shakyamuni/CharacterRepresent/CharacterRepresent.h>
#include <shakyamuni/PreProcess/SimpleOutlinePreProcess.h>
#include <shakyamuni/CharacterRepresent/SingleCharacterRepresent.h>
#include <shakyamuni/CharacterRepresent/ComplexCharacterRepresent.h>
#include <shakyamuni/CharacterRepresent/GrayLevelCharacterRepresent.h>
#include <shakyamuni/PreProcess/FaceDetectBasePreProcess.h>
#include <shakyamuni/PreProcess/SimpleGreyPreProcess.h>
#include <string>
namespace skmn
{
    class shakyamuni {
    public:
        shakyamuni();
        shakyamuni(PreProcessMode,CharacterMode);

        void playImage(const std::string&, const int width = 100);
        void playImage(const std::string&, const DefinedMode, const int width = 100);
        void playImage(const std::string&, const PreProcessMode,const CharacterMode, const int width = 100);

        void playImage(const char[], const int width = 100);
        void playImage(const char[], const DefinedMode, const int width = 100);
        void playImage(const char[], const PreProcessMode,const CharacterMode, const int width = 100);

        void playVideo(const std::string&);
        void playVideo(const std::string&, const DefinedMode);
        void playVideo(const char[]);
        void playVideo(const char[], const DefinedMode);

    private:
        PreProcess* preProcess;
        CharacterRepresent* characterRepresent;
    };
}
#endif //SHAKYAMUNI_SHAKYAMUNI_H
