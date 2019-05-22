[![PRs Welcome](https://img.shields.io/badge/PRs-welcome-brightgreen.svg?style=flat-square)](http://makeapullrequest.com)
![WIP](https://img.shields.io/badge/Project-EarlyRelease-yellowgreen.svg)

# AdvancedMovementComponent
* Jetpack Added
* Sprinting Added
* Quick Dashing Added
* Curve Options Added
* Based off CharacterMovementComponent in UE4: Network Ready, Supports Rollbacks, Pretty basic for your own needs
* This Repo will only contain updates to these files. It will be up to the user to move to their own project.
* Feel free to make PR if the base can be upgraded at all. 

# Progress Update Video
* [Advanced Movement Component - now with "Jetpack Sounds"](https://www.youtube.com/watch?v=IPu-ed0Nt4k)
* Note, All Animations, textures, meshs will never be included in this plugin

# InProgress
* 1: How to configure(8/7/2018) ETA: December 2018
* Bug fix: Repeated movement inputs after selecting dodge will change directions during dodge. Needs to be a fixed direction for duration of dodge
* Feature: Gravity scale while not pressing inputs, float or curve based - used for faster "falling"
* Bug fix: Check limits for speed and velocity changes on XY. Seams to be a bug that going along X or Y at max speed is fine, but user can go at X and Y at max speed which is double actual max speed

# ToDo
* Wall Running
* Create 3 Video Tutorials for this
* 2: How to intrigrate to Shooter Game
* 3: How to extend this code to support custom logic
