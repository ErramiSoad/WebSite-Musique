text1="";
  countt = 0; //char index in string text
  text = "<b>Saad Lmjarred</b> ,né le 7 avril 1985 à Rabat1. Il a grandi au milieu d'une famille d'artistes marocaine ,il est le fils du chanteur Bachir Lamjarred, plus connu sous le nom de Bachir Abdou, et de l'actrice Nezha Regragui. Il choisit donc comme vocation le chant et la musique. Très tôt il apprend à jouer du piano, ce qui le mènera à chanter et à choisir le même métier que son père. "
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