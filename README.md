# FPGA: Maze Game

**Final Project for ECE 643**

**Authors:** Andy Freshnock, Aidan Harries, Andrew Sonner

## Introduction

For our final project in ECE 643, our team developed a digital version of the traditional ball bearing maze game. The project required integrating both hardware and software components to replicate the physical experience of the maze game in a digital environment. Our approach used an accelerometer for navigation, a VGA display for visual output, and additional features like a stopwatch and pause switch to enhance the user experience.

## Overall Design Concept

The primary focus of our design was to translate the ball bearing maze game into a digital format. An accelerometer simulates the physical act of tilting the maze, allowing players to navigate the digital ball through the virtual maze displayed on a VGA screen. The ball's movement logic simulates the typical physics of a rolling ball, preserving the original game's fundamental challenge and appeal.

Additional features include a stopwatch for time tracking and a pause switch for gameplay control, complementing the core gameplay while leveraging modern digital interfaces.

## Desired Outcomes / Goals

### Minimum Goals
- **Ball Control:** Smooth movement of the ball on VGA display via accelerometer.
- **Maze Display:** Clearly present maze layout on VGA screen.
- **Collision Mechanics:** Implement basic collision detection with maze walls.
- **Scoring and Timing:** Incorporate system for tracking scores and game duration.
- **Reset Button:** Add reset button for game restarts and timer reset.
- **Graphic Quality:** Use double buffering for VGA graphics.

### Stretch Goals
- **Hazards:** Introduce obstacles to increase difficulty.
- **Interactive Menu:** Develop an in-game menu.
- **Advanced Collisions:** Implement elastic and diagonal collision physics.
- **Complex Mazes:** Design mazes with diagonal paths or curves.
- **Multiple Levels:** Create more maze levels for progressive gameplay.
- **Animations:** Enhance game with animations.
- **Collectables:** Add items within the maze for players to collect.
- **Level Selection:** Implement level select and save feature using SD card.
- **Realistic Physics:** Add inertia to ball movement.
- **Audio Elements:** Integrate sound effects and background music.
- **Score Records:** Keep track of high scores and previous attempts.

## Design Implementation

### Hardware
- **Timer:** Utilized the hex display, created using a built-in 50 MHz clock divided down to a single Hz.
- **LEDs:** Remained off during gameplay until the ball reached the winning square.
- **Reset Push Button and Pause Slider:** Reset the clock and entire game/board, and paused the game.

### Software
The core of the game is a tile map, partitioning the screen into tiles with different properties. This controlled interactions between the user-controlled ball and the game world. The tiles implemented were wall tiles and goal tiles.

The software also included:
- **Accelerometer Monitoring:** Controlled ball movement.
- **VGA Drawing Code:** Displayed the maze and ball.

## Validation and Testing

### Minimum Goals
- **Control Ball with Accelerometer:** Accomplished.
- **Display Maze Layout on VGA:** Accomplished.
- **Basic Collision Detection:** Accomplished.
- **Scoring and Timing:** Accomplished.
- **Reset Button:** Accomplished.
- **Double Buffering for VGA Graphics:** Not met due to complexity.

### Stretch Goals
- **Hazards:** Not met.
- **Interactive Menu:** Not met.
- **Advanced Collisions:** Not met.
- **Complex Mazes:** Not met.
- **Multiple Levels:** Not met.
- **Animations:** Not met.
- **Collectables:** Not met.
- **Level Selection:** Not met.
- **Add Inertia to Ball Physics:** Accomplished.
- **Audio Elements:** Not met.
- **Score Records:** Not met.
- **Pause Switch for Game and Timer:** Accomplished.

## Individual Contributions

- **Andy:** Developed the visual interface, including the maze display and tile map. Set up the GitHub repository.
- **Aidan:** Focused on game logic, collision logic, and visual interfaces.
- **Andrew:** Integrated the score counter and FPGA logic, ensuring hardware-software interface.

## Reflections and Improvements

Challenges included screen flickering, resolved by attempting double buffering (unsuccessfully). Future improvements could focus on refining collision logic and better time/resource management. 

## Summary and Conclusions

We achieved our minimum goals, learning about debugging on the FPGA and developing a game from scratch. The project is designed for future feature additions, allowing further development if desired. Core game logic based on a tile map provides flexibility for enhancements.
