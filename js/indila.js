text1="";
  countt = 0; //char index in string text
  text = "<b>Indila</b> ,Adila Sedraïa dite Indila, née le 26 juin 1984 à Paris ,elle connait un grand succès en 2014 avec son premier album solo, Mini World, qui lui vaut une Victoire de la musique.. "
  function writetext(){
        text1=text1+text[countt];
        document.all["nothing"].innerHTML = text1;
        if (countt == text.length - 1) {
          var mTimer;
          mTimer=setInterval('image()',4000);
          } 
          else{
            countt++;
            setTimeout('writetext()', 10);
          }
    
  }
setTimeout('writetext()', 1000);