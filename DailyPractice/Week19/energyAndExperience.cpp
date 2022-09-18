#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int minNumberOfHours(int initialEnergy, int initialExperience, vector<int> &energy, vector<int> &experience)
    {
        int n = energy.size();
        int trainingHours = 0;

        for (int i = 0; i < n; ++i)
        {

            if (initialEnergy <= energy[i])
            {
                int difference = energy[i] - initialEnergy;
                initialEnergy += difference + 1;
                trainingHours += difference + 1;
            }
            if (initialExperience <= experience[i])
            {
                int difference = experience[i] - initialExperience;
                initialExperience += difference + 1;
                trainingHours += difference + 1;
            }

            initialEnergy -= energy[i];
            initialExperience += experience[i];
        }
        return trainingHours;
    }
};