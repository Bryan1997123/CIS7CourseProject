//
//  main.cpp
//  CIS-7 Final Project
//
//  Created by Bryan  Cruz on 5/27/23.
//

#include <iostream>
#include <string.h>
using namespace std;

void Decrypt(string, string, int);
void ExtendKey(string &, int);
void Encrypt(string, string, int);

int main()
{
    int choice;
    bool condition = true;
    
    cout << "Welcome to our Vigenere Cypher Encryption & Decryption Program" << endl;
    
    while(condition)
    {
        string word;
        string key;
        
        cout << "1.Encrypt" << endl;
        cout << "2.Decrypt" << endl;
        cout << "3.Quit" << endl;
        cin >> choice;
        
        switch (choice)
        {
            case 1:
                cout << "Type a word or phrase you wish to encrypt. (No Spaces, Numbers or Symbols)" << endl;
                cin >> word;
                transform(word.begin(), word.end(), word.begin(), ::toupper); // turn string into uppercase
                
                cout << "Type the key needed for encryption and decryption. (No Spaces, Numbers or Symbols)" << endl;
                cin >> key;
                transform(key.begin(), key.end(), key.begin(), ::toupper); // turn string into uppercase
                
                ExtendKey(key, word.size());
                
                Encrypt(word, key, word.size());
                break;
                
            case 2:
                cout << "Type a word or phrase you wish to decrypt. (No Spaces, Numbers or Symbols)" << endl;
                cin >> word;
                transform(word.begin(), word.end(), word.begin(), ::toupper); // turn string into uppercase
                
                cout << "Type the key needed for encryption and decryption. (No Spaces, Numbers or Symbols)" << endl;
                cin >> key;
                transform(key.begin(), key.end(), key.begin(), ::toupper); // turn string into uppercase
                
                ExtendKey(key, word.size());
                
                Decrypt(word, key, word.size());
                break;
                
            case 3:
                cout << "You chose to quit." << endl;
                condition = false;
                break;
                
            default:
                cout << "Invalid input, try again." << endl;
                break;
        }
    }
    
    return 0;
}

void Decrypt(string word, string key, int size)
{
  //Iterate through each element of the word
  for(int i = 0; i < size; i++)
    {
      //Equation to apply the number of shifts to the starting
      //letter of A
      if(word[i] != ' ')
      {
        word[i] = ((word[i] - key[i] % 26) % 26) + 'A';
      }
    }
  //Print the decrypted word
  cout << "Decrypted word: " << word << endl;
}

void ExtendKey(string &key, int wordSize)
{
  //If key size matches the wordSize, no changes are made
  if(key.size() == wordSize)
  {
    return;
  }
  //If Keysize if above wordSize
  else if(key.size() > wordSize)
  {
    int temp = key.size() - wordSize;
    string t = "" + key.substr(0, key.size() - temp);
    key = t;
  }
  //Extend the key to the size of the word that is encrypted
  else
  {
    int temp = key.size();
    for(int i = 0, j = 0; i < wordSize - temp; i++)
      {
        key += key[j];
        j++;

        if(j == key.size())
        {
          j = 0;
        }
      }
  }
}

void Encrypt(string word, string key, int size)
{
  //Iterate through each element of the word
  for(int i = 0; i < size; i++)
    {
      if(word[i] != ' ')
      {
        //Equation to apply the number of shifts to the starting
        //letter of A
        word[i] = ((word[i] + key[i] % 26) % 26) + 'A';
      }
    }
  //Print encrypted word
  cout << "Encrypted Word: " << word << endl;
}
