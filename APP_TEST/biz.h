#ifndef BIZ_H
#define BIZ_H

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

// 使用USER类

class Biz {
public:
    void SetUser(User* user) {
        _user = user;
    }

    std::string pay(const std::string& username, const std::string& password, int money) {
        std::string ret;
        if (!_user) {
            ret = "pointer is null.";
            return ret;
        }

        if (!_user->Online()) {
            ret = "logout status.";
            // 尚未登录，要求登录
            if (!_user->Login(username, password)) {
                // 登录失败
                ret += "login error.";
                return ret;
            } else {
                // 登录成功
                ret += "login success.";
            }
        } else {
            // 已登录
            ret = "login.status";
        }

        if (!_user->Pay(money)) {
            ret += "pay error.";
        } else {
            ret += "pay success.";
        }

        return ret;
    }

private:
    User* _user;
};



#endif // BIZ_H
