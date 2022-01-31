IMPORTANT: We are having trouble commiting UE4 projects to the repository. We have committed C++ project to demonstrate pushing to the repo. We will update the repo and read-me file when this issue is fixed. We will use Git LFS to solve this issue. 

# 2-Dimensional

This is the Readme file for the 2D-video game we will be creating. This game will be a single player action RPG, where 
the player is on board a ship in space and has to survive against aliens that board the ship. The game will include multiple
levels, and there will be boss enemies that continue the progression of the game. There will also be puzzles, items, and 
upgrades that the player will be able to enjoy.

## External Requirments

This will run off the UE4 (Unreal Engine 4) game engine.
* Epic Games launcher - found on their website.
* Unreal Engine 4 - can be installed for free within the epic games launcher. 

## Setup

No one time run things required. These will not be an issue in UE4.

## Running

To run the project, set you default project path in unreal engine to the cloned repo. The project can then be opened in unreal from the repository. The project can be previewed within UE4 by clicking the "play" button. 

## Deployment

Unreal Engine 4 will compile the project to an executable file when instructed to do so. Run the executable to test the progress of the application.

## Testing

Behavioral Testing: 
To run the behavioral test, first open the game. Under the content folder there is a new folder named "Behavior_Test". Open this folder and double click the map "FTEST_moves".
Next, go to the "Window" tab in the top left corner of the screen. Scrool down to "Developer tools", and then click on "Session frontend". Next, go to the "Automation" tab. Unpack the "Project" tab, then unpack
the "Functional Tests" tab. Finally, checkmark the "Game/Behavior_Test/FTEST_moves" box. Then you can click Start test.

** The test will act like a user playing the game, and dodging up over an obstacle that would block your path. The test will pass after the player gets to the end of the level.

The location of the behavioral test is in a new folder named "Behavior_Test". This is under the content folder of the game. Also, there is a new map/level (FTEST_moves) made 'specifically' for this level.
The new map and new player controller are coded 'specifically' for the test.

Unit Test:
The most important unit test as of 1/31/22 tests to make sure that the program successfully spawns in an enemy sprite into the game and will push flags to the output log depending on whether this action was completed correctly. This test is located in Source/Ophiuchus/OphiuchusGameModeBase.cpp. To view this test, the Unreal Engine must be installed on version 4.27 or later. The contents of the main branch on this repository must also be accessible locally. Within Unreal Engine, open the Ophiuchus.uproject file to run the program. When the IDE is open and showing the current project, navigate to Content/Maps/NewMap.umap and open this file. Click the play button on the top-middle of the screen to preview the program. While the program is running, the output log will show flags determining if the enemies are spawning in correctly. 

## Testing Technology

None yet.

## Running Tests

None yet.

## Authors

Samuel Bunker: sbunker@email.sc.edu & spbunker10@gmail.com
Max Coughty: coughm66@gmail.com & coughtry@email.sc.edu
Josh Sykes: jksykes@email.sc.edu
Noah Snell: 
Jonathan Duong: 

## Coding Style

Code with the Google C++ Style Guide
https://google.github.io/styleguide/cppguide.html
