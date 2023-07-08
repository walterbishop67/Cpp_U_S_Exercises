#include "Movie.h"
#include "Movies.h"
#include <iostream>
#include <string>

void increment_watched(Movies &movies, std::string name){
    if(movies.increment_watched(name)){
        std::cout<<"watched inc"<<std::endl;

    }else
        std::cout<<"not found "<<name;
}
void add_movie(Movies &movies,std::string name, std::string rating, int watched){
    if(movies.add_movie(name, rating, watched)){
        std::cout<<"added"<<std::endl;
    }else
        std::cout<<"already exist"<<std::endl;
}
int main() {

    Movies my_movies ;

    my_movies.display();

    add_movie(my_movies, "a","b",5);
    add_movie(my_movies, "c","d",5);
    add_movie(my_movies, "e","f",5);

    increment_watched(my_movies,"a");
    my_movies.display();

    return 0;
}
