#include <string>
#include <opencv2/highgui/highgui.hpp>

using namespace std;

int main()
{
    string filePath = "../../opencv/samples/data/lena.jpg";
    string windowName = "lena.jpg";
    cv::Mat img = cv::imread(filePath, -1);
    if (img.empty()) {
        return -1;
    }
    cv::namedWindow(windowName, cv::WINDOW_AUTOSIZE);
    cv::imshow(windowName, img);
    cv::waitKey();
    cv::destroyWindow(windowName);
    return 0;
}
