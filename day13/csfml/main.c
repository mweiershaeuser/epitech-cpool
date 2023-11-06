/*
** EPITECH PROJECT, 2023
** CSFML
** File description:
** CSFML
*/

#include <SFML/Graphics.h>
#include <stdlib.h>

typedef struct pixel {
    int r;
    int g;
    int b;
    float a;
} pixel;

typedef struct framebuffer {
    int width;
    int height;
    pixel **pixels;
} frambuffer_t;

framebuffer_t *framebuffer_create(unsigned int width, unsigned int height) {
    framebuffer_t *fb;
    pixel pixels[width][height];

    fb = malloc(sizeof(framebuffer_t));
    fb->width = width;
    fb->height = height;
    fb->pixels = pixels;
    return fb;
}

int main(void)
{
    sfVideoMode video_mode;
    sfRenderWindow *window;
    framebuffer_t *fb;

    video_mode.width = 800;
    video_mode.height = 600;
    video_mode.bitsPerPixel = 32;

    fb = framebuffer_create(800, 600):
    
    window = sfRenderWindow_create(
        video_mode, "Hello World!", sfDefaultStyle, NULL);
    while (sfRenderWindow_isOpen(window)) {
        sfRenderWindow_display(window);
    }
    sfRenderWindow_destroy(window);
    return 0;
}
