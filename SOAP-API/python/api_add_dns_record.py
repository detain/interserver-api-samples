#!/usr/bin/python
#
# api_add_dns_record
#   scripted in 2015 by detain@interserver.net for the MyAdmin API
#
# Adds a single DNS record
#
# @param sid string the *Session ID* you get from the [login](#login) call
# @param domain_id int 
# @param name string Specify record name
# @param content string 
# @param type string Specify TYPE of record
# @param ttl int Specify TTL
# @param prio int 
#
from suds.client import Client
client = Client("https://my.interserver.net/api.php?wsdl")
#print client ## shows detailed client info
sid = client.service.api_login(argv[1], argv[2])
if (sid == '')
	die("Got a blank session")
print "Got Session ID "+sid+"\n"
result = client.service.api_add_dns_record()
print result
