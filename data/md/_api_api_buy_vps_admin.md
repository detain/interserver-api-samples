
## Buy VPS Admin

### About

**API Function Name: api_api_buy_vps_admin**

Purchase a VPS (admins only).   Returns a comma seperated list of invoices if
* any need paid.  Same as client function but allows specifying which server to
* install to if there are resources available on the specified server.


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
$server = $ARGV[12];
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
	-> api_api_buy_vps_admin($sid, $os, $slices, $platform, $controlpanel, $period, $location, $version, $hostname, $coupon, $rootpass, $server);
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
result = client.service.api_api_buy_vps_admin()
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
	:api_api_buy_vps_admin, message: {
		sid: ARGV[0],		os: ARGV[1],		slices: ARGV[2],		platform: ARGV[3],		controlpanel: ARGV[4],		period: ARGV[5],		location: ARGV[6],		version: ARGV[7],		hostname: ARGV[8],		coupon: ARGV[9],		rootpass: ARGV[10],		server: ARGV[11],})
print response.body[:api_api_buy_vps_admin_response][:return],"\n"

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
$server = $_SERVER['argv'][13];
$client = new SoapClient("https://my.interserver.net/api.php?wsdl");
try  { 
	$sid = $client->api_login($username, $password);
	if (strlen($sid) == 0)
		die("Got A Blank Session");
	$res = $client->api_api_buy_vps_admin($sid, $os, $slices, $platform, $controlpanel, $period, $location, $version, $hostname, $coupon, $rootpass, $server);
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
version|int|os field from [get_vps_templates](#get_vps_templates)
hostname|string|Desired Hostname for the VPS
coupon|string|Optional Coupon to pass
rootpass|string|Desired Root Password (unused for windows, send a blank string)
server|int|0 for auto assign otherwise the id of the vps master to put this on


### Response

This function returns an associative array with the following fields

Field|Type|Description
-----|----|-----------
status|string|Location Status
status_text|string|
invoices|string|*Field* *Description*
 | |*invoices_id* ID of the Invoice used for referencing
 | |*invoices_description* Description of what the Invoice was for
 | |*invoices_amount* Cost of the Invoice
 | |*invoices_custid* ID of the Customer this Invoice is for
 | |*invoices_type* The Type of Invoice (1 = charge, 10+ are payment types)
 | |*invoices_date* Date the Invoice was Created
 | |*invoices_group* Billing Group the Invoice falls under, Not currently used
 | |*invoices_extra* If type 1 invoice this points to the repeat invoice id, otherwise points to the id of the charge invoice its a payment for.
 | |*invoices_paid* Whether or not the Invoice was paid (if applicable)
 | |*invoices_module* Module the Invoice was for.  You can use [get_modules](#get-modules) to get a list of available modules.
 | |*invoices_due_date* Date the Invoice is Due
 | |*invoices_service* ID of the Service/Order this Invoice is for such as 1000 if the order was vps1000 and the module was vps
 | |*invoices_deleted* Deleted Flag
cost|float|


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
			<td>status</td>
			<td>error</td>
		</tr>
		<tr>
			<td>status_text</td>
			<td>Password must contain atleast 8 characters, one lowercase letter, one uppercase letter, one number, a special character and autogenerated password filled in it.</td>
		</tr>
		<tr>
			<td>invoices</td>
			<td></td>
		</tr>
		<tr>
			<td>cost</td>
			<td>3</td>
		</tr>
	</tbody>
</table>


