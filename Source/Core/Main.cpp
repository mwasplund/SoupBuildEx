#include <iostream>

import SoupBuildEx;

#define DllExport __declspec( dllexport )

DllExport int RegisterBuildExtension(Soup::BuildEx::IBuildSystem& buildSystem)
{
    return 0;
}