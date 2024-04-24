void loadSceneDescriptor()
{
}

void getCurrentScene()
{
    ifstream f("Scenes.json");
    json data = json::parse(f);
}