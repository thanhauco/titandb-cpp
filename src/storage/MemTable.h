#include <vector>
#include <string>

class MemTable {
public:
    void Put(const std::string& key, const std::string& value);
    std::string Get(const std::string& key);
};
