
{
    // A
    unsigned const int size = 5;
    unsigned int values[size] = {2, 4, 6, 8, 10};

    // B
    unsigned int *vPtr;

    // C
    for (int i = 0; i < size; i++)
    {
        cout << values[i] << " ";
    }
    cout << endl;

    // D
    vPtr = values;
    vPtr = &values[0];

    // E
    for (int i = 0; i < size; i++)
    {
        cout << *(vPtr + i) << endl;
    }
    cout << endl;

    // F
    for (int i = 0; i < size; i++)
    {
        cout << *(values + i) << " ";
    }
    cout << endl;

    // G
    for (int i = 0; i < size; i++)
    {
        cout << (vPtr[i]) << ' ';
    }
    cout << endl;

    // H
    cout << values[4] << endl;
    cout << *(vPtr + 4) << endl;
    cout << *(values + 4) << endl;
    cout << vPtr[4] << endl;

    // I
    cout << (vPtr + 3) << endl;
    cout << *(vPtr + 3) << endl;

    // J
    unsigned int *temp = vPtr;
    cout << (vPtr -= 4) << endl;
    cout << *(temp -= 4) << endl;
}
