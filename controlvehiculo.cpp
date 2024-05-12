#include <SDL.h>
int main() {
    SDL_Init(SDL_INIT_VIDEO);
    bool running = true;
    SDL_Event event;

    int velocity = 0;
    int direction = 0;

    while (running) {
        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_QUIT) {
                running = false;
            }
            if (event.type == SDL_KEYDOWN) {
                switch (event.key.keysym.sym) {
                    case SDLK_UP:
                        velocity += 1;
                        break;
                    case SDLK_DOWN:
                        velocity -= 1;
                        break;
                    case SDLK_LEFT:
                        direction -= 1;
                        break;
                    case SDLK_RIGHT:
                        direction += 1;
                        break;
                }
            }
        }
        // Actualizar la simulación con los nuevos valores de 'velocity' y 'direction'
    }
    SDL_Quit();
    return 0;
}
