<h2>Nieuws</h2>
<?php

  //Haal het bestand op
  $xml_feed = file_get_contents("http://dejong.fiscaalinfo.nl/rss.xml");

  //Een XML phraser aanmaken
  $xml_praser = xml_parser_create();

  //Verwerking
  xml_parse_into_struct($xml_praser, $xml_feed, $xml_sleutel, $xml_index);
  xml_parser_free($xml_praser);

  //Genereren van headlines
  for($i = 0; !empty($xml_index['ITEM'][$i]); $i++) {
    if($i > 0) {
      echo '<div class="item"><h3><a target="_blank" href="'.$xml_sleutel[$xml_index['LINK'][$i]]['value'].'">'.$xml_sleutel[$xml_index['TITLE'][$i]]['value'].'</a></h3>';
      echo '<div class="bericht">'.$xml_sleutel[$xml_index['DESCRIPTION'][$i]]['value'].'</div></div>';
    }
  }

?>
