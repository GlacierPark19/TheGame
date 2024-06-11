
void commandInterpriter()
{
    // We recieve an input string first (duh)
    string input;
    getline(cin, input);
    // We then create a vector of strings to store the words in the input
    vector<string> words;
    // We then create a string to store the current word
    string currentWord;
    // We then iterate through the input string
    for (int i = 0; i < input.length(); i++)
    {
        // If the current character is a space, we add the current word to the vector and reset the current word
        if (input[i] == ' ')
        {
            words.push_back(currentWord);
            currentWord = "";
        }
        // If the current character is not a space, we add the current character to the current word
        else
        {
            currentWord += input[i];
        }
    }
    // We now know all the words in the input string.

    // We can use the actions map to determine what the user wants to do.
}
}