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

#ifndef _AUDIO_H
#define _AUDIO_H

#include <SDL/SDL_mixer.h>
#include <SDL/SDL.h>

#define MAX_SONIDOS 12
#define MAX_MUSICAS  2

/*!
 * \brief Subsistema de audio
 */
class audio
{
	public:
		audio();
		~audio();
		void iniciar(int _hab_sonido, int _hab_musica);
		void play(int indice);
		void play_musica(int indice);

	private:
		int hab_sonido;
		int hab_musica;
		void cargar_sonidos(void);
		void cargar_musicas(void);
		void descargar_sonidos(void);
		void descargar_musicas(void);
		int canal_musica;

		Mix_Chunk *sonidos[MAX_SONIDOS];
		Mix_Music *musicas[MAX_MUSICAS];
		
};

#endif
