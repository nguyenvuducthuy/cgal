// ============================================================================
//
// Copyright (c) 1997-2000 The CGAL Consortium
//
// This software and related documentation is part of an INTERNAL release
// of the Computational Geometry Algorithms Library (CGAL). It is not
// intended for general use.
//
// ----------------------------------------------------------------------------
//
// file          : include/CGAL/IO/Qt_Scene_Show_triangulation.h
// package       : QT_window
// author(s)     : Radu Ursu
// release       : 
// release_date  : 
//
// coordinator   : Laurent Rineau <rineau@clipper.ens.fr>
//
// ============================================================================

#ifndef CGAL_QT_SCENE_SHOW_TRIANGULATION_H
#define CGAL_QT_SCENE_SHOW_TRIANGULATION_H

#include <CGAL/IO/Qt_Scene.h>
#include <qobject.h>

namespace CGAL {

template <class T>
class Qt_scene_show_triangulation : public Qt_scene
{
    //Q_OBJECT
public:
	
	Qt_scene_show_triangulation(T &t) : tr(t){};


	void draw_scene(Qt_widget &widget)
	{
		widget << CGAL::BLUE; 
		widget << tr;
	};
	
private:
	T	&tr;
};//end class 

} // namespace CGAL

#endif // CGAL_QT_WINDOW_GET_SEGMENT_H
