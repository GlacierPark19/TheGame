int loadDescriptors(descriptorsFile)
{
    ifstream file(descriptorsFile);
    if (file.is_open())
    {
        // The descriptors are seperated as follows:
        // an integer and a Char. This is the Descriptor ID
        // a string. This is the Descriptor (What will get printed)
        // a termination character ';'

        while (!file.eof())
        {
            int id;
            char c;
            string desc;
            file >> id >> c;
            getline(file, desc, ';');
            descriptors[id] = desc;
        }
    }
    else
    {
        cout << "Unable to open file." << endl;
        return 1;
    }
    return 0;
}