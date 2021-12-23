#include <cstdio>
#include <string>
#include <opencv2/highgui/highgui.hpp>

using namespace std;

int main()
{
    string filePath = "../../opencv/samples/data/lena.jpg";
    string windowName = "lena.jpg";
    
    cv::Mat img = cv::imread(filePath, cv::IMREAD_UNCHANGED);
    if (img.empty()) {
        return -1;
    }
    
    int w = img.cols, h = img.rows, d = img.channels();
    printf("width=%d, height=%d, depth=%d\n", w, h, d);
    
    cv::namedWindow(windowName, cv::WINDOW_AUTOSIZE);
    cv::imshow(windowName, img);
    cv::waitKey();
    cv::destroyWindow(windowName);
    
    return 0;
}
