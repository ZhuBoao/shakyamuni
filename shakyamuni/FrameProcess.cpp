//
// Created by kakarotto on 1/8/17.
//

#include "FrameProcess.h"

namespace skmn {

    FrameProcess::FrameProcess(PreProcess &preProcess, CharacterRepresent &characterRepresent) {
        this->preProcess = &preProcess;
        this->characterRepresent = &characterRepresent;
    }

    void FrameProcess::setImage(Image &image) {
        this->input = image;
    }

    void FrameProcess::setOutputWidth(const int &width) {
        int height = (int) std::fabs((double) (this->input.size().height) / this->input.size().width * width);
        this->outputSize = cv::Size(width % 2 ? width + 1 : width, height % 2 ? height + 1 : height);
    }

    std::vector<std::string> FrameProcess::process() {
        this->preProcess->process(this->input, this->processed, this->outputSize);
        this->characterRepresent->setIntensities(this->processed);
        return this->characterRepresent->represent();
    }
}