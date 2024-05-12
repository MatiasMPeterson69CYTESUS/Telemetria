#include <SDL.h>
#include <iostream>

int main(int argc, char* argv[]) {
    SDL_Init(SDL_INIT_VIDEO);
    SDL_Window* window = SDL_CreateWindow("Dashboard", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 800, 600, 0);
    SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255); // Fondo negro
    SDL_RenderClear(renderer);

    // Aquí se actualizarían los datos y se redibujaría la interfaz
    // Por ejemplo, mostrar la velocidad y la aceleración
    // SDL_RenderPresent(renderer);

    SDL_Delay(5000); // Muestra la ventana durante 5 segundos
    SDL_DestroyWindow(window);
    SDL_Quit();
    return 0;
}
