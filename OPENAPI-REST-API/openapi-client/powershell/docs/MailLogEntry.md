# MailLogEntry
## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Id** | **Int32** | internal db id | 
**Id** | **String** | mail id | 
**VarFrom** | **String** | from address | 
**To** | **String** | to address | 
**Subject** | **String** | email subject | 
**MessageId** | **String** | message id | [optional] 
**Created** | **String** | creation date | 
**Time** | **Int32** | creation timestamp | 
**User** | **String** | user account | 
**Transtype** | **String** | transaction type | 
**Origin** | **String** | origin ip | 
**Interface** | **String** | interface name | 
**SendingZone** | **String** | sending zone | 
**BodySize** | **Int32** | email body size in bytes | 
**Seq** | **Int32** | index of email in the to adderess list | 
**Recipient** | **String** | to address this email is being sent to | 
**Domain** | **String** | to address domain | 
**Locked** | **Int32** | locked status | 
**LockTime** | **Int32** | lock timestamp | 
**Assigned** | **String** | assigned server | 
**Queued** | **String** | queued timestamp | 
**MxHostname** | **String** | mx hostname | 
**Response** | **String** | mail delivery response | 

## Examples

- Prepare the resource
```powershell
$MailLogEntry = Initialize-PSOpenAPIToolsMailLogEntry  -Id 103172 `
 -Id 17c7eda538e0005d03 `
 -VarFrom person@mysite.com `
 -To client@isp.com `
 -Subject sell 0.005 shares `
 -MessageId &lt;vmiLEebsuCbSpUxD7oN3REpaN4VbN6BrdCAbNKIrdAo@relay0.mailbaby.net&gt; `
 -Created 2021-10-14 08:50:10 `
 -Time 1634215809 `
 -User mb5658 `
 -Transtype ESMTPSA `
 -Origin 199.231.189.154 `
 -Interface feeder `
 -SendingZone interserver `
 -BodySize 63 `
 -Seq 1 `
 -Recipient client@isp.com `
 -Domain interserver.net `
 -Locked 1 `
 -LockTime 1634215818533 `
 -Assigned relay1 `
 -Queued 2021-10-14T12:50:15.487Z `
 -MxHostname mx.j.is.cc `
 -Response 250 2.0.0 Ok queued as C91D83E128C
```

- Convert the resource to JSON
```powershell
$MailLogEntry | ConvertTo-JSON
```

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)

