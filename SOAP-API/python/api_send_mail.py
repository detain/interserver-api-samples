#!/usr/bin/python
#
# api_send_mail
#   scripted in 2015 by detain@interserver.net for the MyAdmin API
#
# Sends An email through one of your mail orders
#
# @param sid string the *Session ID* you get from the [login](#login) call
# @param subject string 
# @param body string 
# @param to string 
# @param from string 
#
from suds.client import Client
client = Client("https://my.interserver.net/api.php?wsdl")
#print client ## shows detailed client info
sid = client.service.api_login(argv[1], argv[2])
if (sid == '')
	die("Got a blank session")
print "Got Session ID "+sid+"\n"
result = client.service.api_send_mail()
print result
