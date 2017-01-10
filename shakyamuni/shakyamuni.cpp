//
// Created by leonardo on 1/7/17.
//

#include "shakyamuni.h"
#include <shakyamuni/Helpers/Utils.h>
#include <shakyamuni/FrameProcessFactory.h>

namespace skmn{
    shakyamuni::shakyamuni():process(FrameProcessFactory::create(GREY_PROCESS_MODE_8,GRAY_LEVEL_MODE_8)) {
    }

    shakyamuni::shakyamuni(PreProcessMode ppMode, CharacterMode cMode):process(FrameProcessFactory::create(ppMode,cMode)) {
    }

    void shakyamuni::playImage(const std::string & imageFileName, const int width) {
        Image input;
        Utils::loadimage(imageFileName, input);
        process.setImage(input);
        process.setOutputWidth(width);
        auto out = process.process();
        for (auto row:out) {
            std::cout << row << std::endl;
        }
    }

    void shakyamuni::playImage(const char *imageFileStr, const int width) {
        const std::string imageFileName(imageFileStr);
        this->playImage(imageFileName,width);
    }

    void shakyamuni::playImage(const std::string &imageFileStr, const PreProcessMode ppMode, const CharacterMode cMode, const int width) {
        this->process = FrameProcessFactory::create(ppMode,cMode);
        shakyamuni::playImage(imageFileStr,width);
    }

    void shakyamuni::playImage(const char *imageFileStr, const PreProcessMode ppMode, const CharacterMode cMode, const int width) {
        const std::string imageFileName(imageFileStr);
        this->process = FrameProcessFactory::create(ppMode,cMode);
        shakyamuni::playImage(imageFileStr,width);
    }

    void shakyamuni::playVideo(const std::string &videoFileName) {
        //read video
        Video video;
        Utils::loadVideo(videoFileName,video);

    }

    void shakyamuni::playVideo(const char *videoFileStr) {
        Video video;
        Utils::loadVideo(videoFileStr,video);
        for(;;)
        {
            Image frame;
            video >> frame; 
            cv::imshow(videoFileStr, frame);
            if(cv::waitKey(30) == 27) break;
        }
    }


}
