/*
 * Don Ceferino Haza�a - video game similary to Super Pang!
 * Copyright (c) 2004, 2005 Hugo Ruscitti
 * web site: http://www.loosersjuegos.com.ar
 * 
 * This file is part of Don Ceferino Haza�a (ceferino).
 * Written by Hugo Ruscitti <hugoruscitti@yahoo.com.ar>
 *
 * Don Ceferino Haza�a is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * Don Ceferino Haza�a is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 * 
 */
#ifndef _OPCIONES_H
#define _OPCIONES_H

#include <SDL/SDL.h>
#include "escena.h"
#include "grafico.h"

/*!
 * \brief Un estado del juego: menu opciones
 */
class opciones : public escena
{
	public:
		opciones ();
		~opciones ();
		int iniciar(class mundo *_pmundo, int conf_video, SDL_Surface *screen);
		void actualizar(void);
		void imprimir(void);

		void pausar(void);
	
	private:
		SDL_Surface *fondo;
		SDL_Surface *screen;
		
		int pausa;
		int delay;

		void imprimir_pie(void);
};	
#endif
