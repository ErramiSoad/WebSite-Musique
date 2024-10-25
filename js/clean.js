text1="";
  countt = 0; //char index in string text
  text = "<b>Clean Bandet</b> ,est un groupe de musique électronique anglais, fondé à Cambridge en 2009. Il est composé de trois membres : Grace Chatto, Luke Patterson et Jack Patterson. Leur style musical emprunte à la musique classique et à la musique électronique. "
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