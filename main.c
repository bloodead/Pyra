#include <gtk/gtk.h>
#include "base.h"

int	main(int argc, char** argv)
{
	(void)		argc;
	(void)		argv;
	env_room	room;

	gtk_init(&argc, &argv);
	init_room(&room);
	return (0);
}
