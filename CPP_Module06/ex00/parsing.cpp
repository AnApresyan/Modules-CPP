#include <iostream>
#include <string>
#include <ctype.h>
#include <limits>

static void print3(int i, float f, double d, int flag)
{
    if (flag)
        std::cout << "char: Impossible\n";
    else if (i >= 0 && i <= 127)
    {
        if(isprint(i) == 0)
            std::cout << "char: Non displayable\n";
        else
            std::cout << "char: '" << static_cast<char>(i) << "'\n";
    }
    if (flag)
        std::cout << "int: immpossible\n";
    else
        std::cout << "int: " << i << std::endl;
    std::cout << "float: " << f;
    if (f - static_cast<int>(f) == 0)
        std::cout << ".0f" << std::endl;
    else
        std::cout << "f" << std::endl;
    std::cout << "double: " << d;
    if (d - static_cast<int>(d) == 0)
        std::cout << ".0" << std::endl;
    else
        std::cout << std::endl;

}

static bool parseChar(const std::string &str)
{
    if(str.length() == 1 && isalpha(str[0]))
    {
        print3(static_cast<int>(str[0]), static_cast<float>(str[0]), static_cast<double>(str[0]), 0);
        return (true);
    }
    return (false);
}

static bool parseFloat(unsigned int i, const std::string &str)
{
    float casted;
    bool flag = 0;

    if (str == "-inff" || str == "+inff" || str == "nanf")
        flag = 1;
    if (!flag && (str[i++] != '.' || str[str.length() - 1] != 'f'))
        return (false);
    while (!flag && i < str.length() - 1)
        if (!isdigit(str[i++]))
            return (false);
    casted = stof(str);
    print3(static_cast<int>(casted), casted, static_cast<double>(casted), flag);
    return (true);
}

static bool parseDouble(unsigned int i, const std::string &str)
{
    double casted;
    bool flag = 0;
    
    if (str == "-inf" || str == "+inf" || str == "nan")
        flag = 1;
    if (!flag && str[i++] != '.')
        return (false);
    while (!flag && i < str.length())
        if (!isdigit(str[i++]))
            return (false);
    casted = stod(str);
    print3(static_cast<int>(casted), static_cast<float>(casted), casted, flag);
    return (true);
}

static bool parseInt(const std::string &str)
{
    int casted;

    for (unsigned int i = 0; i < str.length(); i++)
    {
        if (i == 0 && (str[i] == '+' || str[i] == '-'))
            continue;
        if (!isdigit(str[i]))
        {
            if (!parseFloat(i, str))
                if (!parseDouble(i, str))
                    return (false);
            return (true);
        }
    }
    casted = atoi(&(str[0]));
    print3(casted, static_cast<float>(casted), static_cast<double>(casted), 0);
    return (true);
}

bool parse(const std::string &str)
{
    if (parseChar(str))
        return (true);
    if (parseInt(str))
        return (true);
    return (false);
}