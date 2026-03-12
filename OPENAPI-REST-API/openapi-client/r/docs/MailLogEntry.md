# openapi::MailLogEntry

An email record

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**_id** | **integer** | internal db id | 
**id** | **character** | mail id | 
**from** | **character** | from address | 
**to** | **character** | to address | 
**subject** | **character** | email subject | 
**messageId** | **character** | message id | [optional] 
**created** | **character** | creation date | 
**time** | **integer** | creation timestamp | 
**user** | **character** | user account | 
**transtype** | **character** | transaction type | 
**origin** | **character** | origin ip | 
**interface** | **character** | interface name | 
**sendingZone** | **character** | sending zone | 
**bodySize** | **integer** | email body size in bytes | 
**seq** | **integer** | index of email in the to adderess list | 
**recipient** | **character** | to address this email is being sent to | 
**domain** | **character** | to address domain | 
**locked** | **integer** | locked status | 
**lockTime** | **integer** | lock timestamp | 
**assigned** | **character** | assigned server | 
**queued** | **character** | queued timestamp | 
**mxHostname** | **character** | mx hostname | 
**response** | **character** | mail delivery response | 


