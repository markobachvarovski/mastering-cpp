#ifndef PERSONAL_MOVIES_H
#define PERSONAL_MOVIES_H

#include <string>
#include <utility>
#include <vector>
using namespace std;

class Movie {
    string name;
    string rating;
    int times_watched;

public:
    Movie(string name, string rating = "G", int timesWatched = 0)
        : name{name}, rating{rating}, times_watched{timesWatched} {

    }

    ~Movie() = default;

    string getName() {
        return name;
    }

    string getRating() {
        return rating;
    }

    int getTimesWatched() {
        return times_watched;
    }

    void setName(string name) {
        this->name = name;
    }

    void setRating(string rating) {
        this->rating = rating;
    }

    void setTimesWatched(int timesWatched) {
        this->times_watched = timesWatched;
    }

};


class Movies {
    vector<Movie> movies;

public:
    void display() {
        if( this->movies.empty()) {
            cout << "No movies to be displayed" << endl;
        } else {
            for (Movie i: this->movies) {
                cout << i.getName() << " "
                     << i.getRating() << " "
                     << i.getTimesWatched() << endl;
            }
        }
    }

    bool addMovie(string name, string rating, int timesWatched) {
        for(Movie &i : this->movies) {
            if (i.getName() == name) {
                cout << "This movie already exists" << endl;
                return false;
            }
        }

        this->movies.emplace_back(name, rating, timesWatched);
        return true;
    }

    bool incrementWatched(string name) {
        for(Movie &i : movies) {
            if(i.getName() == name) {
                i.setTimesWatched(i.getTimesWatched() + 1);
                return true;
            }
        }

        return false;
    }

};

#endif //PERSONAL_MOVIES_H
