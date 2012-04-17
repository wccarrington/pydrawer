#! /usr/bin/env python

from distutils.core import setup, Extension

setup(name='pyframe', 
      version='0.0.1', 
      description='A Game Framework',
      author='Casey Carrington',
      author_email='wccarrington@gmail.com',
      ext_modules=[Extension('pyframe', ['pyframe.c'])])
