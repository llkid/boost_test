#include <iostream>
#include <string>
#include <boost/regex.hpp>
#include <mysql++/mysql++.h>

using namespace std;
namespace bs = boost;
namespace ms = mysqlpp;

int main() {
    bs::regex r(R"(\d+)");

    string data("hello 123456 world");

    bs::smatch m;
    if (bs::regex_search(data, m, r)) {
        cout << m.str() << '\n';
    }

    ms::String greeting("hello world");
    cout << greeting << '\n';
}
