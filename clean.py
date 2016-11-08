import os
import shutil

shutil.rmtree('./Application/Apptest1/CMakeFiles')
shutil.rmtree('./Application/Apptest1/bin')
os.remove('./Application/Apptest1/Makefile')
os.remove('./Application/Apptest1/cmake_install.cmake')

shutil.rmtree('./Lib/Libtest1/CMakeFiles')
shutil.rmtree('./Lib/Libtest1/lib')
os.remove('./Lib/Libtest1/CMakeCache.txt')
os.remove('./Lib/Libtest1/Makefile')
os.remove('./Lib/Libtest1/cmake_install.cmake')

shutil.rmtree('./CMakeFiles')
os.remove('./CMakeCache.txt')
os.remove('./Makefile')
os.remove('./cmake_install.cmake')