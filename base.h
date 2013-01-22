#ifndef	_BASE_H_
#define	_BASE_H_

typedef struct	s_env_room
{
	GtkWidget*	label;
	GtkWidget**	button;
	GtkWidget**	hbox;
	GtkWidget*	window;
	GtkWidget*	vbox;

}		env_room;

int	init_room(env_room* room);

#endif
