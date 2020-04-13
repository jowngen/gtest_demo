#ifndef USER_H
#define USER_H


class User {
public:
    User() {};
    ~User() {};

public:
    // 登录
    virtual bool Login(const std::string& username, const std::string& password) = 0;
    // 支付
    virtual bool Pay(int money) = 0;
    // 是否登录
    virtual bool Online() = 0;
};

#endif // USER_H
