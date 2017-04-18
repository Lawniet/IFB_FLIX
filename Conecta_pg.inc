<?php
$str_conexao = "dbname=dvdrental port=5432 user=postgres password=postgres";
if(!($conexao=pg_connect($str_conexao)))
{
	echo "Não houve conexão com o banco de dados!";
	exit;
}
?>
