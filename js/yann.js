text1="";
  countt = 0; //char index in string text
  text = "<b>Yann Tiersen</b> ,né le 23 juin 1970 à Brest, est un auteur-compositeur et musicien multi-instrumentiste français. "
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