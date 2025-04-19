<a id="readme-top"></a>

<br />
<div align="center">

<h3 align="center">Shellcode Encryptor</h3>

  <p align="center">
    A C++ that XOR encrypts Shellcode in order to obfuscate it
  </p>
</div>

## Getting Started

Follow these steps to run the program.

### Prerequisites

Make sure you have a C++ compiler installed, for example `MinGW`

### Instructions

1. **Clone the repository**
   ```sh
   git clone https://github.com/axelwesselgren/.git
   cd mrkoll.se-scraper
   ```
2. Fill out the two variables `shellcode` and `key`
   ```cpp
   unsigned char shellcode[] =
   const char* key =
   ```

4. **Compile the file**
   - On macOS/Linux:
     ```sh
     g++ encryptor.cpp -o encryptor
     ```

   - On Windows:
     ```sh
     g++ encryptor.cpp -o encryptor.exe
     ```

5. **Run the executable**

   - On macOS/Linux:
     ```sh
     ./encryptor
     ```

   - On Windows:
     ```sh
     encryptor.exe
     ```
<p align="right">(<a href="#readme-top">back to top</a>)</p>

## Contributing

Contributions are what make the open source community such an amazing place to learn, inspire, and create. Any contributions you make are **greatly appreciated**.

If you have a suggestion that would make this better, please fork the repo and create a pull request. You can also simply open an issue with the tag "enhancement".
Don't forget to give the project a star! Thanks again!

1. Fork the Project
2. Create your Feature Branch (`git checkout -b feature/AmazingFeature`)
3. Commit your Changes (`git commit -m 'Add some AmazingFeature'`)
4. Push to the Branch (`git push origin feature/AmazingFeature`)
5. Open a Pull Request

<p align="right">(<a href="#readme-top">back to top</a>)</p>

## ⚠️ Disclaimer

**This project is intended for educational and research purposes only.**  
Use of this tool must comply with all applicable laws and the terms of service of the websites being accessed.  
The author does not condone or encourage any form of misuse, and assumes no liability for actions taken using this code.

## License

Distributed under the MIT license. See `LICENSE` for more information.

<p align="right">(<a href="#readme-top">back to top</a>)</p>
