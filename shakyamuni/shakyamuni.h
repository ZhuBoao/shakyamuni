//
// Created by leonardo on 1/7/17.
//

#ifndef SHAKYAMUNI_SHAKYAMUNI_H
#define SHAKYAMUNI_SHAKYAMUNI_H

#include <shakyamuni/Types/types.h>
#include <string>
namespace skmn
{
    class shakyamuni {
    public:
        shakyamuni();
        shakyamuni(PreProcessMode,CharacterMode);

        void playImage(const std::string&);
        void playImage(const std::string&, DefinedMode);
        void playImage(const std::string&, PreProcessMode,CharacterMode);

        void playImage(const char[]);
        void playImage(const char[], DefinedMode);
        void playImage(const char[], PreProcessMode,CharacterMode);

        void playVideo(const std::string&);
        void playVideo(const std::string&, DefinedMode);
        void playVideo(const char[]);
        void playVideo(const char[], DefinedMode);


    };
}
#endif //SHAKYAMUNI_SHAKYAMUNI_H
