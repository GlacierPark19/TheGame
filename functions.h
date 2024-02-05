void takeInput() {
    getline(cin, choice);
    transform(choice.begin(), choice.end(), choice.begin(), ::towlower);
    //This function fixes issues regarding capitilization.

    //This is where things get strange. In order to simplify my life, I am going to try pseudo-enumeration
    //The function below *should* run with every takeInput, converting directions to an integer. 
    if (choice == "north") {
        choiceEnum = 1;
   } else
        if (choice == "south") {
            choiceEnum = 2;
        }else 
            if (choice == "east") {
                choiceEnum = 3;
            }else
                if (choice == "west") {
                    choiceEnum = 4;
                }
                else
                {
                    //do literaly nothing for now IG
                }
}
