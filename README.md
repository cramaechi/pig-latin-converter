# Pig Latin Converter
A program that converts user input into pig latin.

### Synopsis
The program converts user input into pig latin according to the following rules:

a. For words that begin with consonants, move the leading consonant to the end of the word and add "ay". Thus, "ball"<br />
&nbsp;&nbsp;&nbsp;&nbsp;becomes "allbay"; "button" becomes "uttonbay"; and so forth.

b. For words that begin with vowels, add "way" to the end. Thus, "all" becomes "allway"; "one" becomes "oneway";<br />
&nbsp;&nbsp;&nbsp;&nbsp;and so forth.

## Setup
1. Download and install [Git](https://git-scm.com/downloads), if you don't already have it.

2. Open terminal and run the git clone command:

   ```
   $ git clone https://github.com/cramaechi/pig-latin-converter.git
   ```
    or [download as ZIP](https://github.com/cramaechi/pig-latin-converter/archive/master.zip).

3. Go to the project folder:

   ```
   $ cd pig-latin-converter
   ```

4. Compile:

   ```
   $ make
   ```
   
## Usage
Run:

```
$ ./pig_latin
```

Sample Output:
```
Enter a sentence: All for one, one for all!                                                                           
                                                                                                                      
Sentence in pig latin: Allway orfay oneway, oneway orfay allway! 
```
