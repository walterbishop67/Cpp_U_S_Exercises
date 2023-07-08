#include <iostream>
#include "Movies.h"
#include "Movie.h"

Movies::Movies(){}
Movies::~Movies() {}

bool Movies::add_movie(std::string name, std::string rating, int watched) {
    for(auto i = 0; i < movies.size(); i++) {
        if (movies[i].get_name() == name){
            std::cout<< "this movie already exist!";
            return false;
        }
    }
    movies.push_back(Movie(name, rating, watched));
    return true;
}

bool Movies::increment_watched(std::string name) {
    for (auto i = 0; i < movies.size(); i++) {
        if (movies[i].get_name() == name) {
            movies[i].increment_watched();
            return true;
        }
    }
    return false;
}
void Movies::display() const {
    if(movies.size() == 0){
        std::cout<<"there is no movie";
        return;
    }
    for (auto i = 0; i < movies.size(); i++){
        std::cout<<movies[i].get_name()<<" , "<<movies[i].get_rating()<<" , "<<movies[i].get_watched()<<std::endl;
    }
}
