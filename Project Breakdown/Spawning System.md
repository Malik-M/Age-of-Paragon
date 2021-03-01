# Spawning System

## Functions
- Allow the user to queue up a certain amount of heroes at a time to run down the battlefield.
- Has a cooldown after selecting to spawn a Hero.
- Allows each hero to play their spawning animation
## Problems & Solutions 
One of the problems I had when I started to create the spawning system was that I wanted each of the Hero’s to play their spawning animations but not have the animations overlap each other as they do spawn. The solutions to this was to take the spawning platforms that I had from the Paragon assets and have each platform represent an area that a Hero could spawn at. This created a new problem for me because I now had characters spawning outside of the desired "path" and would run off the map because they did not see anyone. To fix this I made a system that would spawn the Hero’s on a platform if there was a platform availed [Picture here]. I used collision components to see if the platform was available and set a hard limit of 5 Hero’s spawning at a time.


![Image of Spawning System](https://github.com/Malik-M/Age-of-Paragon/blob/main/Project%20Breakdown/Photos/Spawn%20System.PNG)
