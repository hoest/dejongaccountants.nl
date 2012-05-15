<?php
  header("Content-type: text/html; charset=UTF-8");
  
  include('header.inc');
  if($_GET['p']!=NULL && $_GET['p']!='' && file_exists($_GET['p'].'.inc')) {
    include($_GET['p'].'.inc');
  } else if($_GET['p']!=NULL && $_GET['p']!='' && !file_exists($_GET['p'].'.inc')) {
    include('error.inc');
  } else {
    include('home.inc');
  }
  include('footer.inc');
?>