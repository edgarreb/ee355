void flip(unsigned char src[][SIZE][3], unsigned char dest[][SIZE][3])
{
	for (int i=0; i<SIZE; i++) 
	{
		for (int j=0; j<SIZE; j++) 
		{
			for(int k = 0; k < 3; k++)
    		{
     			dest[i][j][k] = src[j][i][k];
  			}
  		}
	}
	
}