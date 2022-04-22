# OPHIUCHUS

This is a sci-fi themed arcade style game built in a two dimensional setting. As the "Space Man", you are tasked with destroying aggressive aliens who have boarded your ship looking to kill you. You must destroy them and their eggs as quickly as possible!

We wanted to create this game as an outlet for all levels of gamers. Ophiuchus allows the user to experience a fast-paced, arcade style game. Older demographics will hopefully experience some nostalgia as a result of our chosen style, while the newer generation will be able to decompress from other events, as this is a "cool-down" type of game. 


## Download

https://github.com/SCCapstone/2-Dimensional/releases/tag/v0.9.1

Only the contents of the OphiuchusV0.9.1 compressed file are necessary.
After extracting, the file containing the .exe is called "WindowsNoEditor".
Do not delete any files in this folder after extracting, they are all necessary to run the game.
When the .zip is extracted to a location of your choice, click on the "Ophiuchus.exe" to play the game. 

## Game Demo Video

![image](https://user-images.githubusercontent.com/89282408/164578694-95b367a9-65a5-4104-8922-0c9f0f6a8c60.png)

## Interesting Screenshots

![image](https://user-images.githubusercontent.com/89282408/164577204-0ad748bf-646a-45e3-bd23-774b04c67a19.png)
![image](https://user-images.githubusercontent.com/89282408/164577024-23da61a2-9bac-4e1a-bf14-58f799d1e661.png)
![image](https://user-images.githubusercontent.com/89282408/164577184-9d37ba3b-c524-4834-bcf1-4e18d03ef2bb.png)
![image](https://user-images.githubusercontent.com/89282408/164577424-a5e8e1b3-2556-4996-9a22-6067bc68b3e4.png)

## Authors

Samuel Bunker: sbunker@email.sc.edu & spbunker10@gmail.com

Max Coughty: coughm66@gmail.com & coughtry@email.sc.edu

Noah Snell: noah.a.snell@gmail.com

Jonathon Duong: jduong@gmail.sc.edu

-----------------------------------------------------------------------------------------------------------------------------------------------------------------------

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

Unit Testing:

The most important unit test as of 1/31/22 tests to make sure that the program successfully spawns in an enemy sprite into the game and will push flags to the output log depending on whether this action was completed correctly. This test is located in Source/Ophiuchus/OphiuchusGameModeBase.cpp. To view this test, the Unreal Engine must be installed on version 4.27 or later. The contents of the main branch on this repository must also be accessible locally. Within Unreal Engine, open the Ophiuchus.uproject file to run the program. When the IDE is open and showing the current project, navigate to Content/Maps/NewMap.umap and open this file. Click the play button on the top-middle of the screen to preview the program. While the program is running, the output log will show flags determining if the enemies are spawning in correctly. 

## Testing Technology

None yet.

## Running Tests

None yet.

## Coding Style

Code with the Google C++ Style Guide
https://google.github.io/styleguide/cppguide.html
