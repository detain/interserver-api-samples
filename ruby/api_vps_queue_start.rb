#!/usr/bin/env ruby
#
# api_vps_queue_start
#   scripted in 2015 by detain@interserver.net for the MyAdmin API
#
# start a vps
#
# @param sid string the *Session ID* you get from the [login](#login) call
# @param id int 
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
	:api_vps_queue_start, message: {
		sid: ARGV[0],		id: ARGV[1],})
print response.body[:api_vps_queue_start_response][:return],"\n"
