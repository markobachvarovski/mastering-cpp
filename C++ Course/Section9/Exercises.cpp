#include <iostream>
#include <string>
#include "Section9.h"
#include "Movies.h"
using namespace std;

static int sec9ex1() {

    Dog spot("Spot", 20);
    cout << spot.get_name() << " " << spot.get_age() << endl;

    Dog twin = spot;
    cout << twin.get_name() << " " << twin.get_age() << endl;

    return 0;
}

static int sec9challenge() {

    Movies movies;

    movies.display();

    cout << "============================" << endl;

    movies.addMovie("Star Wars", "G", 0);
    movies.addMovie("Avengers: Infinity War", "PG", 10);
    movies.addMovie("Avengers: Endgame", "PG", 25);

    movies.display();

    cout << "============================" << endl;

    movies.incrementWatched("Avengers: Infinity War");
    movies.incrementWatched("Avengers: Endgame");
    movies.incrementWatched("Avengers: Infinity War");

    movies.display();

    return 0;
}
