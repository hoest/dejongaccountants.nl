<?php echo('<?xml version="1.0" encoding="utf-8"?>') ?>
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Strict//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd">
<?php
  // determine pagetitle
  $pagetitle = '';

  if($_GET['p'] == 'adres') {
    $pagetitle = ' - Adresgegevens';
  } else if($_GET['p'] == 'vacatures') {
    $pagetitle = ' - Vacatures';
  } else if($_GET['p'] == 'vacatures_assistent') {
    $pagetitle = ' - Vacatures';
  } else if($_GET['p'] == 'vacatures_salarisadmin') {
    $pagetitle = ' - Vacatures';
  } else if($_GET['p'] == 'links') {
    $pagetitle = ' - Links';
  } else if($_GET['p'] == 'online') {
    $pagetitle = ' - Online diensten';
  } else if($_GET['p'] == 'boekhouding') {
    $pagetitle = ' - Online boekhouding';
  } else if($_GET['p'] == 'klachten') {
    $pagetitle = ' - Klachtenregeling';
  } else if($_GET['p'] == 'voorwaarden') {
    $pagetitle = ' - Algemene voorwaarden';
  }
?>
<html xml:lang="nl" lang="nl" xmlns="http://www.w3.org/1999/xhtml">
  <head>
    <title>De Jong Accountants Belastingadviseurs<?php echo($pagetitle); ?></title>
    <meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
    <meta name="keywords" content="De Jong, Accountant, Accountancy, Belasting, Belastingadviseur, De Jong Accountants Belastingadviseurs, Soest, Amersfoort, Baarn, Utrecht, Eemland, midden- en kleinbedrijf, MKB, Financien, Financieel, Advies, AA Accountant, NOvAA" />
    <meta name="description" content="Wij zijn een middelgroot zelfstandig werkzaam accountantskantoor en al lange tijd werkzaam in de regio Eemland. Als AA-Accountant zijn wij gespecialiseerd in het midden- en kleinbedrijf en hechten veel waarde aan persoonlijk contact." />
    <meta http-equiv="content-language" content="nl" />
    <meta name="robots" content="all" />
    <meta name="generator" content="Hoest Internet Productions" />
    <link rel="home" href="http://www.hoest.nl/" />
    <style type="text/css">
      @import url('./css/dejong.css');

      body {
<?php if($_GET['p']!=NULL && $_GET['p']!='') { ?>
        background-image: url('./images/<?php echo($_GET['p']); ?>.jpg');
<?php } else { ?>
        background-image: url('./images/home.jpg');
<?php } ?>
      }
    </style>
    <!--[if lt IE 7.]>
      <script defer type="text/javascript" src="./js/pngfix.js"></script>
      <style type="text/css">@import url('./css/ie6.css');</style>
    <![endif]-->
<?php if($_GET['p']=='adres') { ?>
    <script src="http://maps.google.com/maps?file=api&amp;v=2&amp;key=ABQIAAAAEcFDIqxP-9lfGhTD9gx_XxQ-c9ql-be0r6mJtvzW0T2hp2MNdhQ1Q9QHHQSknuYYtgbV5VoHxRz-UA" type="text/javascript"></script>
    <script type="text/javascript">
      //<![CDATA[
      function load() {
        if (GBrowserIsCompatible()) {
          var map = new GMap2(document.getElementById("map"));
          var deJongLng = new GLatLng(52.189457,5.290303);

          map.addControl(new GLargeMapControl());
          map.addControl(new GMapTypeControl());

          map.enableScrollWheelZoom();

          geocoder = new GClientGeocoder();

          var icon = new GIcon();
          icon.image = "http://www.dejongaccountants.nl/images/icon.gif";
          icon.iconSize = new GSize(30, 21);
          icon.iconAnchor = new GPoint(6, 20);
          icon.infoWindowAnchor = new GPoint(5, 1);

          function showAddress(address) {
            if (geocoder) {
              geocoder.getLatLng(
                address,
                function(point) {
                  if (!point) {
                    alert(address + " not found");
                  } else {
                    map.setCenter(point, 17, G_HYBRID_MAP);
                    var marker = new GMarker(point, icon);
                    map.addOverlay(marker);
                    //marker.openInfoWindowHtml('De Jong Accountants Belastingadviseurs');
                  }
                }
              );
            }
          }

          showAddress('Burgemeester Grothestraat 35, Soest, The Netherlands');
        }
      }

      window.onload = function() {
        load();
      }

      window.onunload = function() {
        GUnload();
      }
      //]]>
    </script>
<?php } ?>
  </head>
<?php if($_GET['p']!=NULL && $_GET['p']!='') { ?>
  <body class="<?php echo($_GET['p']); ?>">
<?php } else { ?>
  <body>
<?php } ?>
    <div id="main">
      <div id="header">
        <h1>
          <a href="./?p=home">
            <span>De Jong Accountants Belastingadviseurs</span>
          </a>
        </h1>
        <div id="social">
          <a title="Volg ons op Facebook"
             href="http://www.facebook.com/pages/De-Jong-Accountants-en-Belastingadviseurs/177096265656584"
             target="_blank"><img src="./images/facebook.jpg" width="26" height="26" alt="Volg ons op Facebook" /></a>
          <a title="Volg ons op LinkedIn"
             href="http://www.linkedin.com/company/de-jong-accountants-en-belastingadviseurs"
             target="_blank"><img src="./images/linkedin.jpg" width="26" height="26" alt="Volg ons op LinkedIn" /></a>
        </div>
      </div>
      <div id="menu">
        <ul>
          <li><a href="./?p=home">Informatie</a></li>
          <li><a href="./?p=adres">Adresgegevens</a></li>
          <!--li><a href="./?p=vacatures">Vacatures</a></li-->
          <li><a href="./?p=boekhouding">Online boekhouding</a></li>
          <li><a href="https://dejong.portal4collaboration.nl/" target="_blank">Cli&#235;ntenportaal</a></li>
          <li><a href="https://psonline.unit4saas.com/25000455" target="_blank">Salaris Online</a></li>
          <li><a href="./?p=aanmelden">Aanmelden nieuwsbrief</a></li>
          <li><a href="./?p=nieuws">Laatste nieuws</a></li>
          <li><a href="./?p=links">Links</a></li>
          <!-- li><a href="./?p=klachten">Klachtenregeling</a></li -->
        </ul>
        <div id="aa_btn">
          <a href="https://www.nba.nl/" target="_blank"><img src="./images/nba-logo.jpg" width="70" height="70" alt="Nederlandse Beroepsorganisatie van Accountants" /></a>
        </div>
      </div>
      <div id="page">
