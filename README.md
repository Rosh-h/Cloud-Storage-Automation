# Cloud-Storage-Automation
C++ tools for automating cloud storage infrastructure.
# Cloud Storage Automation

This project provides a simple set of C++ tools for automating cloud storage infrastructure. The project includes functionalities for provisioning, monitoring, and scaling cloud storage resources.

## Features

- **Provision Storage**: Allocates initial storage resources.
- **Monitor Storage**: Monitors and reports current storage usage.
- **Scale Storage**: Increases storage capacity when needed.

## Project Structure

- `include/storage_automation.h`: Header file defining the `CloudStorageAutomation` class.
- `src/main.cpp`: Main program that uses the `CloudStorageAutomation` class to perform tasks.
- `README.md`: Project documentation.

## Requirements

- C++ compiler (e.g., g++)

## Usage

To compile and run the project:

```bash
make
./cloud_storage_automation

Outputs:
Provision Storage:

The program outputs a message indicating the provisioning of cloud storage and the allocated storage size.
Example Output:
bash
Copy code
Provisioning cloud storage...
Allocated 100GB storage.
Monitor Storage:

The program outputs a message showing the current storage usage relative to the total allocated storage.
Example Output:
bash
Copy code
Monitoring cloud storage usage...
Current usage: 45GB of 100GB.
Scale Storage:

The program outputs a message indicating that the storage is being scaled up and shows the new total storage size.
Example Output:
bash
Copy code
Scaling cloud storage...
Scaled up to 200GB storage.
Summary:
Input: The inputs are the internal processes defined in the program (provisioning, monitoring, scaling).
Output: The outputs are console messages that simulate the results of these processes, such as storage allocation, usage monitoring, and scaling.
This project is a simplified simulation, primarily for educational purposes, and does not involve actual cloud operations or user inputs during execution. The output demonstrates how the system might behave in a real cloud environment, providing insights into how automation could be handled for cloud storage management.

