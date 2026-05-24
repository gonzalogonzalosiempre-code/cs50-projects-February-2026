let Boton1 = document.querySelector("button");
let img = document.querySelector(".img");
let img2 = document.querySelectorAll(".img")[1];
let Boton2 = document.querySelectorAll("button")[1];

Boton1.addEventListener('click', function() {
    if (img.style.display == "none") {
        img.style.display = "block";
    } else {
        img.style.display = "none";
    }});

Boton2.addEventListener('click', function() {
    if (img2.style.display == "none") {
        img2.style.display = "block";
    } else {
        img2.style.display = "none";
    }
});
