CMake usage examples
====================

This example demonstrate features of CMake:

Top level rules
---------------

Top level rules (`include_directory`) affect the subdirectories.

Try to comment out this directive in top level CMakeLists.txt and rebuild the app

Dependencies between libraries
------------------------------

This allow to specify only direct dependencies (`c`) for the target `d/d`. CMake will add subdependencies (`a` and `b`). Make life easier for the big complicated projects
