# MailBlocks

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Local** | [**[]MailBlockClickHouse**](MailBlockClickHouse.md) |  | 
**Mbtrap** | [**[]MailBlockClickHouse**](MailBlockClickHouse.md) |  | 
**Subject** | [**[]MailBlockRspamd**](MailBlockRspamd.md) |  | 

## Methods

### NewMailBlocks

`func NewMailBlocks(local []MailBlockClickHouse, mbtrap []MailBlockClickHouse, subject []MailBlockRspamd, ) *MailBlocks`

NewMailBlocks instantiates a new MailBlocks object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewMailBlocksWithDefaults

`func NewMailBlocksWithDefaults() *MailBlocks`

NewMailBlocksWithDefaults instantiates a new MailBlocks object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetLocal

`func (o *MailBlocks) GetLocal() []MailBlockClickHouse`

GetLocal returns the Local field if non-nil, zero value otherwise.

### GetLocalOk

`func (o *MailBlocks) GetLocalOk() (*[]MailBlockClickHouse, bool)`

GetLocalOk returns a tuple with the Local field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetLocal

`func (o *MailBlocks) SetLocal(v []MailBlockClickHouse)`

SetLocal sets Local field to given value.


### GetMbtrap

`func (o *MailBlocks) GetMbtrap() []MailBlockClickHouse`

GetMbtrap returns the Mbtrap field if non-nil, zero value otherwise.

### GetMbtrapOk

`func (o *MailBlocks) GetMbtrapOk() (*[]MailBlockClickHouse, bool)`

GetMbtrapOk returns a tuple with the Mbtrap field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetMbtrap

`func (o *MailBlocks) SetMbtrap(v []MailBlockClickHouse)`

SetMbtrap sets Mbtrap field to given value.


### GetSubject

`func (o *MailBlocks) GetSubject() []MailBlockRspamd`

GetSubject returns the Subject field if non-nil, zero value otherwise.

### GetSubjectOk

`func (o *MailBlocks) GetSubjectOk() (*[]MailBlockRspamd, bool)`

GetSubjectOk returns a tuple with the Subject field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSubject

`func (o *MailBlocks) SetSubject(v []MailBlockRspamd)`

SetSubject sets Subject field to given value.



[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


