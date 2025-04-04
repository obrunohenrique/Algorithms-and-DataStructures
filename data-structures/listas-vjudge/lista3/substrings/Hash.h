#ifndef HASH_H
#define HASH_H

#include <vector>
#include <utility>
#include <functional>

// Implementação simplificada de unordered_map
template <typename K, typename V>
class MyUnorderedMap {
private:
    static const int SIZE = 10007;
    std::vector<std::pair<K, V>> table[SIZE];

    int hash(const K& key) const {
        return std::hash<K>{}(key) % SIZE;
    }

public:
    MyUnorderedMap() {}

    int count(const K& key) const {
        int h = hash(key);
        for (const auto& [k, v] : table[h]) {
            if (k == key) return 1;
        }
        return 0;
    }

    V& operator[](const K& key) {
        int h = hash(key);
        for (auto& [k, v] : table[h]) {
            if (k == key) return v;
        }
        table[h].emplace_back(key, V{});
        return table[h].back().second;
    }
};

#endif // HASH_H
