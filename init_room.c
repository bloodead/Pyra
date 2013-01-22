#include <gtk/gtk.h>
#include <stdlib.h>
#include "base.h"

int	init_room(env_room* room)
{
	room->vbox = gtk_vbox_new(TRUE, 0);
	room->button = malloc(2 * sizeof(GtkWidget*));
	room->hbox = malloc(2 * sizeof(GtkWidget*));
	room->window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
	gtk_window_set_default_size(GTK_WINDOW(room->window), 800, 800);
	gtk_window_set_position(GTK_WINDOW(room->window),GTK_WIN_POS_CENTER);
	gtk_container_set_border_width(GTK_CONTAINER(room->window), 0);
	room->hbox[0] = gtk_hbox_new(TRUE, 0);
	gtk_box_pack_start(GTK_BOX(room->vbox), room->hbox[0], TRUE, TRUE, 0);
	gtk_window_set_position(GTK_WINDOW(room->window),GTK_WIN_POS_CENTER);
	gtk_container_add(GTK_CONTAINER(room->window), GTK_WIDGET(room->vbox));
	gtk_widget_show_all(room->window);
	gtk_main();
	return (0);
}
