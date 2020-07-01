#include <gtk/gtk.h>

GtkBuilder *gtkBuilder;
GtkWidget *window;

int main(int argc, char *argv[])
{
    gtk_init(&argc, &argv);
    
    gtkBuilder = gtk_builder_new();
    gtk_builder_add_from_file(gtkBuilder, "MarketMNG.glade", NULL);
    window = GTK_WIDGET(gtk_builder_get_object(gtkBuilder, "Market Management"));
    g_signal_connect(window,"destroy",G_CALLBACK(gtk_main_quit),NULL);
    
    g_object_unref(G_OBJECT(gtkBuilder));
    gtk_widget_show(window);
    gtk_main();
    
    return 0;
}

void on_Admin_Button_clicked(GtkButton *Admin_Button, GtkEntry *Admin_Pass_Entry)
{
}