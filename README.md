<div id="top"></div>

<!-- PROJECT LOGO -->
<br />
<div align="center">
  <a href="https://github.com/SchneiderSix/holbertonschool-printf">
    <img src="images/logo.png" alt="Logo" width="80" height="80">
  </a>

<h3 align="center">_printf</h3>

  <p align="center">
    Recreate printf in C
    <br />
    <a href="https://github.com/SchneiderSix/holbertonschool-printf"><strong>Explore the docs »</strong></a>
    <br />
    <br />
  </p>
</div>



<!-- TABLE OF CONTENTS -->
<details>
  <summary>Table of Contents</summary>
  <ol>
    <li>
      <a href="#about-the-project">About The Project</a>
    </li>
    <li>
      <a href="#getting-started">Getting Started</a>
    </li>
    <li><a href="#usage">Usage</a></li>
    <li><a href="#flowchart">Flowchart</a></li>
    <li><a href="#contact">Contact</a></li>
  </ol>
</details>



<!-- ABOUT THE PROJECT -->
## About The Project

This is a mandatory project for Holberton School made by two students from cohort 18, Mateo Bonino and Juan Matias Rossi. This project is about recreate or build our own printf function but only for `%c`, `%s`, `%d`, `%i` options.

<p align="right">(<a href="#top">back to top</a>)</p>



<!-- GETTING STARTED -->
## Getting Started

Our printf was made with three files, we have our libraries and our functions definied in our header `main.h`. The operation of the functions are defined in `functions.c` and the main file is `pf.c`.


<!-- USAGE EXAMPLES -->
## Usage

Call the function just like this `_printf` and pass the right parameters, just like with printf. An example would be `_printf("%s", "school")` this is going to print `school`. The main file works with a switch, it detects what is after the `%`, then it calls the right function to do the right conversion returning the lenght and printing the result.

In `funcions.c` there are four functions:

* `void print_char(char a)`
  It prints the given char with the function `write(int fildes, const void *buf, size_t nbytes);`.

* `int print_string(char *s)`
  It prints a string itinerating each character and returning the lenght of the string. If the given string is null then it prints `(null)`.

* `int just_in_case(char a)`
  It is in the default option of the switch because it prints whatever is after the `%` when it doesn't have the right parameter, example `%a`. In cases like `%%` it just prints one `%`. 

* `int print_per_d(int n)`
  It descomposes the given number and prints each decimal place using `void print_char(char a)`. 

<p align="right">(<a href="#top">back to top</a>)</p>

<!-- FLOWCHART -->
## Flowchart

<img src="images/Flowchar.jpg" alt="Logo" width="80" height="80">

<p align="right">(<a href="#top">back to top</a>)</p>

<!-- CONTACT -->
## Contact

* Mateo Bonino - mbonino1810@gmail.com

* Juan Matías Rossi - [Instagram](https://www.instagram.com/jumaro35/) - [Linkedin](https://www.linkedin.com/in/jmrossi6/) - knuckles116635@gmail.com

Project Link: [https://github.com/SchneiderSix/holbertonschool-printf](https://github.com/SchneiderSix/holbertonschool-printf)

<p align="right">(<a href="#top">back to top</a>)</p>
