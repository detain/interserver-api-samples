# IO.Swagger.Model.MailLogEntry
## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Id** | **int?** | internal db id | 
**Id** | **string** | mail id | 
**From** | **string** | from address | 
**To** | **string** | to address | 
**Subject** | **string** | email subject | 
**MessageId** | **string** | message id | [optional] 
**Created** | **string** | creation date | 
**Time** | **int?** | creation timestamp | 
**User** | **string** | user account | 
**Transtype** | **string** | transaction type | 
**Origin** | **string** | origin ip | 
**_Interface** | **string** | interface name | 
**SendingZone** | **string** | sending zone | 
**BodySize** | **int?** | email body size in bytes | 
**Seq** | **int?** | index of email in the to adderess list | 
**Recipient** | **string** | to address this email is being sent to | 
**Domain** | **string** | to address domain | 
**Locked** | **int?** | locked status | 
**LockTime** | **int?** | lock timestamp | 
**Assigned** | **string** | assigned server | 
**Queued** | **string** | queued timestamp | 
**MxHostname** | **string** | mx hostname | 
**Response** | **string** | mail delivery response | 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)

