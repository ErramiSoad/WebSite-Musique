text1="";
  countt = 0; //char index in string text
  text = "<b>Ariana Grande</b> ,née le 26 juin 1993 à Boca Raton, en Floride, est une actrice, auteure-compositrice-interprète et productrice américaine d'origine italienne.."
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