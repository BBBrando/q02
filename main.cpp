#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
  vector <vector <string> > wordGrid;


  /*
     do not edit this space

     where this comment is, the instructor will
     add the code that gets the user's input and
     inserts the input into every element of the
     matrix wordGrid
  */

  //PUT YOUR CODE BELOW THIS LINE
  //that prints each element of the matrix in the
  //following format:
  //Row _ Column _ is _
  //the first and second blanks should be replaced with the coordinates
  //of the element's row and column and the third blank should be replaced
  //with the value of that



  if(wordGrid.size() > 0 && wordGrid[0].size() > 0)
    {
        for(int a = 0; a < wordGrid.size() ;a++)

        {
            for(int b = 0; b < wordGrid[a].size() ;b++)

            {
              cout<<"Row "<<a<<" Column "<<b<<" is "<< wordGrid[a][b]<<endl;


                }
            }
        }



 return 0;
}
