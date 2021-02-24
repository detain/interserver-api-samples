#!/usr/bin/python
#
# api_api_buy_mail
#   scripted in 2015 by detain@interserver.net for the MyAdmin API
#
# Places an email order
#
# @param sid string the *Session ID* you get from the [login](#login) call
# @param coupon string 
#
from suds.client import Client
client = Client("https://my.interserver.net/api.php?wsdl")
#print client ## shows detailed client info
sid = client.service.api_login(argv[1], argv[2])
if (sid == '')
	die("Got a blank session")
print "Got Session ID "+sid+"\n"
  
result = client.service.api_api_buy_mail()
print result
