# MailLogEntry

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Id** | **int32** | internal db id | 
**Id** | **string** | mail id | 
**From** | **string** | from address | 
**To** | **string** | to address | 
**Subject** | **string** | email subject | 
**MessageId** | Pointer to **string** | message id | [optional] 
**Created** | **string** | creation date | 
**Time** | **int32** | creation timestamp | 
**User** | **string** | user account | 
**Transtype** | **string** | transaction type | 
**Origin** | **string** | origin ip | 
**Interface** | **string** | interface name | 
**SendingZone** | **string** | sending zone | 
**BodySize** | **int32** | email body size in bytes | 
**Seq** | **int32** | index of email in the to adderess list | 
**Recipient** | **string** | to address this email is being sent to | 
**Domain** | **string** | to address domain | 
**Locked** | **int32** | locked status | 
**LockTime** | **int32** | lock timestamp | 
**Assigned** | **string** | assigned server | 
**Queued** | **string** | queued timestamp | 
**MxHostname** | **string** | mx hostname | 
**Response** | **string** | mail delivery response | 

## Methods

### NewMailLogEntry

`func NewMailLogEntry(id int32, id string, from string, to string, subject string, created string, time int32, user string, transtype string, origin string, interface_ string, sendingZone string, bodySize int32, seq int32, recipient string, domain string, locked int32, lockTime int32, assigned string, queued string, mxHostname string, response string, ) *MailLogEntry`

NewMailLogEntry instantiates a new MailLogEntry object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewMailLogEntryWithDefaults

`func NewMailLogEntryWithDefaults() *MailLogEntry`

NewMailLogEntryWithDefaults instantiates a new MailLogEntry object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetId

`func (o *MailLogEntry) GetId() int32`

GetId returns the Id field if non-nil, zero value otherwise.

### GetIdOk

`func (o *MailLogEntry) GetIdOk() (*int32, bool)`

GetIdOk returns a tuple with the Id field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetId

`func (o *MailLogEntry) SetId(v int32)`

SetId sets Id field to given value.


### GetId

`func (o *MailLogEntry) GetId() string`

GetId returns the Id field if non-nil, zero value otherwise.

### GetIdOk

`func (o *MailLogEntry) GetIdOk() (*string, bool)`

GetIdOk returns a tuple with the Id field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetId

`func (o *MailLogEntry) SetId(v string)`

SetId sets Id field to given value.


### GetFrom

`func (o *MailLogEntry) GetFrom() string`

GetFrom returns the From field if non-nil, zero value otherwise.

### GetFromOk

`func (o *MailLogEntry) GetFromOk() (*string, bool)`

GetFromOk returns a tuple with the From field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetFrom

`func (o *MailLogEntry) SetFrom(v string)`

SetFrom sets From field to given value.


### GetTo

`func (o *MailLogEntry) GetTo() string`

GetTo returns the To field if non-nil, zero value otherwise.

### GetToOk

`func (o *MailLogEntry) GetToOk() (*string, bool)`

GetToOk returns a tuple with the To field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTo

`func (o *MailLogEntry) SetTo(v string)`

SetTo sets To field to given value.


### GetSubject

`func (o *MailLogEntry) GetSubject() string`

GetSubject returns the Subject field if non-nil, zero value otherwise.

### GetSubjectOk

`func (o *MailLogEntry) GetSubjectOk() (*string, bool)`

GetSubjectOk returns a tuple with the Subject field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSubject

`func (o *MailLogEntry) SetSubject(v string)`

SetSubject sets Subject field to given value.


### GetMessageId

`func (o *MailLogEntry) GetMessageId() string`

GetMessageId returns the MessageId field if non-nil, zero value otherwise.

### GetMessageIdOk

`func (o *MailLogEntry) GetMessageIdOk() (*string, bool)`

GetMessageIdOk returns a tuple with the MessageId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetMessageId

`func (o *MailLogEntry) SetMessageId(v string)`

SetMessageId sets MessageId field to given value.

### HasMessageId

`func (o *MailLogEntry) HasMessageId() bool`

HasMessageId returns a boolean if a field has been set.

### GetCreated

`func (o *MailLogEntry) GetCreated() string`

GetCreated returns the Created field if non-nil, zero value otherwise.

### GetCreatedOk

`func (o *MailLogEntry) GetCreatedOk() (*string, bool)`

GetCreatedOk returns a tuple with the Created field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCreated

`func (o *MailLogEntry) SetCreated(v string)`

SetCreated sets Created field to given value.


### GetTime

`func (o *MailLogEntry) GetTime() int32`

GetTime returns the Time field if non-nil, zero value otherwise.

### GetTimeOk

`func (o *MailLogEntry) GetTimeOk() (*int32, bool)`

GetTimeOk returns a tuple with the Time field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTime

`func (o *MailLogEntry) SetTime(v int32)`

SetTime sets Time field to given value.


### GetUser

`func (o *MailLogEntry) GetUser() string`

GetUser returns the User field if non-nil, zero value otherwise.

### GetUserOk

`func (o *MailLogEntry) GetUserOk() (*string, bool)`

GetUserOk returns a tuple with the User field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetUser

`func (o *MailLogEntry) SetUser(v string)`

SetUser sets User field to given value.


### GetTranstype

`func (o *MailLogEntry) GetTranstype() string`

GetTranstype returns the Transtype field if non-nil, zero value otherwise.

### GetTranstypeOk

`func (o *MailLogEntry) GetTranstypeOk() (*string, bool)`

GetTranstypeOk returns a tuple with the Transtype field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTranstype

`func (o *MailLogEntry) SetTranstype(v string)`

SetTranstype sets Transtype field to given value.


### GetOrigin

`func (o *MailLogEntry) GetOrigin() string`

GetOrigin returns the Origin field if non-nil, zero value otherwise.

### GetOriginOk

`func (o *MailLogEntry) GetOriginOk() (*string, bool)`

GetOriginOk returns a tuple with the Origin field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetOrigin

`func (o *MailLogEntry) SetOrigin(v string)`

SetOrigin sets Origin field to given value.


### GetInterface

`func (o *MailLogEntry) GetInterface() string`

GetInterface returns the Interface field if non-nil, zero value otherwise.

### GetInterfaceOk

`func (o *MailLogEntry) GetInterfaceOk() (*string, bool)`

GetInterfaceOk returns a tuple with the Interface field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetInterface

`func (o *MailLogEntry) SetInterface(v string)`

SetInterface sets Interface field to given value.


### GetSendingZone

`func (o *MailLogEntry) GetSendingZone() string`

GetSendingZone returns the SendingZone field if non-nil, zero value otherwise.

### GetSendingZoneOk

`func (o *MailLogEntry) GetSendingZoneOk() (*string, bool)`

GetSendingZoneOk returns a tuple with the SendingZone field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSendingZone

`func (o *MailLogEntry) SetSendingZone(v string)`

SetSendingZone sets SendingZone field to given value.


### GetBodySize

`func (o *MailLogEntry) GetBodySize() int32`

GetBodySize returns the BodySize field if non-nil, zero value otherwise.

### GetBodySizeOk

`func (o *MailLogEntry) GetBodySizeOk() (*int32, bool)`

GetBodySizeOk returns a tuple with the BodySize field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetBodySize

`func (o *MailLogEntry) SetBodySize(v int32)`

SetBodySize sets BodySize field to given value.


### GetSeq

`func (o *MailLogEntry) GetSeq() int32`

GetSeq returns the Seq field if non-nil, zero value otherwise.

### GetSeqOk

`func (o *MailLogEntry) GetSeqOk() (*int32, bool)`

GetSeqOk returns a tuple with the Seq field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSeq

`func (o *MailLogEntry) SetSeq(v int32)`

SetSeq sets Seq field to given value.


### GetRecipient

`func (o *MailLogEntry) GetRecipient() string`

GetRecipient returns the Recipient field if non-nil, zero value otherwise.

### GetRecipientOk

`func (o *MailLogEntry) GetRecipientOk() (*string, bool)`

GetRecipientOk returns a tuple with the Recipient field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetRecipient

`func (o *MailLogEntry) SetRecipient(v string)`

SetRecipient sets Recipient field to given value.


### GetDomain

`func (o *MailLogEntry) GetDomain() string`

GetDomain returns the Domain field if non-nil, zero value otherwise.

### GetDomainOk

`func (o *MailLogEntry) GetDomainOk() (*string, bool)`

GetDomainOk returns a tuple with the Domain field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDomain

`func (o *MailLogEntry) SetDomain(v string)`

SetDomain sets Domain field to given value.


### GetLocked

`func (o *MailLogEntry) GetLocked() int32`

GetLocked returns the Locked field if non-nil, zero value otherwise.

### GetLockedOk

`func (o *MailLogEntry) GetLockedOk() (*int32, bool)`

GetLockedOk returns a tuple with the Locked field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetLocked

`func (o *MailLogEntry) SetLocked(v int32)`

SetLocked sets Locked field to given value.


### GetLockTime

`func (o *MailLogEntry) GetLockTime() int32`

GetLockTime returns the LockTime field if non-nil, zero value otherwise.

### GetLockTimeOk

`func (o *MailLogEntry) GetLockTimeOk() (*int32, bool)`

GetLockTimeOk returns a tuple with the LockTime field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetLockTime

`func (o *MailLogEntry) SetLockTime(v int32)`

SetLockTime sets LockTime field to given value.


### GetAssigned

`func (o *MailLogEntry) GetAssigned() string`

GetAssigned returns the Assigned field if non-nil, zero value otherwise.

### GetAssignedOk

`func (o *MailLogEntry) GetAssignedOk() (*string, bool)`

GetAssignedOk returns a tuple with the Assigned field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetAssigned

`func (o *MailLogEntry) SetAssigned(v string)`

SetAssigned sets Assigned field to given value.


### GetQueued

`func (o *MailLogEntry) GetQueued() string`

GetQueued returns the Queued field if non-nil, zero value otherwise.

### GetQueuedOk

`func (o *MailLogEntry) GetQueuedOk() (*string, bool)`

GetQueuedOk returns a tuple with the Queued field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetQueued

`func (o *MailLogEntry) SetQueued(v string)`

SetQueued sets Queued field to given value.


### GetMxHostname

`func (o *MailLogEntry) GetMxHostname() string`

GetMxHostname returns the MxHostname field if non-nil, zero value otherwise.

### GetMxHostnameOk

`func (o *MailLogEntry) GetMxHostnameOk() (*string, bool)`

GetMxHostnameOk returns a tuple with the MxHostname field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetMxHostname

`func (o *MailLogEntry) SetMxHostname(v string)`

SetMxHostname sets MxHostname field to given value.


### GetResponse

`func (o *MailLogEntry) GetResponse() string`

GetResponse returns the Response field if non-nil, zero value otherwise.

### GetResponseOk

`func (o *MailLogEntry) GetResponseOk() (*string, bool)`

GetResponseOk returns a tuple with the Response field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetResponse

`func (o *MailLogEntry) SetResponse(v string)`

SetResponse sets Response field to given value.



[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


