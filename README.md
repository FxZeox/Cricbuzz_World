# CricBuzz Management System

## Overview

The CricBuzz Management System is a console-based application developed using C++ that simulates the core functionalities of the CricBuzz application. The project leverages Object-Oriented Programming (OOP) concepts to implement features like player management, team management, match scheduling, and updates on live matches and cricket-related news.

## Features

### Player Management
- **Add Player**: Add new players to the system.
- **Remove Player**: Remove existing players.
- **Search Player**: Search for a player by their details.
- **Update Player**: Update player information.

### Team Management
- **Add Player to Team**: Add players to specific teams.
- **Remove Player from Team**: Remove players from a team.
- **Update Captain and Coach**: Update the captain and coach of a team.
- **Display Team**: View all details of a team, including players and their performance statistics.
- **Admin Login**: Secure access for team modifications via username and password.

### Match Management
- **Conduct Match**: Conduct a previously scheduled match or a new match.
- **Schedule Match**: Schedule new matches or tournaments, specifying teams, venues, and dates.
- **Update Records**: Automatically update player and team rankings, as well as world records, after matches.
- **Display Matches**: View details of upcoming and recent matches.

### News and Updates
- **Browse News**: View news, photos, and videos from recent matches.
- **ICC Rankings**: Search for ICC rankings by team, player, or format (e.g., T20, ODI, Test).

## Classes and Key Functionalities

### 1. Login
Handles admin login functionality.

- **Attributes**:
  - Admin username
  - Admin password

- **Methods**:
  - `set_adName()`, `set_adpass()`: Set admin credentials.
  - `get_adName()`, `get_adpass()`: Retrieve admin credentials.
  - `SignIn()`: Validate login.

### 2. Player (Abstract Class)
Manages player information.

- **Attributes**:
  - Name, shirt number, average, ICC ranking, total runs, matches played, total wickets, etc.

- **Methods**:
  - `addPlayer()`, `removePlayer()`, `searchPlayer()`, `updatePlayer()`, `display()`.

### 3. Team (Inherits Player)
Manages team-specific operations.

- **Attributes**:
  - Team name, ICC rankings, captain, coach, matches won/lost, etc.

- **Methods**:
  - Inherits player management methods.
  - Additional methods: `updateCaptain()`, `updateCoach()`, `displayTeam()`.

### 4. MatchType (Inherits Player)
Handles match and tournament management.

- **Attributes**:
  - Teams, date, venue, match type, tournament name, commentators, umpires, etc.

- **Methods**:
  - `conductMatch()`, `scheduleMatch()`, `updateWorldRecords()`, `updateTeamRanking()`, `updatePlayerRanking()`.

## Installation

### Clone the Repository

``bash
git clone https://github.com/your-username/cricbuzz-management.git

## Installation

### Open in Visual Studio Code

1. Install and open Visual Studio Code.
2. Open the project folder.

### Install Dependencies

Ensure that Visual Studio is installed on your system, along with the necessary C++ development tools.

### Run the Application

1. Open the project in Visual Studio.
2. Build the project using the build option in the IDE.
3. Run the application directly from Visual Studio.

## Usage

### Admin Login
- Enter admin username and password to access the system.

### Manage Teams and Players
- Navigate to the **Teams** menu to add, remove, or update players.
- Update team details like captain and coach.

### Schedule Matches
- Use the **Matches** menu to schedule or conduct matches.
- View upcoming and recent matches.

### View News and Rankings
- Browse recent cricket news and ICC rankings.

## Code Structure

- **Source.cpp**: Main file containing class definitions and main logic.
- **Header.h**: Header file for class declarations.
- **main.cpp**: Call all the functions 

