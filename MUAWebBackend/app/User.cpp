//
// Created by epicmo on 22-10-14.
//
#include "User.h"
#include "TokenDictionary.h"
#include "UserController.h"
#include "DataController.h"
namespace MUAWeb{
        bool User::isRoot(){
            if (this->username == "root" || this->username == "epicmo")
                return true;
            else
                return false;
        }
        bool User::hasToken(){
            if(this->token.token != "" && TokenDictionary::hasToken(this->username))
                return true;
            else
                return false;
        }
        bool User::verifyPassword(){
            if (this->password == DataController::getPassword(this->username))
                return true;
            else
                return false;
        }
        bool User::verifyToken(){
            if (this->token.token == TokenDictionary::getToken(this->username).token)
                return true;
            else
                return false;
        }
        Token User::getToken(){
            return this->token;
        }
        void User::disposeToken(){
            TokenDictionary::removeTokenAt(this->username);
        }
        void User::changePassword(std::string passwd){
            UserController::editPassword(*this,passwd);
        }
        void User::setToken(Token token){
            this->token = token;
        }
        User::User(std::string username,std::string passwd){
            this->username = username;
            this->password = passwd;
        }
        User::User(std::string username,std::string passwd,Token token){
            this->username = username;
            this->password = passwd;
            this->token = token;
        }

}