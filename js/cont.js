function requiredElement() {

var email = document.getElementById("email").value;
var passe = document.getElementById("passe").value;
if(email == "") {
alert("Veillez inserer votre Email ");
document.getElementById("email");
document.getElementById("email").focus();
return false;
}
if(passe == "") {
alert("Veillez inserer un mot de passe");
document.getElementById("passe");
document.getElementById("passe").focus();
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