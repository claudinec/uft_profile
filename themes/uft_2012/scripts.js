$(document).ready(function() {
$("#header-top label").overlabel();
});

function showLogin()
	{
		if(document.getElementById("login_bar").style.display=="block")
		{
			document.getElementById("login_bar").style.display="none";
		}
		else
		{
			document.getElementById("login_bar").style.display="block";
		}
	}