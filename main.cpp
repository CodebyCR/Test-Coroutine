#include <iostream>

#include <chrono>
#include "ExecutionTimeGenerator.hpp"

int main() {

    // Seconds vector
    std::vector<std::chrono::seconds> seconds= {
        std::chrono::seconds{0},
        std::chrono::seconds{1},
        std::chrono::seconds{2},
        std::chrono::seconds{3},
        std::chrono::seconds{4},
    };

    // Minutes vector
    std::vector<std::chrono::minutes> minutes= {
        std::chrono::minutes{0},
        std::chrono::minutes{1},
        std::chrono::minutes{2},
        std::chrono::minutes{3},
        std::chrono::minutes{4},
    };

    // Hours vector
    std::vector<std::chrono::hours> hours= {
        std::chrono::hours{0},
        std::chrono::hours{1},
        std::chrono::hours{2},
        std::chrono::hours{3},
        std::chrono::hours{4},
    };

    // Days vector
    std::vector<std::chrono::days> days= {
        std::chrono::days{0},
        std::chrono::days{1},
        std::chrono::days{2},
        std::chrono::days{3},
        std::chrono::days{4},
    };

    // Months vector
    std::vector<std::chrono::months> months= {
        std::chrono::months{0},
        std::chrono::months{1},
        std::chrono::months{2},
        std::chrono::months{3},
        std::chrono::months{4},
    };

    // Years vector
    std::vector<std::chrono::years> years= {
        std::chrono::years{0},
        std::chrono::years{1},
        std::chrono::years{2},
        std::chrono::years{3},
        std::chrono::years{4},
    };



    ExecutionTimeGenerator exe_tm_generator = ExecutionTimeGenerator::generate_from(
            seconds,
            minutes,
            hours,
            days,
            months,
            years);


    std::cout << "SIZE: " << exe_tm_generator().size() << std::endl;

    std::cin.get();

    std::cout << "SIZE: " << exe_tm_generator().size() << std::endl;

    std::cin.get();

    std::cout << "SIZE: " << exe_tm_generator().size() << std::endl;

    std::cin.get();


//    for (int index = 0; const auto& timeStruct : exe_tm_generator() ) {
//        index++;
//        std::cout << "TEST" << index << ": " << std::put_time(&timeStruct, "%c") << std::endl;
//    }


    return 0;
}
