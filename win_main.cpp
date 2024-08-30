#include <algorithm>
#include <eigen3/Eigen/Core>
#include <iostream>
#include <numeric>
#include <opencv4/opencv2/opencv.hpp>
#include <vector>

int main() {
    cv::RNG rng(1);
    cv::Mat m(3, 3, CV_32F);
    rng.fill(m, cv::RNG::UNIFORM, 0, 1);
    std::cout << m << std::endl;
    return 0;
}
