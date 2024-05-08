import pygame
import sys

pygame.init()
screen = pygame.display.set_mode((800, 600))

# Colores
BLACK = (0, 0, 0)
WHITE = (255, 255, 255)

# Fuente para texto
font = pygame.font.Font(None, 36)

# Función para mostrar datos
def display_data(data, position):
    text = font.render(f"{data}", True, WHITE)
    screen.blit(text, position)

# Bucle principal
running = True
while running:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False

    screen.fill(BLACK)
    display_data("Velocidad: 100 km/h", (50, 50))
    display_data("Aceleración: 5 m/s²", (50, 100))

    pygame.display.flip()

pygame.quit()
sys.exit()
