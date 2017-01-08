//
// Created by leonardo on 1/7/17.
//

#include "shakyamuni.h"
#include <shakyamuni/Helpers/Utils.h>

namespace skmn{
    shakyamuni::shakyamuni() {
        static GrayLevelCharacterRepresent cp = GrayLevelCharacterRepresent(GRAY_LEVEL_8);
        static SimpleGreyPreProcess pp = SimpleGreyPreProcess(GRAY_LEVEL_8);
        this->preProcess = &pp;
        this->characterRepresent = &cp;
    }

    void shakyamuni::playImage(const std::string & imageFileName, const int width) {
        Image input,processed;
        Utils::loadimage(imageFileName, input);
        int height = (int) std::fabs((double) (input.size().height) / input.size().width * width);
        ImgSize outputSize = cv::Size(width % 2 ? width + 1 : width, height % 2 ? height + 1 : height);

        this->preProcess->process(input, processed, outputSize);
        this->characterRepresent->setIntensities(processed);
        auto out = this->characterRepresent->represent();
        for (auto row:out) {
            std::cout << row << std::endl;
        }
    }

    void shakyamuni::playImage(const char *imageFileStr, const int width) {
        const std::string imageFileName(imageFileStr);
        this->playImage(imageFileName);
    }


}
