
#ifndef USER_H
#define USER_H

#include <string>
#include <vector>
using namespace std;

namespace UserLibrary {

    class User {
        private:
            // Personal Information
            string name;
            string sex;
            int height;
            double weight;
            vector<string> goals;

            // Health & Progress Tracking
            double bodyFatPercentage;
            string trainingExperience;
            vector<double> weightLog;
            vector<double> strengthLog;
            
            // Dietary Preference & Tracking
            string dietaryPreference;
            int dailyCalories;
            int dailyProteinTarget;
            int dailyCarbTarget;
            int dailyFatTarget;

            void validateWeight(double weight);
            void validateHeight(int height);
            void validateStringInfo(string s);
            void validateGoals(vector<string> goals);
            void validatePersonalInfo();
            void calculateCaloricNeeds();
            void trackProgress();
            void updatedUserStats();
        public:
            User(string name, string sex, int height, int weight, vector<string> goals);
            // Copy & move semantics eventually

            string viewProgress();
    };
}

#endif