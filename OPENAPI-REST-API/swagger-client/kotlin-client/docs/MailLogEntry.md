# MailLogEntry

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**id** | [**kotlin.Int**](.md) | internal db id | 
**id** | [**kotlin.String**](.md) | mail id | 
**from** | [**kotlin.String**](.md) | from address | 
**to** | [**kotlin.String**](.md) | to address | 
**subject** | [**kotlin.String**](.md) | email subject | 
**messageId** | [**kotlin.String**](.md) | message id |  [optional]
**created** | [**kotlin.String**](.md) | creation date | 
**time** | [**kotlin.Int**](.md) | creation timestamp | 
**user** | [**kotlin.String**](.md) | user account | 
**transtype** | [**kotlin.String**](.md) | transaction type | 
**origin** | [**kotlin.String**](.md) | origin ip | 
**&#x60;interface&#x60;** | [**kotlin.String**](.md) | interface name | 
**sendingZone** | [**kotlin.String**](.md) | sending zone | 
**bodySize** | [**kotlin.Int**](.md) | email body size in bytes | 
**seq** | [**kotlin.Int**](.md) | index of email in the to adderess list | 
**recipient** | [**kotlin.String**](.md) | to address this email is being sent to | 
**domain** | [**kotlin.String**](.md) | to address domain | 
**locked** | [**kotlin.Int**](.md) | locked status | 
**lockTime** | [**kotlin.Int**](.md) | lock timestamp | 
**assigned** | [**kotlin.String**](.md) | assigned server | 
**queued** | [**kotlin.String**](.md) | queued timestamp | 
**mxHostname** | [**kotlin.String**](.md) | mx hostname | 
**response** | [**kotlin.String**](.md) | mail delivery response | 
