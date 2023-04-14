// Cypher text message, Encryption and Decryptiopn
#include <iostream>
#include <string>
using namespace std;

int main(){
    cout<<"Hello Ronak"<<endl;
    string alphabet{"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key{"XZNLWEBGJHQDYVTKFUOMPCIARxznlwebgjhqdyvtkfuompciasr*"};
    
    string secret_message {};
    cout<<"Enter Secret message : ";
    getline(cin,secret_message);
    
    string encrypted_message{};
    
    cout<<"\nEncrypting message........"<<endl;
    
    for(auto c : secret_message){
        size_t position = alphabet.find(c);
        
        if(position != string::npos){
             char new_char {key.at(position)};
             encrypted_message += new_char;
            
        }else{
            encrypted_message += c;
        }
    }
    
    cout<<"\nEncrypted message is : "<<encrypted_message<<endl;
    
    string decrypted_message{};
    cout<<"\nDecrypting message....."<<endl;
    
    for(auto c:encrypted_message){
        size_t position = key.find(c);
        
        if(position != string::npos){
            
            char new_char {alphabet.at(position)};
            decrypted_message += new_char;
        }else{
            decrypted_message += c;
            
        }
    }
    
     cout<<"\nDecrypted message is : "<<decrypted_message<<endl;
    
    return 0;
}