from setuptools import find_packages
from setuptools import setup

setup(
    name='tide_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('tide_msgs', 'tide_msgs.*')),
)
