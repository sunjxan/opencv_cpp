#include <cstdio>
#include <string>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

using namespace std;

int main()
{
    string windowName = "Video Capture";
    bool flag = true;
    cv::VideoCapture cap;
    cap.open(0);
    cv::Mat frame;
    while (true) {
        cap >> frame;
        if (frame.empty()) {
            break;
        }
        if (flag) {
            flag = false;
            char str[100];
            sprintf(str, " (%d, %d)", frame.cols, frame.rows);
            windowName += string(str);
        }
        cv::imshow(windowName, frame);
        if (cv::waitKey(33) >= 0) {
            cv::destroyWindow(windowName);
            break;
        }
    }
    return 0;
}
