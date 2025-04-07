
# ImageToASCII

This project provides a C++ implementation that converts images into ASCII art using OpenCV.

## Features

- **Image Conversion**: Transforms input images into ASCII representations.
- **OpenCV Integration**: Leverages OpenCV for image processing tasks.
- **Examples Provided**: Includes sample images and their ASCII outputs in the `examples` directory.

## Prerequisites

- **OpenCV**: Ensure that OpenCV is installed on your system. You can download it from the [official OpenCV website](https://opencv.org/).

## Compilation

To compile the project, follow these steps:

1. **Clone the Repository**:

   ```bash
   git clone https://github.com/shwballl/ImageToASCIIOpencv.git
   ```

2. **Navigate to the Project Directory**:

   ```bash
   cd ImageToASCIIOpencv
   ```

3. **Create a Build Directory**:

   ```bash
   mkdir build
   cd build
   ```

4. **Run CMake**:

   ```bash
   cmake ..
   ```

5. **Build the Project**:

   ```bash
   make
   ```

## Usage

After compilation, you can run the program to convert an image to ASCII. Use the following command:

```bash
./ImageToASCII <path_to_image>
```

Replace `<path_to_image>` with the path to the image you wish to convert.
