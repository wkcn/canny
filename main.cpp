//
//  main.cpp
//  Canny Edge Detector
//
//  Created by Hasan Akgün on 21/03/14.
//  Copyright (c) 2014 Hasan Akgün. All rights reserved.
//

#include <iostream>
#include <string>
#define _USE_MATH_DEFINES
#include <cmath>
#include <vector>
#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "canny.h"
#include "cannycimg.h"

using namespace cv;
using namespace std;

int main(int argc, char *argv[])
{
	if (argc >= 2){
		string filePath = argv[1]; 
		canny_cimg cny(filePath);
	}else{
		cout << "Please add argument when running" << endl;
	}
        
    return 0;
}

