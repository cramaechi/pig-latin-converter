//Program converts an input sentence into pig latin.
#include <iostream>
#include <cstring>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

void input(string& s);
//Reads in a sentence into s.

void convertToPigLatin(string& s);
//Precondition: s is a non-empty string.
//Postcondition: Converts words in s to pig latin.

void output(string& s);
//Prints out string s in pig latin.

int main()
{
    string sentence;

    input(sentence);
    convertToPigLatin(sentence);
    output(sentence);

    return 0;
}

void input(string& s)
{
    cout<<"Enter a sentence: ";
    getline(cin, s);
    cout<<endl;
}

void convertToPigLatin(string& s)
{
    char cstring[s.length()];
    strcpy(cstring, s.c_str());
    char *word = strtok(cstring, " .,");

    string consonants = "bcdfghjklmnpqrstvwxyzBCDFGHJKLMNPQRSTVWXYZ";
    string vowels = "aeiouAEIOU";
    int startPos = 0;

    while (word != NULL)
    {
        if (consonants.find_first_of(word[0]) != -1)
        {
            char consonant = word[0];
            int wordLength = strlen(word);
            int consonantPos = s.find(word, startPos);
            startPos = consonantPos + wordLength + 2;
            s.erase(consonantPos, 1);
            s.insert((consonantPos + wordLength) - 1, 1, consonant);
            s.insert((consonantPos + wordLength), "ay");
        }
        else if (vowels.find_first_of(word[0]) != -1)
        {
            int vowelPosition = s.find(word, startPos);
            int wordLength = strlen(word);
            startPos = vowelPosition + wordLength + 3;
            s.insert((vowelPosition + wordLength), "way");
        }

        word = strtok(NULL, " .,?!");
    }
}

void output(string& s)
{
    cout<<"Sentence in pig latin: "<<s<<endl;
}

