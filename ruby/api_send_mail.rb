#!/usr/bin/env ruby
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
	:api_send_mail, message: { 
		sid: ARGV[0], 
		subject: ARGV[1], 
		body: ARGV[2], 
		to: ARGV[3], 
		from: ARGV[4], 
})
print response.body[:api_send_mail_response][:return],"\n"
