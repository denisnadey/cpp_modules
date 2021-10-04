//
// Created by Matthos Denys on 6/1/21.
//

#ifndef EX01_ENEMY_HPP
#define EX01_ENEMY_HPP


#include <string>

class Enemy {
protected:
    int _hp;
    std::string _type;
    std::string _upon_death;
    std::string _was_born;
public:
    Enemy();
    Enemy(int hp, std::string const &type);
    Enemy (const Enemy& other);
    Enemy&	operator =(const Enemy& other);
    ~Enemy();
    std::string getType() const {return this->_type;};
    int getHP() const { return this->_hp;};
    virtual void takeDamage(int damage);
    void setUpon_death(std::string text_upon_death){ this->_upon_death = text_upon_death;};
    std::string getUpon_death() const { return this->_upon_death; };
    void setWasBorn(std::string wasborn) { this->_was_born = wasborn; };
    std::string getWasBorn() const {return  this->_was_born; };

};


#endif //EX01_ENEMY_HPP
