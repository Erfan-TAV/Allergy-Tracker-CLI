#include "AllergyHeader.h"

string centerText(int colWidth, string text)
{
    int padding;
    string outputString;

    if(text.length() >= colWidth)
    {
        return text;
    }
    else
    {
        // colWidth is even
        if(colWidth % 2 == 0)
        {
            // text length is even
            if(text.length() % 2 == 0)
            {
                padding = (colWidth - text.length()) / 2;
            }
            // text length is odd
            else
            {
                padding = (colWidth - text.length() - 1) / 2;
            }
        }
        // colWidth is odd
        else
        {
            // text length is even
            if(text.length() % 2 == 0)
            {
                padding = (colWidth - text.length() - 1) / 2;
            }
            // text length is odd
            else
            {
                padding = (colWidth - text.length()) / 2;
            }
        }

        outputString = string(padding, ' ') + text + string(padding, ' ');

        return outputString;
    }
}