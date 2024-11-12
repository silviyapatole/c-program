#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[100];
    int release_year;
    int duration;
} Movie;

int compareReleaseYear(const void *a, const void *b) {
    Movie *movie1 = (Movie *)a;
    Movie *movie2 = (Movie *)b;
    return movie1->release_year - movie2->release_year;
}

int main() {
    int n, i;

    printf("Enter the number of movies: ");
    scanf("%d", &n);

    Movie *movies = (Movie *)malloc(n * sizeof(Movie));
    if (movies == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        printf("\nEnter details for Movie %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", movies[i].name);
        printf("Release Year: ");
        scanf("%d", &movies[i].release_year);
        printf("Duration (in minutes): ");
        scanf("%d", &movies[i].duration);
    }

    qsort(movies, n, sizeof(Movie), compareReleaseYear);

    printf("\nMovies sorted by release year:\n");
    for (i = 0; i < n; i++) {
        printf("Name: %s, Release Year: %d, Duration: %d minutes\n", movies[i].name, movies[i].release_year, movies[i].duration);
    }

    free(movies);

    return 0;
}
