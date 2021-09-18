cmake_minimum_required(VERSION 3.14)
project(Polygons_mipt_sem3)

set(CMAKE_CXX_STANDARD 20)

add_executable(Polygons_mipt_sem3 main.cpp src/Dot/Dot.cpp src/Dot/Dot.h src/Polygon/RegularPoly/RegularPoly.cpp src/Polygon/RegularPoly/RegularPoly.h src/Polygon/Segment/Segment.cpp src/Polygon/Segment/Segment.h src/Polygon/Triangle/Triangle.cpp src/Polygon/Triangle/Triangle.h src/Polygon/Quadrilateral/Quadrilateral.cpp src/Polygon/Quadrilateral/Quadrilateral.h src/Polygon/Polygon.cpp src/Polygon/Polygon.h)
