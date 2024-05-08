velocity = 0
direction = 0

# Dentro del bucle principal
keys = pygame.key.get_pressed()
if keys[pygame.K_UP]:
    velocity += 1  # Aumentar velocidad
if keys[pygame.K_DOWN]:
    velocity -= 1  # Disminuir velocidad
if keys[pygame.K_LEFT]:
    direction -= 1  # Girar a la izquierda
if keys[pygame.K_RIGHT]:
    direction += 1  # Girar a la derecha
