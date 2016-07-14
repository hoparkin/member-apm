<?
	$dbconn = mysql_connect("http://59.11.230.81/", "root", "heewonfg89WQ21") or die("DB 서버 연결에 실패하였습니다.");
	$status = mysql_select_db("book", $dbconn);

	if(!$status) {
		$errNO = mysql_errno($dbconn);
		$errMSG = mysql_error($dbconn);
		echo("서버의 sample 데이터베이스 연결에 실패하였습니다!<br>");
		echo("에러코드 $errNO : $errMSG<br>");
		exit;
	}
?>