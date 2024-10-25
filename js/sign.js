function requiredElement() {
var nom = document.getElementById("nom").value; //hna had nom li dakhl getElementById rah hya dik var li kadiri f id="nom" wst l input dyalk
var email = document.getElementById("email").value;
var m2 = document.getElementById("passe").value;

if(nom== "") {
alert("Veillez inserer votre Nom");
document.getElementById("nom");   
document.getElementById("nom").focus();
//nom.focus(); 
return false;
}
if(email == "") {
alert("Veillez inserer votre Email ou votre numero ");
document.getElementById("email");
document.getElementById("email").focus();
return false;
}
if(m2 == "") { 
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