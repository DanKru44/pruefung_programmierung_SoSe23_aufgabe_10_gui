#include <gtk/gtk.h>

static void knopf_klick (GtkWidget *widget , gpointer data )
{
	g_print ( "Herr Krüger bekommt für diese Aufgabe volle Punktzahl!\n" ) ;
}

int main ( int argc , char *argv[] ) 
{
	GtkWidget *fenster , *knopf ;

	gtk_init ( &argc , &argv ) ;
	fenster = gtk_window_new ( GTK_WINDOW_TOPLEVEL ) ;
	g_signal_connect ( fenster , "destroy" , G_CALLBACK ( gtk_main_quit ) , NULL ) ;
	gtk_container_set_border_width ( GTK_CONTAINER ( fenster ) , 30 ) ;
	knopf = gtk_button_new_with_label ( "Volle Punktzahl" ) ;
	g_signal_connect ( knopf , "clicked" , G_CALLBACK ( knopf_klick ) , NULL ) ;
	gtk_container_add ( GTK_CONTAINER ( fenster ) , knopf ) ;
	gtk_widget_show_all ( fenster ) ;
	gtk_main () ;

	return 0 ;
}
