<div id="top"></div>
<!--
*** Thanks for checking out the Best-README-Template. If you have a suggestion
*** that would make this better, please fork the repo and create a pull request
*** or simply open an issue with the tag "enhancement".
*** Don't forget to give the project a star!
*** Thanks again! Now go create something AMAZING! :D
-->



<!-- PROJECT SHIELDS -->
<!--
*** I'm using markdown "reference style" links for readability.
*** Reference links are enclosed in brackets [ ] instead of parentheses ( ).
*** See the bottom of this document for the declaration of the reference variables
*** for contributors-url, forks-url, etc. This is an optional, concise syntax you may use.
*** https://www.markdownguide.org/basic-syntax/#reference-style-links
-->

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
    <li><a href="#acknowledgments">Acknowledgments</a></li>
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


<p align="right">(<a href="#top">back to top</a>)</p>

<!-- FLOWCHART -->
## Flowchart

<img src="images/>

<p align="right">(<a href="#top">back to top</a>)</p>

<!-- CONTACT -->
## Contact

* Mateo Bonino - [@twitter_handle](https://twitter.com/twitter_handle) - email@email_client.com

* Juan Matías Rossi - [Instagram](https://www.instagram.com/jumaro35/) - [Linkedin](https://www.linkedin.com/in/jmrossi6/) - knuckles116635@gmail.com

Project Link: [https://github.com/SchneiderSix/holbertonschool-printf](https://github.com/SchneiderSix/holbertonschool-printf)

<p align="right">(<a href="#top">back to top</a>)</p>



<!-- ACKNOWLEDGMENTS -->
## Acknowledgments

* []()
* []()
* []()

<p align="right">(<a href="#top">back to top</a>)</p>



<!-- MARKDOWN LINKS & IMAGES -->
<!-- https://www.markdownguide.org/basic-syntax/#reference-style-links -->
[contributors-shield]: https://img.shields.io/github/contributors/github_username/repo_name.svg?style=for-the-badge
[contributors-url]: https://github.com/github_username/repo_name/graphs/contributors
[forks-shield]: https://img.shields.io/github/forks/github_username/repo_name.svg?style=for-the-badge
[forks-url]: https://github.com/github_username/repo_name/network/members
[stars-shield]: https://img.shields.io/github/stars/github_username/repo_name.svg?style=for-the-badge
[stars-url]: https://github.com/github_username/repo_name/stargazers
[issues-shield]: https://img.shields.io/github/issues/github_username/repo_name.svg?style=for-the-badge
[issues-url]: https://github.com/github_username/repo_name/issues
[license-shield]: https://img.shields.io/github/license/github_username/repo_name.svg?style=for-the-badge
[license-url]: https://github.com/github_username/repo_name/blob/master/LICENSE.txt
[linkedin-shield]: https://img.shields.io/badge/-LinkedIn-black.svg?style=for-the-badge&logo=linkedin&colorB=555
[linkedin-url]: https://linkedin.com/in/linkedin_username
[product-screenshot]: images/screenshot.png
[Next.js]: https://img.shields.io/badge/next.js-000000?style=for-the-badge&logo=nextdotjs&logoColor=white
[Next-url]: https://nextjs.org/
[React.js]: https://img.shields.io/badge/React-20232A?style=for-the-badge&logo=react&logoColor=61DAFB
[React-url]: https://reactjs.org/
[Vue.js]: https://img.shields.io/badge/Vue.js-35495E?style=for-the-badge&logo=vuedotjs&logoColor=4FC08D
[Vue-url]: https://vuejs.org/
[Angular.io]: https://img.shields.io/badge/Angular-DD0031?style=for-the-badge&logo=angular&logoColor=white
[Angular-url]: https://angular.io/
[Svelte.dev]: https://img.shields.io/badge/Svelte-4A4A55?style=for-the-badge&logo=svelte&logoColor=FF3E00
[Svelte-url]: https://svelte.dev/
[Laravel.com]: https://img.shields.io/badge/Laravel-FF2D20?style=for-the-badge&logo=laravel&logoColor=white
[Laravel-url]: https://laravel.com
[Bootstrap.com]: https://img.shields.io/badge/Bootstrap-563D7C?style=for-the-badge&logo=bootstrap&logoColor=white
[Bootstrap-url]: https://getbootstrap.com
[JQuery.com]: https://img.shields.io/badge/jQuery-0769AD?style=for-the-badge&logo=jquery&logoColor=white
[JQuery-url]: https://jquery.com 