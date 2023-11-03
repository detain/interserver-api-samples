#!/usr/bin/env ruby
#
# api_api_buy_mail
#   scripted in 2015 by detain@interserver.net for the MyAdmin API
#
# Places an email order
#
# @param sid string the *Session ID* you get from the [login](#login) call
# @param coupon string coupon name
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
	:api_api_buy_mail, message: {
		sid: ARGV[0],		coupon: ARGV[1],})
print response.body[:api_api_buy_mail_response][:return],"\n"
