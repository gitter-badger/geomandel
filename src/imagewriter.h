/*
This file is part of geomandel. Mandelbrot Set infused by GeoTIFF
Copyright © 2015, 2016 Christian Rapp

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef IMAGEWRITER_H
#define IMAGEWRITER_H

#include <fstream>
#include <string>
#include <cmath>

#include "buffwriter.h"
#include "global.h"

class Imagewriter : public Buffwriter
{
public:
    Imagewriter(const constants::mandelbuff &buff,
                const constants::OUT_FORMAT format,
                const constants::COL_ALGO col_algo, const int maxiter);
    virtual ~Imagewriter();

    void write_buffer();

private:
    /* data */
    const constants::OUT_FORMAT format;
    const constants::COL_ALGO col_algo;
    const int maxiter;
};

#endif /* ifndef IMAGEWRITER_H */
