# Spawning System

## Goal
I wanted to have a spawing system that allow the user to queue up a certian amount of heros at a time to run down the battlefield.
## Problems & Solutions 
One of the problems I had when I started to create the spawning system was that I wanted each of the Heros to play their spawning animations but not have the animations overlap each other as they do spawn. The solutions to this was to take the spawning platforms that I had from the Paragon assets and have each platform represent an area that a Hero could spawn at. This created a new problem for me becasue I now had characters spawning outside of the desired "path" and would run off the map because the did not see anyone. To fix this I made a system that would spawn the Heros on a platform if there was a platform avaible[Picture here]. I used colision components to see if the platform was avaiable and set a hard limit of 5 Heros spawning at a time.
