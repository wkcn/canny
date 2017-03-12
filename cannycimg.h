#ifndef _CANNY_CIMG_H_
#define _CANNY_CIMG_H_

#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <CImg.h>

using namespace std;
using namespace cimg_library;

typedef unsigned char uchar;
typedef CImg<uchar> uimg;

class canny_cimg{
public:
	canny_cimg(string);
private:
	uimg GetGrayScale(uimg&);
	vector<vector<double>> createFilter(int row, int col, double sigmaIn); //Creates a gaussian filter
	uimg useFilter(uimg &, vector<vector<double>> &); //Use some filter
    uimg sobel(); //Sobel filtering
    uimg nonMaxSupp(); //Non-maxima supp.
    uimg threshold(uimg &imgin, int low, int high); //Double threshold and finalize picture

private:
	uimg img;
	uimg grayscaled;
	uimg angles; // Angle Map
	uimg non; // Non-maxima supp
	uimg thres; // Double threshold and final	
	uimg gFiltered, sFiltered;
};

#endif
