#if defined __linux__
#include "/home/codeleaded/System/Static/Library/MFunc_Parser.h"
#elif defined _WINE
#include "/home/codeleaded/System/Static/Library/MFunc_Parser.h"
#elif defined _WIN32
#include "F:/home/codeleaded/System/Static/Library/MFunc_Parser.h"
#endif



int main(int argc,const char** argv){
    MFunc_Parser mfp = MFunc_Parser_New();
    MFunc_Parser_Var(&mfp,MFunc_Var_New(1.0,"x",0));
    //MFunc_Parser_Add(&mfp,"b = x ^ 2.0");
    MFunc_Parser_Add(&mfp,"(x ^ 2.0 + 1.0) ^ 2.0");
    MFunc_Parser_All(&mfp,MFunc_Parser_Derivative);
    MFunc_Parser_All(&mfp,MFunc_Parser_Compress);
    //MFunc_Parser_All(&mfp,MFunc_Parser_Exe);
    MFunc_Parser_Print(&mfp);
    MFunc_Parser_Free(&mfp);
    return 0;
}