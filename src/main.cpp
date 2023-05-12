#include <opencv2/opencv.hpp>
#include <fstream>
#include <iostream>
using namespace std;
using namespace cv;

string pixelToASCII(int pixel_intensity) {
  const string ASCII_CHARS = "   ._-=+*!&#%$@";
  string s =
      string(1, ASCII_CHARS[pixel_intensity * ASCII_CHARS.length() / 256]);
  return s;
}

int main() {
  ofstream os;
  os.open("C:/prog/opencv/ascii_image/examples/img3.txt"); //your txt file
  string img_path = "C:/prog/opencv/ascii_image/examples/img3.jpg"; //your image
  Mat img = imread(img_path, 1);

  int width = 250;
  int height = 50;
  Size s = img.size();
  int frame_width = s.width;
  int frame_height = s.height;
  cout << frame_width << " " << frame_height << endl;


  height = (width * frame_height / frame_width) * 0.4194;

  Mat gray_frame, resized_frame;
    if (img.empty())
      cout << "Load Failed" << endl;
    cv::cvtColor(img, gray_frame, cv::COLOR_BGR2GRAY);

    resize(gray_frame, resized_frame, Size(width, height), 0, 0, INTER_LINEAR);

    string ascii_frame;
    for (int i = 0; i < height; i++) {
      for (int j = 0; j < width; j++) {
        ascii_frame += pixelToASCII(resized_frame.at<uchar>(i, j));
      }
      ascii_frame += "\n";
    }
  os << ascii_frame;
  os.close();

  return 0;
}