//
// Created by leonardo on 1/7/17.
//

#ifndef SHAKYAMUNI_SHAKYAMUNI_H
#define SHAKYAMUNI_SHAKYAMUNI_H

#include <shakyamuni/Types/types.h>
#include <shakyamuni/FrameProcess.h>
#include <string>
namespace skmn
{
    class shakyamuni {
    public:
        shakyamuni();
        shakyamuni(PreProcessMode,CharacterMode);

        void playImage(const std::string&, const int width = 100);
//        void playImage(const std::string&, const DefinedMode, const int width = 100);
        void playImage(const std::string&, const PreProcessMode,const CharacterMode, const int width = 100);

        void playImage(const char[], const int width = 100);
//        void playImage(const char[], const DefinedMode, const int width = 100);
        void playImage(const char[], const PreProcessMode,const CharacterMode, const int width = 100);

        void playVideo(const std::string&);
        void playVideo(const std::string&, const DefinedMode);
        void playVideo(const char[]);
        void playVideo(const char[], const DefinedMode);

    private:
        FrameProcess process;
    };
}
#endif //SHAKYAMUNI_SHAKYAMUNI_H
