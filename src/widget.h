#ifndef _WIDGET_H_
#define _WIDGET_H_
#include <cairo.h>

#define FONT_FAMILY_MAX_LEN 128;

typedef enum {
        WTYPE_TEXT,
        WTYPE_HIST,
        WTYPE_GRAPH,
        WTYPE_GAUGE        
} widget_type_t;

typedef struct {
        unsigned int width;
        unsigned int height;        
} widget_size_t;

typedef struct {
        unsigned char r;
        unsigned char g;
        unsigned char b;
} widget_color_t;

typedef struct {
        const char * family[FONT_FAMILY_MAX_LEN];
        cairo_font_slant_t slant;
        cairo_font_weight_t weight;        
} widget_font_face_t;

typedef struct {
        widget_type_t type;
        widget_color_t bg_color;
        widget_color_t fg_color;
        widget_color_t line_color;
        widget_color_t font_color;
        widget_font_face_t font_face;
        double font_size;
        double line_width;
} widget_config_t;

typedef struct {
        widget_size_t size;
        widget_config_t config;
        void * source;
        cairo_surface_t * surface;

} widget_t;

widget_t * widget_create(int width, int height, int type, void * source);
void widget_update(widget_t * widget);
void widget_resize(widget_t * widget, int new_width, int new_height);
void widget_set_config(widget_t * widget, widget_config_t config);
void widget_destroy(widget_t * widget);
#endif
