#include <Input.h>


namespace nme
{

#if !defined(IPHONE) && !defined(WEBOS) && !defined(ANDROID) && !defined(BLACKBERRY) && !defined(TIZEN)
bool GetAcceleration(double &outX, double &outY, double &outZ)
{
   return false;
}
#endif


}


