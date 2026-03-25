# MailLogEntry

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Id** | **int32** | Internal auto-increment database row ID. | [default to null]
**Id** | **string** | The relay-assigned mail ID (18-19 hex characters).  Matches the &#x60;mailid&#x60; filter parameter and the &#x60;text&#x60; value returned by send endpoints. | [default to null]
**From** | **string** | SMTP envelope &#x60;MAIL FROM&#x60; address. | [default to null]
**To** | **string** | SMTP envelope &#x60;RCPT TO&#x60; address. | [default to null]
**Subject** | **string** | The &#x60;Subject&#x60; header value.  MIME-encoded subjects (UTF-8, ISO-8859, US-ASCII) are automatically decoded. | [optional] [default to null]
**MessageId** | **string** | The &#x60;Message-ID&#x60; header value.  Can be used with the &#x60;messageId&#x60; filter for subsequent lookups. | [optional] [default to null]
**Created** | **string** | Human-readable creation timestamp in &#x60;YYYY-MM-DD HH:MM:SS&#x60; format. | [default to null]
**Time** | **int32** | Unix timestamp of message acceptance.  Corresponds to the &#x60;startDate&#x60; and &#x60;endDate&#x60; filter parameters. | [default to null]
**User** | **string** | The SMTP AUTH username used to submit the message (e.g. &#x60;mb5658&#x60;). | [default to null]
**Transtype** | **string** | SMTP transaction type negotiated with the relay. | [default to null]
**Origin** | **string** | IP address of the client that submitted the message to the relay. | [default to null]
**Interface_** | **string** | Relay interface name that accepted the message. | [default to null]
**SendingZone** | **string** | The sending zone assigned by the relay for outbound delivery. | [optional] [default to null]
**BodySize** | **int32** | Size of the message body in bytes. | [optional] [default to null]
**Seq** | **int32** | Sequence index of this recipient in a multi-recipient message. Starts at 1. | [optional] [default to null]
**Delivered** | **int32** | Delivery status flag.  &#x60;1&#x60; &#x3D; successfully delivered to destination MX. &#x60;0&#x60; &#x3D; queued, deferred, or failed.  &#x60;null&#x60; &#x3D; delivery not yet attempted. | [optional] [default to null]
**Code** | **int32** | The SMTP response code from the destination MX server (e.g. &#x60;250&#x60;). | [optional] [default to null]
**Recipient** | **string** | The specific recipient address this delivery record is for. | [optional] [default to null]
**Response** | **string** | The full SMTP response string received from the destination MX server. | [optional] [default to null]
**Domain** | **string** | The destination domain for this delivery attempt. | [optional] [default to null]
**Locked** | **int32** | Whether the queue entry is currently locked for delivery processing. | [optional] [default to null]
**LockTime** | **string** | Millisecond-precision timestamp of the last queue lock acquisition. | [optional] [default to null]
**Assigned** | **string** | The relay server node assigned to deliver this message. | [optional] [default to null]
**Queued** | **string** | ISO 8601 timestamp when the message was placed into the delivery queue. | [optional] [default to null]
**MxHostname** | **string** | The MX hostname the relay connected to for delivery.  Corresponds to the &#x60;mx&#x60; filter parameter. | [optional] [default to null]

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)

