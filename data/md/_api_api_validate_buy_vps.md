
## Validate Buy VPS

### About

**API Function Name: api_api_validate_buy_vps**

Checks if the parameters for your order pass validation and let you know if
* there are any errors. It will also give you information on the pricing
* breakdown.


### Sample Code

```perl
#!/usr/bin/perl -w
use SOAP::Lite;

$username = $ARGV[0];
$password = $ARGV[1];
$os = $ARGV[2];
$slices = $ARGV[3];
$platform = $ARGV[4];
$controlpanel = $ARGV[5];
$period = $ARGV[6];
$location = $ARGV[7];
$version = $ARGV[8];
$hostname = $ARGV[9];
$coupon = $ARGV[10];
$rootpass = $ARGV[11];
$client = SOAP::Lite
	-> uri('urn:myapi')
	-> proxy('https://my.interserver.net/api.php?wsdl');
$sid = $client
	-> api_login($username, $password)
	-> result;
if (length($sid) == 0)  {
	die "Got A Blank Session";
} 
$res = $client
	-> api_api_validate_buy_vps($sid, $os, $slices, $platform, $controlpanel, $period, $location, $version, $hostname, $coupon, $rootpass);
die $res->faultstring if ($res->fault);
print "Response:\n",$res->result,"\n";

```

```python
#!/usr/bin/python
from suds.client import Client
client = Client("https://my.interserver.net/api.php?wsdl")
#print client ## shows detailed client info
sid = client.service.api_login(argv[1], argv[2])
if (sid == '')
	die("Got a blank session")
print "Got Session ID "+sid+"\n"
  
result = client.service.api_api_validate_buy_vps()
print result

```

```ruby
#!/usr/bin/env ruby
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
	:api_api_validate_buy_vps, message: { 
		sid: ARGV[0], 
		os: ARGV[1], 
		slices: ARGV[2], 
		platform: ARGV[3], 
		controlpanel: ARGV[4], 
		period: ARGV[5], 
		location: ARGV[6], 
		version: ARGV[7], 
		hostname: ARGV[8], 
		coupon: ARGV[9], 
		rootpass: ARGV[10], 
})
print response.body[:api_api_validate_buy_vps_response][:return],"\n"

```

```php
<?php
ini_set("soap.wsdl_cache_enabled", "0");
$username = $_SERVER['argv'][1];
$password = $_SERVER['argv'][2];
$os = $_SERVER['argv'][3];
$slices = $_SERVER['argv'][4];
$platform = $_SERVER['argv'][5];
$controlpanel = $_SERVER['argv'][6];
$period = $_SERVER['argv'][7];
$location = $_SERVER['argv'][8];
$version = $_SERVER['argv'][9];
$hostname = $_SERVER['argv'][10];
$coupon = $_SERVER['argv'][11];
$rootpass = $_SERVER['argv'][12];
$client = new SoapClient("https://my.interserver.net/api.php?wsdl");
try  { 
	$sid = $client->api_login($username, $password);
	if (strlen($sid) == 0)
		die("Got A Blank Session");
	$res = $client->api_api_validate_buy_vps($sid, $os, $slices, $platform, $controlpanel, $period, $location, $version, $hostname, $coupon, $rootpass);
	echo '$res = '.var_export($res, true)."\n";
 } catch (Exception $ex) {
	echo "Exception Occurred!\n";
	echo "Code:{$ex->faultcode}\n";
	echo "String:{$ex->faultstring}\n";
}; 
?>
```



### Request

This call takes the following parameters:

Parameter|Type|Description
---------|----|-----------
sid|string|the *Session ID* you get from the [login](#login) call
os|string|file field from [get_vps_templates](#get_vps_templates)
slices|int|1 to 16 specifying the scale of the VPS resources you want (a 3 slice has 3x the resources of a 1 slice vps)
platform|string|platform field from the [get_vps_platforms_array](#get_vps_platforms_array)
controlpanel|string|none, cpanel, or da for None, cPanel, or DirectAdmin control panel addons, only available with CentOS
period|int|1-36, How frequently to be billed in months. Some discounts as given based on the period
location|int|id field from the [get_vps_locations_array](#get_vps_locations_array)
version|string|os field from [get_vps_templates](#get_vps_templates)
hostname|string|Desired Hostname for the VPS
coupon|string|Optional Coupon to pass
rootpass|string|Desired Root Password (unused for windows, send a blank string)


### Response

This function returns an associative array with the following fields

Field|Type|Description
-----|----|-----------
coupon_code|int|
service_cost|float|
slice_cost|float|
service_type|int|
repeat_slice_cost|float|
original_slice_cost|float|
original_cost|float|
repeat_service_cost|float|
monthly_service_cost|float|
custid|int|Customer ID
os|string|file field from [get_vps_templates](#get_vps_templates)
slices|int|1 to 16 specifying the scale of the VPS resources you want (a 3 slice has 3x the resources of a 1 slice vps)
platform|string|platform field from the [get_vps_platforms_array](#get_vps_platforms_array)
controlpanel|string|none, cpanel, or da for None, cPanel, or DirectAdmin control panel addons, only available with CentOS
period|int|1-36, How frequently to be billed in months. Some discounts as given based on the period
location|int|id field from the [get_vps_locations_array](#get_vps_locations_array)
version|string|os field from [get_vps_templates](#get_vps_templates)
hostname|string|Desired Hostname for the VPS
coupon|string|Optional Coupon to pass
rootpass|string|Desired Root Password (unused for windows, send a blank string)
status_text|string|
status|string|Location Status


### Example Response

<table>
	<thead>
		<tr>
			<th>Field</th>
			<th>Value</th>
		</tr>
	</thead>
	<tbody>
		<tr>
			<td>coupon_code</td>
			<td>0</td>
		</tr>
		<tr>
			<td>service_cost</td>
			<td>6</td>
		</tr>
		<tr>
			<td>slice_cost</td>
			<td>6</td>
		</tr>
		<tr>
			<td>service_type</td>
			<td>31</td>
		</tr>
		<tr>
			<td>repeat_slice_cost</td>
			<td>6</td>
		</tr>
		<tr>
			<td>original_slice_cost</td>
			<td>6</td>
		</tr>
		<tr>
			<td>original_cost</td>
			<td>6</td>
		</tr>
		<tr>
			<td>repeat_service_cost</td>
			<td>6</td>
		</tr>
		<tr>
			<td>monthly_service_cost</td>
			<td>6</td>
		</tr>
		<tr>
			<td>custid</td>
			<td>160884</td>
		</tr>
		<tr>
			<td>os</td>
			<td>ubuntu-15.04-x86_64.tar.gz</td>
		</tr>
		<tr>
			<td>slices</td>
			<td>1</td>
		</tr>
		<tr>
			<td>platform</td>
			<td>openvz</td>
		</tr>
		<tr>
			<td>controlpanel</td>
			<td>none</td>
		</tr>
		<tr>
			<td>period</td>
			<td>1</td>
		</tr>
		<tr>
			<td>location</td>
			<td>1</td>
		</tr>
		<tr>
			<td>version</td>
			<td>ubuntu</td>
		</tr>
		<tr>
			<td>hostname</td>
			<td>myserver.mydomain.com</td>
		</tr>
		<tr>
			<td>coupon</td>
			<td></td>
		</tr>
		<tr>
			<td>rootpass</td>
			<td>sampleP4ssw0rd</td>
		</tr>
		<tr>
			<td>status_text</td>
			<td>Password must contain atleast 8 characters, one lowercase letter, one uppercase letter, one number, a special character and autogenerated password filled in it.</td>
		</tr>
		<tr>
			<td>status</td>
			<td>error</td>
		</tr>
	</tbody>
</table>


