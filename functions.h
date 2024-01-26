void takeInput() {
    getline(cin, choice);
    transform(choice.begin(), choice.end(), choice.begin(), ::towlower);
    //This function fixes issues regarding capitilization.
}
