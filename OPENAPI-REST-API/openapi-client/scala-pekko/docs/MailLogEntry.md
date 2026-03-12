

# MailLogEntry

An email record

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**_id** | **Int** | internal db id | 
**id** | **String** | mail id | 
**from** | **String** | from address | 
**to** | **String** | to address | 
**subject** | **String** | email subject | 
**created** | **String** | creation date | 
**time** | **Int** | creation timestamp | 
**user** | **String** | user account | 
**transtype** | **String** | transaction type | 
**origin** | **String** | origin ip | 
**interface** | **String** | interface name | 
**sendingZone** | **String** | sending zone | 
**bodySize** | **Int** | email body size in bytes | 
**seq** | **Int** | index of email in the to adderess list | 
**recipient** | **String** | to address this email is being sent to | 
**domain** | **String** | to address domain | 
**locked** | **Int** | locked status | 
**lockTime** | **Int** | lock timestamp | 
**assigned** | **String** | assigned server | 
**queued** | **String** | queued timestamp | 
**mxHostname** | **String** | mx hostname | 
**response** | **String** | mail delivery response | 
**messageId** | **String** | message id |  [optional]



