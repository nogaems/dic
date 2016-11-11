#include "widget.h"

void _widget_render_text(widget_t * widget);
widget_config_t _get_config();
widget_t * widget_create(int width, int height, widget_type_t type, void * source)
{
         widget_t *widget = (widget_t *) malloc(sizeof(widget_t));

         widget->surface = cairo_image_surface_create(CAIRO_FORMAT_ARGB32, width, height);
         widget->size.width = width;
         widget->size.height = height;         
         widget_set_config(widget, _get_config())
         widget->source = source;

         widget_update(widget);
         
         return widget;
}
widget_config_t _get_config()
{
        widget_config_t config;
        config.type = 0;
        config.bg_color = {255, 255, 255};
        config.fg_color = {10, 0, 0};
        config.line_color = {10, 0, 0};
        config.font_color = {0, 0, 10};
        config.font_face = {"terminus", 0, 0};
        config.font_size = 16.0;
        config.line_width = 3.0;
        
        return config
        
}




