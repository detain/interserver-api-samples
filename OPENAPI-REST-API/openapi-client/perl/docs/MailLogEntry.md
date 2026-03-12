# OpenAPIClient::Object::MailLogEntry

## Load the model package
```perl
use OpenAPIClient::Object::MailLogEntry;
```

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**_id** | **int** | internal db id | 
**id** | **string** | mail id | 
**from** | **string** | from address | 
**to** | **string** | to address | 
**subject** | **string** | email subject | 
**message_id** | **string** | message id | [optional] 
**created** | **string** | creation date | 
**time** | **int** | creation timestamp | 
**user** | **string** | user account | 
**transtype** | **string** | transaction type | 
**origin** | **string** | origin ip | 
**interface** | **string** | interface name | 
**sending_zone** | **string** | sending zone | 
**body_size** | **int** | email body size in bytes | 
**seq** | **int** | index of email in the to adderess list | 
**recipient** | **string** | to address this email is being sent to | 
**domain** | **string** | to address domain | 
**locked** | **int** | locked status | 
**lock_time** | **int** | lock timestamp | 
**assigned** | **string** | assigned server | 
**queued** | **string** | queued timestamp | 
**mx_hostname** | **string** | mx hostname | 
**response** | **string** | mail delivery response | 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


