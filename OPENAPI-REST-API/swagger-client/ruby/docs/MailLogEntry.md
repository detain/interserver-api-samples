# SwaggerClient::MailLogEntry

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**_id** | **Integer** | internal db id | 
**id** | **String** | mail id | 
**from** | **String** | from address | 
**to** | **String** | to address | 
**subject** | **String** | email subject | 
**message_id** | **String** | message id | [optional] 
**created** | **String** | creation date | 
**time** | **Integer** | creation timestamp | 
**user** | **String** | user account | 
**transtype** | **String** | transaction type | 
**origin** | **String** | origin ip | 
**interface** | **String** | interface name | 
**sending_zone** | **String** | sending zone | 
**body_size** | **Integer** | email body size in bytes | 
**seq** | **Integer** | index of email in the to adderess list | 
**recipient** | **String** | to address this email is being sent to | 
**domain** | **String** | to address domain | 
**locked** | **Integer** | locked status | 
**lock_time** | **Integer** | lock timestamp | 
**assigned** | **String** | assigned server | 
**queued** | **String** | queued timestamp | 
**mx_hostname** | **String** | mx hostname | 
**response** | **String** | mail delivery response | 

