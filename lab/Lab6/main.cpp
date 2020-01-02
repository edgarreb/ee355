
#include <iostream>
#include <cstdlib>
#include <dirent.h>
#include <vector>
#include "bmplib.h"

/* CHANGE FILE PATH */
#define PATH_IN "/Users/edgar/Desktop/"
#define PATH_OUT "/Users/edgar/Desktop/ee355/lab/Lab6/"

using namespace std;

void showMainMenu()
{
	cout << "0: Exit" << endl;
	cout << "1: Flip 90" << endl;
	cout << "2: Flip 180" << endl;
	cout << "3: Mirror" << endl;
	cout << "4: Grey Scaling" << endl;
	cout << "5: Color Inversion" << endl;
	cout << "6: Zoom" << endl;
	//cout << "7: Files" << endl;
}

void flip_90(unsigned char src[][SIZE][3], unsigned char dest[][SIZE][3])
{

	for (int i=0; i < SIZE; i++) 
	{
		for (int j=0; j < SIZE; j++) 
		{
			for(int k = 0; k < 3; k++)
    		{
     			dest[j][SIZE - i - 1][k] = src[i][j][k];
  			}
  		}
	}
}

void mirror(unsigned char src[][SIZE][3], unsigned char dest[][SIZE][3])
{
    for (int i=0; i < SIZE/2; i++) 
    {
       	for (int j=0; j < SIZE; j++) 
       	{
            for(int k=0; k < 3; k++)
            {
            	dest[i][j][k] = src[i][j][k];
            	dest[SIZE-i][j][k] = src[i][j][k];
            }
        }
    }
}

void grey(unsigned char src[][SIZE][3], unsigned char dest[][SIZE])
{
	
	unsigned char r, g, b;

	for (int i=0; i<SIZE; i++) 
	{
    	for (int j=0; j<SIZE; j++) 
    	{
        	
        	for(int k =0; k < 3; k++)
        	{
        		if(k == 0)
        		{	
        			r = src[i][j][k];
        		}
        		else if(k == 1)
        		{
        			g = src[i][j][k];
        		}
        		else
        		{
        			b = src[i][j][k];
        		}
        	}

        	dest[i][j] = .299*r + .587*g + .114*b;

    	}
	}
}

void inversion(unsigned char src[][SIZE][3], unsigned char dest[][SIZE][3])
{
	unsigned char r, g, b;

	for (int i=0; i<SIZE; i++) 
	{
    	for (int j=0; j<SIZE; j++) 
    	{
        	
        	for(int k =0; k < 3; k++)
        	{
        		
        		src[i][j][k] = 255 - src[i][j][k];
        		dest[i][j][k] = src[i][j][k];
        		
        	}
    	}
	}
}

void zoom(unsigned char src[][SIZE][3], unsigned char dest[][SIZE][3])
{
	for(int i=0; i < SIZE; i++)
	{
    	for(int j=0; j < SIZE; j++)
    	{
      		for(int k=0; k < 3; k++)
      		{
      			dest[i][j][k] = src[SIZE/4 + i/2][SIZE/4 + j/2][k];
    		}
    	}
  	}
}

int main()
{

	// images[] will hold the filenames of all the .bmp files in the directory
	vector <string> images;

	// reading files from current directory and storing them
	DIR* dir;
	struct dirent* ent;
  
    string temp;
	
	if ((dir = opendir (PATH_IN)) != NULL)
	{
		while ((ent = readdir (dir)) != NULL) 
		{	
          	temp = ent->d_name;
			
			if(temp.length() >= 4)
			{
				if(temp.substr(temp.length() - 4) == ".bmp")
				{
					images.push_back(ent->d_name);
				}	
			}
      	}
      
		closedir (dir);
	}

	int option;

	while(1)
	{
		cout << "\033[2J\033[1;1H";
		showMainMenu();
		cout <<"Select an option: ";
		cin >> option;
		
		switch(option)
		{
			case 0:
				cout << "EXIT" << endl;
				return 0;

			case 1:
				//cout << "Flip 90" << endl;
				for(int i = 0; i < images.size(); i++)
				{
					unsigned char src[SIZE][SIZE][3];
					unsigned char dest[SIZE][SIZE][3];
					readRGBBMP((PATH_IN + images[i]).c_str(), src);
					flip_90(src, dest);
					string flip_90_image = "flip90_" + images[i];
					writeRGBBMP((PATH_OUT + flip_90_image).c_str(), dest);
				}
				break;

			case 2:
				//cout << "Flip 180" << endl;
				for(int i = 0; i < images.size(); i++)
				{
					unsigned char src[SIZE][SIZE][3];
					unsigned char dest[SIZE][SIZE][3];
					unsigned char dest2[SIZE][SIZE][3];
					readRGBBMP((PATH_IN + images[i]).c_str(), src);
					flip_90(src, dest);
					flip_90(dest, dest2);
					string flip_180_image = "flip180_" + images[i];
					writeRGBBMP((PATH_OUT + flip_180_image).c_str(), dest2);
				}
				break;

			case 3:
				cout << "Mirror" << endl;
				for(int i = 0; i < images.size(); i++)
				{
					unsigned char src[SIZE][SIZE][3];
					unsigned char dest[SIZE][SIZE][3];
					readRGBBMP((PATH_IN + images[i]).c_str(), src);
					mirror(src, dest);
					string mirror_image = "mirror_" + images[i];
					writeRGBBMP((PATH_OUT + mirror_image).c_str(), dest);
				}
				break;

			case 4:
				cout << "Grey Scaling" << endl;
				for(int i = 0; i < images.size(); i++)
				{
					unsigned char src[SIZE][SIZE][3];
					unsigned char dest[SIZE][SIZE];
					readRGBBMP((PATH_IN + images[i]).c_str(), src);
					grey(src, dest);
					string grey_image = "grey_" + images[i];
					writeGSBMP((PATH_OUT + grey_image).c_str(), dest);
				}
				break;

			case 5:
				cout << "Color Inversion" << endl;
				for(int i = 0; i < images.size(); i++)
				{
					unsigned char src[SIZE][SIZE][3];
					unsigned char dest[SIZE][SIZE][3];
					readRGBBMP((PATH_IN + images[i]).c_str(), src);
					inversion(src, dest);
					string inversion_image = "inversion_" + images[i];
					writeRGBBMP((PATH_OUT + inversion_image).c_str(), dest);
				}
				break;

			case 6:
				cout << "Zoom" << endl;
				for(int i = 0; i < images.size(); i++)
				{
					unsigned char src[SIZE][SIZE][3];
					unsigned char dest[SIZE][SIZE][3];
					readRGBBMP((PATH_IN + images[i]).c_str(), src);
					zoom(src, dest);
					string zoom_image = "zoom_" + images[i];
					writeRGBBMP((PATH_OUT + zoom_image).c_str(), dest);
				}
				break;

			/*
			case 7:
				cout << "Files in input directory: " << endl;
				for(int i = 0; i < images.size(); i++)
				{
					cout << images[i] << endl;
				}
				break;
			*/

			default:
				cout << "default" << endl;
		}

	}

	return 0;
}
