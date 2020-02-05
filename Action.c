Action()
{
	
	
	web_set_sockets_option("SSL_VERSION", "AUTO");

	//web_add_cookie("CONSENT=WP.28343d; DOMAIN=www.google.com");

	//web_add_cookie("NID=197=pIqMYlh-fLEfHnEGjDtuYiXrxR09p2yACKySWYKY4AaJgDYE7JhhNpO5B21YVSK7DmtUcY5ZCt-iLwixudIxHiuD_OTRzyEkuxVj3E8HW53O2IanI2Ox5cOPzPLK4MZzY4WD8_Pae9IsrAs6JkAdCFxGL-GVQe6BCYHvcAd3lxA; DOMAIN=www.google.com");

	web_url("www.google.com", 
		"URL=http://www.google.com/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}
