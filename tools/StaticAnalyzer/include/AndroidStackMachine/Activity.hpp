//
//  Activity.hpp
//  TaskDroid 
//
//  Licensed under the MIT License <http://opensource.org/licenses/MIT>.
//  SPDX-License-Identifier: MIT
//  Copyright (c) 2021 Jinlong He.
//

#ifndef Activity_hpp 
#define Activity_hpp 

#include <string>
#include <unordered_set>
#include <unordered_map>
#include "FragmentTransaction.hpp"
using std::string, std::unordered_set, std::unordered_map;
namespace TaskDroid {
    enum LaunchMode {STD, STP, STK, SIT};
    class Activity {
    public:
        Activity()
            : name(""),
              affinity(""),
              launchMode(STD) {}
        Activity(const string& name_, const string& affinity_, const LaunchMode& launchMode_)
            : name(name_),
              affinity(affinity_),
              launchMode(launchMode_) {}
        ~Activity() {
        }
        const string& getName() const;
        void setName(const string& name);
        const string& getAffinity() const;
        void setAffinity(const string& affinity);
        const LaunchMode& getLaunchMode() const;
        void setLaunchMode(const LaunchMode& launchMode);
    private:
        string name;
        string affinity;
        LaunchMode launchMode;
    };
}

#endif /* Activity_hpp */
