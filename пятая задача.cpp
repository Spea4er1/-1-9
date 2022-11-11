#include <fstream>
#include <string>
 
 
int main()
{
  char **tablo = NULL;
  int temp = 0;
  bool superBreak = false; 
  size_t rows = 0;
  size_t columns = 0;
  std::ifstream fin("input.txt");
  std::ofstream fout("output.txt");
 
  fin >> rows >> columns; 
  tablo = new char*[ rows ]; 
  for ( size_t i = 0; i < rows; ++i )
  {
     tablo[i] = new char[ columns ];
  } 
  
  std::string curLine; 
  std::getline(fin, curLine ); 
  for (size_t  i = 0; i < rows; ++i ) 
  {
      std::getline( fin, curLine );
      for (size_t j = 0; j < columns; ++j )
      {
         tablo[i][j] = curLine[j];
      }
  }
/* если это раскоментировать, то будет произведен вывод только отладочной информации и выход */
/*  for (size_t  i = 0; i < rows; ++i )
  {
      for ( size_t j = 0; j < columns; ++j )
      {
         fout << tablo[i][j];
      }
      fout << std::endl;
  }
  return 0;*/
 
  for (size_t i = 0; i < rows && !superBreak; ++i )
  {
      for ( size_t j = 0; j < columns && !superBreak; ++j )
      {
         fin >> temp;
         switch( tablo[i][j] )
         {
            case '.':
               break;
            case 'R':
               if ( temp < 4 )
               {
                  superBreak = true;
               }
               break;
            case 'G':
               if ( !( temp == 2  temp == 3  temp == 6 || temp == 7 ) )
               {
                  superBreak = true;
               }
               break;
            case 'B':
               if ( temp % 2 == 0 )
               {
                  superBreak = true;
               }
               break;
            default:
//               throw (-1); 
                             
               break;
         }
      }
  }
 
  if ( !superBreak ) 
     fout << "YES";
  else               
     fout << "NO";
 
  fout.close();
  fin.close();
 
  return 0;
}