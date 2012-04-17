#! /usr/bin/env python

from distutils.core import setup, Extension

setup(name='pydrawer', 
      version='0.0.1', 
      description='A Rendering Library',
      author='Casey Carrington',
      author_email='wccarrington@gmail.com',
      ext_modules=[Extension('pydrawer', ['pydrawer.c'])])
