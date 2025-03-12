#include <iostream>
#include <vector>
#include <string>

struct MyNamesLex
{
    std::vector<std::string> GameEngines = {"Unity", "Unreal Engine 5", "Crayta"};
    std::vector<std::string> Languages = {"C++", "Blueprints", "C#", "Python", "Lua", "Processing", "OpenGL", "GLSL"};
    std::vector<std::string> ArtSoftware = {"Blender", "Aseprite", "Gimp"};
    std::vector<std::string> AudioAndVideoSoftware = {"FL Studio 20", "Audacity", "OBS", "Movie Studio 16", "Bosca Ceoil", "SFXR"};
    std::vector<std::string> Tools = {"Git", "Github Desktop", "Git Bash", "Markdown", "Jira", "Trello"};

    void PrintCategory(std::vector<std::string> category)
    {
        for (int i = 0; i < category.size(); i++)
        {
            std::cout << category[i] << std::endl;
        }
    }

    void PrintAll()
    {
        PrintCategory(GameEngines);
        PrintCategory(Languages);
        PrintCategory(ArtSoftware);
        PrintCategory(AudioAndVideoSoftware);
        PrintCategory(Tools);
    }
};

int main()
{
    MyNamesLex Lex;

    std::cout << "Passionate about making games and experimenting with new, interesting and unique mechanics" << std::endl;
    std::cout << "Love making dumb, funny mods to create funny scenarios especially in cutscenes" << std::endl;
    std::cout << "Always looking to learn something new, whether it be a new tool or technique in gameplay programming, AI development in games or optimization" << std::endl;

    Lex.PrintAll();

    return 0;
}