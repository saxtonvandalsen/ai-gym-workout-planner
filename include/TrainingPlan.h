

#include <string>
#include <vector>
using namespace std;

namespace TrainingPlanLibrary {

    class TrainingPlan {
        private:
            string planName;
            string goal;
            int durationWeeks;
            string difficultyLevel;
            vector<string> targetMuscleGroups;

        public:
            TrainingPlan();
            TrainingPlan(const string& name, const string& goal, const string& difficulty, int workoutsPerWeek);
            TrainingPlan(const TrainingPlan& other);
    };
}