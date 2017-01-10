//
// Created by kakarotto on 1/8/17.
//

#ifndef SHAKYAMUNI_FRAMEPROCESS_H
#define SHAKYAMUNI_FRAMEPROCESS_H

#include <shakyamuni/Types/types.h>
#include <shakyamuni/CharacterRepresent/CharacterRepresent.h>
#include <shakyamuni/PreProcess/PreProcess.h>

namespace skmn {
    class FrameProcess {
    private:
        Image input;
        Image processed;
        ImgSize outputSize;
        PreProcess *preProcess;
        CharacterRepresent *characterRepresent;
    public:
        FrameProcess() = default;

        FrameProcess(PreProcess &preProcess, CharacterRepresent &characterRepresent);

        ~FrameProcess();

        void setImage(Image &image);

        void setOutputWidth(const int &width);

        std::vector<std::string> process();
    };
}

#endif //SHAKYAMUNI_FRAMEPROCESS_H
