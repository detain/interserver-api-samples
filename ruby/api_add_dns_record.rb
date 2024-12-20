#!/usr/bin/env ruby
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
	:api_add_dns_record, message: {
		sid: ARGV[0],		domain_id: ARGV[1],		name: ARGV[2],		content: ARGV[3],		type: ARGV[4],		ttl: ARGV[5],		prio: ARGV[6],})
print response.body[:api_add_dns_record_response][:return],"\n"
