#!/usr/bin/python
#
# api_get_vps_backups
#   scripted in 2015 by detain@interserver.net for the MyAdmin API
#
# Returns a list of all the current VPS backups indicating the VPS ID, the Name of
# the backup, file size, and a download URL
#
# @param sid string the *Session ID* you get from the [login](#login) call
#
from suds.client import Client
client = Client("https://my.interserver.net/api.php?wsdl")
#print client ## shows detailed client info
sid = client.service.api_login(argv[1], argv[2])
if (sid == '')
	die("Got a blank session")
print "Got Session ID "+sid+"\n"
  
result = client.service.api_get_vps_backups()
print result
