#include <gtk/gtk.h>

void
GTK_add_connection(GtkButton *button, gpointer user_data);

void
GTK_edit_connection(GtkTreeView *treeview, gpointer user_data);

void
GTK_delete_connection(GtkTreeView *treeview, gpointer user_data);

void
GTK_set_default_connection(GtkTreeView *treeview, gpointer user_data);

void
GTK_revert_connections(GtkTreeView *treeview, gpointer user_data);

void
GTK_create_connection(GtkWidget *widget, gpointer user_data);

void
GTK_browse_server_executable(GtkWidget *button, gpointer user_data);

void
GTK_add_file_server(GtkWidget *widget, gpointer user_data);

void
GTK_add_tcp_server(GtkWidget *button, gpointer user_data);
