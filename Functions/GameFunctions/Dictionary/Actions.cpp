void actionsDictionary()
{
    // We create a map of strings to numerical values
    // this is to mkae life slightly easier
    map<string, int> actions;
    // We then add the actions to the map
    actions["go"] = 1;
    actions["move"] = 1;
    actions["attack"] = 2;
    actions["fight"] = 2;
    actions["run"] = 3;
    actions["flee"] = 3;
    actions["look"] = 4;
    actions["inspect"] = 4;
    actions["examine"] = 4;
    actions["open"] = 5;
    actions["close"] = 6;
    actions["use"] = 7;
    actions["take"] = 8;
    actions["grab"] = 8;
    actions["pick up"] = 8;
    actions["drop"] = 9;
    actions["put down"] = 9;
    actions["inventory"] = 10;
    actions["inv"] = 10;
    actions["i"] = 10;
    actions["help"] = 11;
    actions["exit"] = 12;
    actions["quit"] = 12;
    actions["save"] = 13;
    actions["load"] = 14;
}