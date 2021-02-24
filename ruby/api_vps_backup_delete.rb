#!/usr/bin/env ruby
#
# api_vps_backup_delete
#   scripted in 2015 by detain@interserver.net for the MyAdmin API
#
# deletes one of the vps backups
#
# @param sid string the *Session ID* you get from the [login](#login) call
# @param id int 
# @param name string 
#
require 'savon'

client = Savon.client(wsdl: 'https://my.interserver.net/api.php?wsdl')
response = client.call(
	:api_login, message: {
		username: ARGV[0],
		password: ARGV[1]
})
sid = response.body[:api_login_response][:return]
if (sid == "")
	die("Got a blank session id");
print "got session id ",sid,"\n"
response = client.call(
	:api_vps_backup_delete, message: { 
		sid: ARGV[0], 
		id: ARGV[1], 
		name: ARGV[2], 
})
print response.body[:api_vps_backup_delete_response][:return],"\n"
