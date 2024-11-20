# Project Overview
This project is the engineering package that contestants need to download for the competition. Contestants are required to implement the CEEngine class within the project.
The evaluation program will compile the modified project code submitted by the contestants and test the interfaces of the CEEngine class implemented by the contestants.
For any issues not clarified or unclear in other competition instructions and this document, please contact the competition support staff.
For local debugging, create the build folder in the current directory and run the following compilation commands in the build directory:
```
mkdir build
cd build
cmake ..
make
./main
```

# Notes
1. It is recommended that you do not print logs frequently. Log implementation in the formal environment may generate synchronous and asynchronous I/O behaviors, which affects the performance of contestants.
2. Contestants can only modify the CEEngine class or add other classes. Modifications to other defined files are invalid in submissions.
3. The competition organizers do not recommend using third-party libraries through linking, and multi-threading is prohibited. If third-party libraries are needed, it is recommended to copy the source code into the project. If linking is required, please debug it yourself as we do not provide support.
4. Self-built header files should be placed in the include folder. If there are subfolders, when referencing, please use the relative path with include as the root, as the header file path is only recognized as the include directory during official compilation:
   + For example, if the header file is include/header_1.h, the inclusion method is `#include "header_1.h"`
   + For example, if the header file is include/my_folder/header_2.h, the inclusion method is `#include "my_folder/header_2.h"`
   + In addition to the relative path with include as the root, it is also acceptable to use the relative path where the current (cpp, c, cc) file is located to include header files.
5. Self-built cpp files can only be placed in the src directory and may contain subdirectories, as the cpp search directory is only recognized as the src directory during official compilation.
6. When contestants submit, they should package this project into a tar.gz file. The tar.gz file should package the entire CardinalityEstimation directory, not the contents under the directory, i.e., the final tar.gz file root directory should only have one directory named CardinalityEstimation.
7. The actual evaluation program will not depend on the CMakeLists.txt under this project, so contestants can modify the cmake properties at will to meet local debugging needs.
8. We have conducted UT tests for the parts of the base code that contestants cannot modify (such as some structures), but there is still a possibility that there may be BUGs. If contestants find issues that affect participation, please contact us in time.

# Project Structure Description
+ include: The directory for placing header files.
+ src: The directory for placing cpp files.
