
#ifndef USER_H
#define USER_H

#include <string>
using namespace std;

namespace UserLibrary {

    class User {
        private:
            string name;
            string sex;
            int height;
            double weight;
            int fitnessLevel;

            void calculateCaloricNeeds();
            void trackProgress();
            void updatedUserStats();
        public:
            User();
    };
}

#endif