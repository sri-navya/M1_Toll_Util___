# Test Plan
* For every feature, defien a test case
    * How to run that feature
    * Define expected behaviour
    * Capture the actual result

# Table
## High Level Test Plan
|Test ID|Description|Input|Expected output|Actual Output|
|-------|-----------|-----|---------------|-------------|
|1      |Vehicle registration status|user details|[-1]|Not registered|
|2      |vehicle registration status|user details|(0,1)|registered|
|3      |vehicle registration status|vehicle number|(>0)|move up and down,up or down|
## Low Level Test Plan
|Test ID|Description|Input|Expected output|Actual Output|
|-------|-----------|-----|---------------|-------------|
|1      |Vehicle registration status|user details|0| registered,not ready to move|
|2      |Vehicle registration status|user details|[1]|registered,ready to move|
|3      |Vehicle registration status|vehicle no|[1]|up or down direction|
|4    |Vehicle registration status|vehicle no|[2]|up and down direction|
|4    |Vehicle registration status|vehicle no|[3]|Reached maximum tolls|
