#include <opencv2/opencv.hpp>

int main() {
    cv::Mat frame; // Suponer que 'frame' es obtenido de una cámara
    cv::Mat gray, thresh;
    std::vector<std::vector<cv::Point>> contours;

    cv::cvtColor(frame, gray, cv::COLOR_BGR2GRAY);
    cv::threshold(gray, thresh, 127, 255, cv::THRESH_BINARY);
    cv::findContours(thresh, contours, cv::RETR_TREE, cv::CHAIN_APPROX_SIMPLE);

    for (auto &contour : contours) {
        if (cv::contourArea(contour) > 1000) {
            // Obstáculo detectado
            break;
        }
    }
    return 0;
}
