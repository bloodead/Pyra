#include <gtk/gtk.h>
#include "base.h"

int main( int argc, char *argv[])
{

  GtkWidget *window;
  GtkWidget *view;
  GtkWidget *vbox;
  
  GtkTextBuffer *buffer;
  GtkTextIter iter;

  gtk_init(&argc, &argv);

  window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
  gtk_window_set_position(GTK_WINDOW(window), GTK_WIN_POS_CENTER);
  gtk_window_set_default_size(GTK_WINDOW(window), 250, 200);
  gtk_window_set_title(GTK_WINDOW(window), "TextView");
  gtk_container_set_border_width(GTK_CONTAINER(window), 5);
  GTK_WINDOW(window)->allow_shrink = TRUE;

  vbox = gtk_vbox_new(FALSE, 0);
  view = gtk_text_view_new();
  gtk_box_pack_start(GTK_BOX(vbox), view, TRUE, TRUE, 0);

  buffer = gtk_text_view_get_buffer(GTK_TEXT_VIEW(view));


  gtk_container_add(GTK_CONTAINER(window), vbox);

  g_signal_connect_swapped(G_OBJECT(window), "destroy",
        G_CALLBACK(gtk_main_quit), G_OBJECT(window));

  gtk_widget_show_all(window);

  gtk_main();

  return 0;
}
