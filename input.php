<?php
	if(!$id)
	{
		echo("<script>window.location.replace('index.html')</script>");
		exit;
	}

	include "mysql_connect.inc";
?>