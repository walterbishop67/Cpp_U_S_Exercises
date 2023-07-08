#ifndef _MOVIES_H
#define _MOVIES_H
#include <vector>
#include <string>
#include "Movie.h"

class Movies{
private:
    std::vector<Movie> movies;
public:
    Movies();
    ~Movies();

    bool add_movie(std::string name, std::string, int watched);
    bool increment_watched(std::string name);
    void display() const;
};
#endif _MOVIES_H
