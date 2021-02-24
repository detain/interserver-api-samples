#!/usr/bin/python
#
# api_vps_queue_backup
#   scripted in 2015 by detain@interserver.net for the MyAdmin API
#
# initializes a backup of a vps calling the backup the name parameter or "snap" if
# blank
#
# @param sid string the *Session ID* you get from the [login](#login) call
# @param id int 
# @param name string 
#
from suds.client import Client
client = Client("https://my.interserver.net/api.php?wsdl")
#print client ## shows detailed client info
sid = client.service.api_login(argv[1], argv[2])
if (sid == '')
	die("Got a blank session")
print "Got Session ID "+sid+"\n"
  
result = client.service.api_vps_queue_backup()
print result
