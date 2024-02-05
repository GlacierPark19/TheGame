void takeInput() {
    getline(cin, choice);
    transform(choice.begin(), choice.end(), choice.begin(), ::towlower);
    //This function fixes issues regarding capitilization.

    //This is where things get strange. In order to simplify my life, I am going to try enumeration
    //The function below *should* run with every takeInput, converting directions to an enumerated list thingy. 

}
