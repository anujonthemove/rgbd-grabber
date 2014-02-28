/**
 * @file DepthCamera.cpp
 * @author Yutaka Kondo <yutaka.kondo@youtalk.jp>
 * @date Jul 9, 2013
 */
#include "DepthCamera.h"

namespace rgbd {

DepthCamera::DepthCamera() {
}

DepthCamera::~DepthCamera() {
}

cv::Size DepthCamera::depthSize() const {
    throw new UnsupportedException("depthSize");
}

cv::Size DepthCamera::colorSize() const {
    throw new UnsupportedException("colorSize");
}

void DepthCamera::captureDepth(cv::Mat& buffer) {
    throw new UnsupportedException("captureDepth");
}

void DepthCamera::captureAmplitude(cv::Mat& buffer) {
    throw new UnsupportedException("captureAmplitude");
}

void DepthCamera::captureColor(cv::Mat& buffer) {
    throw new UnsupportedException("captureColor");
}

void DepthCamera::captureVertex(PointXYZRGBVector& buffer) {
    throw new UnsupportedException("captureVertex");
}

void DepthCamera::captureAudio(std::vector<uchar>& buffer) {
    throw new UnsupportedException("captureAudio");
}

void DepthCamera::captureAcceleration(cv::Point3f& acc) {
    throw new UnsupportedException("captureAcceleration");
}

}