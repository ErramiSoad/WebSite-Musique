function requiredElement() {

var email = document.getElementById("email").value;
if(email == "") {
alert("Veillez inserer votre Email ou votre numero de telephone ");
document.getElementById("email");
document.getElementById("email").focus();
return false;
}

return true;
}
function validateForm(){
if (!requiredElement()){
return false;
}
else{
confirm("Toutes les donnees sont validees !, Voulez-vous les envoyer ");
}
}