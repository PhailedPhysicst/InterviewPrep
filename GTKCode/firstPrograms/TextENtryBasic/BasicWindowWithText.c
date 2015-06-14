#include <gtk/gtk.h>

int main(int argc, char* argv[])
{
  GtkWidget* window;
  GtkWidget* table;
  GtkWidget* label;
  GtkWidget* entry;
  
  gtk_init(&argc, &argv);
  window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
  gtk_container_set_border_width(GTK_CONTAINER(window), 20);
  table = gtk_table_new(0, 0, FALSE);
  gtk_container_add(GTK_CONTAINER(window), table);
  label = gtk_label_new("Name");
  gtk_table_attach(GTK_TABLE(table), label, 0, 1, 0, 1, GTK_FILL | GTK_SHRINK, GTK_FILL | GTK_SHRINK, 5, 5);
  gtk_widget_show_all(window);
  g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);
 
  gtk_main();


}
