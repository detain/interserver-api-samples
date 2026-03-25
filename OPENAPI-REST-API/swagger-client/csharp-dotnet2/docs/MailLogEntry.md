# IO.Swagger.Model.MailLogEntry
## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Id** | **int?** | Internal auto-increment database row ID. | 
**Id** | **string** | The relay-assigned mail ID (18-19 hex characters).  Matches the &#x60;mailid&#x60; filter parameter and the &#x60;text&#x60; value returned by send endpoints. | 
**From** | **string** | SMTP envelope &#x60;MAIL FROM&#x60; address. | 
**To** | **string** | SMTP envelope &#x60;RCPT TO&#x60; address. | 
**Subject** | **string** | The &#x60;Subject&#x60; header value.  MIME-encoded subjects (UTF-8, ISO-8859, US-ASCII) are automatically decoded. | [optional] 
**MessageId** | **string** | The &#x60;Message-ID&#x60; header value.  Can be used with the &#x60;messageId&#x60; filter for subsequent lookups. | [optional] 
**Created** | **string** | Human-readable creation timestamp in &#x60;YYYY-MM-DD HH:MM:SS&#x60; format. | 
**Time** | **int?** | Unix timestamp of message acceptance.  Corresponds to the &#x60;startDate&#x60; and &#x60;endDate&#x60; filter parameters. | 
**User** | **string** | The SMTP AUTH username used to submit the message (e.g. &#x60;mb5658&#x60;). | 
**Transtype** | **string** | SMTP transaction type negotiated with the relay. | 
**Origin** | **string** | IP address of the client that submitted the message to the relay. | 
**_Interface** | **string** | Relay interface name that accepted the message. | 
**SendingZone** | **string** | The sending zone assigned by the relay for outbound delivery. | [optional] 
**BodySize** | **int?** | Size of the message body in bytes. | [optional] 
**Seq** | **int?** | Sequence index of this recipient in a multi-recipient message. Starts at 1. | [optional] 
**Delivered** | **int?** | Delivery status flag.  &#x60;1&#x60; &#x3D; successfully delivered to destination MX. &#x60;0&#x60; &#x3D; queued, deferred, or failed.  &#x60;null&#x60; &#x3D; delivery not yet attempted. | [optional] 
**Code** | **int?** | The SMTP response code from the destination MX server (e.g. &#x60;250&#x60;). | [optional] 
**Recipient** | **string** | The specific recipient address this delivery record is for. | [optional] 
**Response** | **string** | The full SMTP response string received from the destination MX server. | [optional] 
**Domain** | **string** | The destination domain for this delivery attempt. | [optional] 
**Locked** | **int?** | Whether the queue entry is currently locked for delivery processing. | [optional] 
**LockTime** | **string** | Millisecond-precision timestamp of the last queue lock acquisition. | [optional] 
**Assigned** | **string** | The relay server node assigned to deliver this message. | [optional] 
**Queued** | **string** | ISO 8601 timestamp when the message was placed into the delivery queue. | [optional] 
**MxHostname** | **string** | The MX hostname the relay connected to for delivery.  Corresponds to the &#x60;mx&#x60; filter parameter. | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)

