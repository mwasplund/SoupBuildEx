#include <iostream>

import SoupBuildEx;

#define DllExport __declspec( dllexport )

class MyBuildTask : public Soup::BuildEx::IBuildTask
{
public:
    const char* GetName() override final
    {
        return "my Build task";
    }

    void Execute() override final
    {
    }
};

DllExport int RegisterBuildExtension(Soup::BuildEx::IBuildSystem& buildSystem)
{
    buildSystem.RegisterTask(std::make_shared<MyBuildTask>());
    return 0;
}