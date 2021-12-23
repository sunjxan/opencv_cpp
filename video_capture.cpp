#include <string>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

using namespace std;

int main()
{
    string windowNamePrefix = "Video Capture";
    cv::VideoCapture cap;
    cap.open(0);
    cv::Mat frame;
    while (true) {
        cap >> frame;
        if (frame.empty()) {
            break;
        }
        cv::imshow(windowNamePrefix + "", frame);
        if (cv::waitKey(33) >= 0) {
            break;
        }
    }
    return 0;
}
