text1="";
  countt = 0; //char index in string text
  text = "<b>Bts</b> ,connu sous le nom de Bangtan Boys, est un boys band sud-coréen, originaire de Séoul.<br> Il est formé en 2013 par Big Hit Entertainment et se compose de sept membres appelés RM, Jin, Suga, J-Hope, Jimin, V et Jungkook. "
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