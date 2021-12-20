#pragma once
#include <functional>
#include <type_traits>
#include <vector>
#include <algorithm>
#include <cmath>

namespace operaciones
{
    int ingreso(std::string mensaje) {
        int input;

        do {
            std::cout << mensaje;
            std::cin >> input;

            if (std::cin.fail()) {
                std::cin.clear();
                continue;
            }

            break;
        } while (true);

        return input;
    }

    // funcion lambda para el maximo comun divisor
    const std::function<int(int, int)> mcd = [&](int a, int b) {
        if (a == 0) return b;
        return mcd(b % a, a);
    };

    // Maximo comun divisor n valores para contenedores (std::vector, std::list, std::queue, etc)
    template<typename C,
        typename T = std::decay_t<
        decltype(*begin(std::declval<C>()))>,
        typename = std::enable_if_t<
        std::is_convertible_v<T, int>>>
        int maximo_n(C const& list) {
        std::vector<int> vec = { list.begin(), list.end() };
        int result = vec.at(0);

        vec.erase(vec.begin());

        for (auto i : vec) {
            result = mcd(i, result);

            if (result == 1) return 1;
        }

        return result;
    }

    // Maximo comun divisor n valores ...
    template <typename... Args>
    int maximo_n(Args... args) {
        return maximo_n(std::vector<int>{args...});
    }

    // Maximo comun divisor n valores lista inicializadora {}
    int maximo_n(std::initializer_list<int> list) {
        return maximo_n(std::vector<int>{list});
    }

    // Maximo comun divisor 3 valores
    int maximo(int a, int b, int c) {
        auto fn = [](int a, int b, int c) -> int {
            int maxi = 0;

            maxi = std::max(a, std::max(b, c));

            for (int i = maxi; i > 1; i--) {
                if ((a % i == 0) and (b % i == 0) and (c % i == 0)) {
                    return i;
                    break;
                }
            }

            return 1;
        };
        return fn(a, b, c);
    }

    // minimo comun multiplo n valores para contenedores (std::vector, std::list, std::queue, etc)
    template<typename C,
        typename T = std::decay_t<decltype(*begin(std::declval<C>()))>,
        typename = std::enable_if_t<std::is_convertible_v<T, int>>
    >
        int minimo_n(C const& list) {
        std::vector<int> vec = { list.begin(), list.end() };
        int result = vec.at(0);

        vec.erase(vec.begin());

        for (auto i : vec) {
            result = (((i * result)) / (mcd(i, result)));
        }

        return result;
    }

    // minimo comun divisor n valores ...
    template <typename... Args>
    int minimo_n(Args... args) {
        return minimo_n(std::vector<int>{args...});
    }

    // minimo comun divisor n valores lista inicializadora {}
    int minimo_n(std::initializer_list<int> list) {
        return minimo_n(std::vector<int>{list});
    }

    // minimo comun divisor 3 valores
    int minimo(int a, int b, int c) {
        auto fn = [](int x, int y, int z) -> int {
            long max, min, count, flag = 0;
            if (x >= y && x >= z)
                max = x;
            else if (y >= x && y >= z)
                max = y;
            else if (z >= x && z >= y)
                max = z;
            for (count = 1; flag == 0; count++) {
                min = max * count;
                if (min % x == 0 && min % y == 0 && min % z == 0) {
                    flag = 1;
                }
            }

            return min;
        };

        return fn(a, b, c);
    }
};

