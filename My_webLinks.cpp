#include <gtk/gtk.h>
#include <stdio.h>

static void on_youtube_clicked(GtkWidget *widget, gpointer data)
{
    system("xdg-open https://www.youtube.com/");
}

static void on_facebook_clicked(GtkWidget *widget, gpointer data)
{
    system("xdg-open https://www.facebook.com/");
}

static void on_linkedin_clicked(GtkWidget *widget, gpointer data)
{
    system("xdg-open https://www.linkedin.com/");
}

static void on_cyberplus_clicked(GtkWidget *widget, gpointer data)
{
    system("xdg-open https://www.cyberplus.com/");
}

static void on_deepl_clicked(GtkWidget *widget, gpointer data)
{
    system("xdg-open https://www.deepl.com/");
}

static void on_reverso_ortographe_clicked(GtkWidget *widget, gpointer data)
{
    system("xdg-open https://www.reverso.net/orthographe/francais/");
}

static void on_localhost_clicked(GtkWidget *widget, gpointer data)
{
    system("xdg-open http://127.0.0.1/");
}

static void on_phpmyadmin_clicked(GtkWidget *widget, gpointer data)
{
    system("xdg-open http://127.0.0.1/phpmyadmin/");
}

static void on_dlive_clicked(GtkWidget *widget, gpointer data)
{
    system("xdg-open https://dlive.tv/");
}

static void on_telegram_clicked(GtkWidget *widget, gpointer data)
{
    system("xdg-open https://web.telegram.org/");
}

static void on_caf_clicked(GtkWidget *widget, gpointer data)
{
    system("xdg-open https://www.caf.fr/");
}

int main(int argc, char *argv[])
{

    gtk_init(&argc, &argv);

    GtkWidget *window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW(window), "Riozacki, My Web Links");

    // Create a grid to hold the buttons
    GtkWidget *grid = gtk_grid_new();
    gtk_grid_set_row_spacing(GTK_GRID(grid), 10);
    gtk_grid_set_column_spacing(GTK_GRID(grid), 10);

    // Create the "Youtube" button
    GtkWidget *youtube_button = gtk_button_new_with_label("Youtube");
    g_signal_connect(youtube_button, "clicked", G_CALLBACK(on_youtube_clicked), NULL);
    gtk_grid_attach(GTK_GRID(grid), youtube_button, 0, 0, 1, 1);

    // Create the "Facebook" button
    GtkWidget *facebook_button = gtk_button_new_with_label("Facebook");
    g_signal_connect(facebook_button, "clicked", G_CALLBACK(on_facebook_clicked), NULL);
    gtk_grid_attach(GTK_GRID(grid), facebook_button, 1, 0, 1, 1);

    // Create the "Linkedin" button
    GtkWidget *linkedin_button = gtk_button_new_with_label("Linkedin");
    g_signal_connect(linkedin_button, "clicked", G_CALLBACK(on_linkedin_clicked), NULL);
    gtk_grid_attach(GTK_GRID(grid), linkedin_button, 2, 0, 1, 1);

    // Create the "Cyberplus" button
    GtkWidget *cyberplus_button = gtk_button_new_with_label("Cyberplus");
    g_signal_connect(cyberplus_button, "clicked", G_CALLBACK(on_cyberplus_clicked), NULL);
    gtk_grid_attach(GTK_GRID(grid), cyberplus_button, 0, 1, 1, 1);

    // Create the "Deepl" button
    GtkWidget *deepl_button = gtk_button_new_with_label("Deepl");
    g_signal_connect(deepl_button, "clicked", G_CALLBACK(on_deepl_clicked), NULL);
    gtk_grid_attach(GTK_GRID(grid), deepl_button, 1, 1, 1, 1);

    // Create the "Reverso Ortographe" button
    GtkWidget *reverso_ortographe_button = gtk_button_new_with_label("Reverso Ortographe");
    g_signal_connect(reverso_ortographe_button, "clicked", G_CALLBACK(on_reverso_ortographe_clicked), NULL);
    gtk_grid_attach(GTK_GRID(grid), reverso_ortographe_button, 2, 1, 1, 1);

    // Create the "Localhost" button
    GtkWidget *localhost_button = gtk_button_new_with_label("Localhost");
    g_signal_connect(localhost_button, "clicked", G_CALLBACK(on_localhost_clicked), NULL);
    gtk_grid_attach(GTK_GRID(grid), localhost_button, 0, 2, 1, 1);

    // PHP button

    // Create the "phpmyadmin" button
    GtkWidget *phpmyadmin_button = gtk_button_new_with_label("phpmyadmin");
    g_signal_connect(phpmyadmin_button, "clicked", G_CALLBACK(on_phpmyadmin_clicked), NULL);
    gtk_grid_attach(GTK_GRID(grid), phpmyadmin_button, 1, 2, 1, 1);

    // Create the "DLive" button
    GtkWidget *dlive_button = gtk_button_new_with_label("DLive");
    g_signal_connect(dlive_button, "clicked", G_CALLBACK(on_dlive_clicked), NULL);
    gtk_grid_attach(GTK_GRID(grid), dlive_button, 2, 2, 1, 1);

    // Create the "Telegram" button
    GtkWidget *telegram_button = gtk_button_new_with_label("Telegram");
    g_signal_connect(telegram_button, "clicked", G_CALLBACK(on_telegram_clicked), NULL);
    gtk_grid_attach(GTK_GRID(grid), telegram_button, 0, 3, 1, 1);

    // Create the "CAF" button
    GtkWidget *caf_button = gtk_button_new_with_label("CAF");
    g_signal_connect(caf_button, "clicked", G_CALLBACK(on_caf_clicked), NULL);
    gtk_grid_attach(GTK_GRID(grid), caf_button, 1, 3, 1, 1);

    // Add the grid to the window
    gtk_container_add(GTK_CONTAINER(window), grid);

    // Connect the "delete-event" signal of the window to the gtk_main_quit function
    g_signal_connect(window, "delete-event", G_CALLBACK(gtk_main_quit), NULL);

    // Show the window and start the GTK+ main loop
    gtk_widget_show_all(window);
    gtk_main();

    return 0;
}