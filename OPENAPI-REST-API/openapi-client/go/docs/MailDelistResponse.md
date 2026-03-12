# MailDelistResponse

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Id** | Pointer to **int32** | Mail service ID. | [optional] 
**Local** | Pointer to **[]map[string]interface{}** | Local blocklist entries. | [optional] 
**Mbtrap** | Pointer to **[]map[string]interface{}** | MailBaby trap block entries. | [optional] 
**Subject** | Pointer to **[]map[string]interface{}** | Subject-based block entries. | [optional] 
**Manual** | Pointer to **[]map[string]interface{}** | Manually blocked entries. | [optional] 

## Methods

### NewMailDelistResponse

`func NewMailDelistResponse() *MailDelistResponse`

NewMailDelistResponse instantiates a new MailDelistResponse object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewMailDelistResponseWithDefaults

`func NewMailDelistResponseWithDefaults() *MailDelistResponse`

NewMailDelistResponseWithDefaults instantiates a new MailDelistResponse object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetId

`func (o *MailDelistResponse) GetId() int32`

GetId returns the Id field if non-nil, zero value otherwise.

### GetIdOk

`func (o *MailDelistResponse) GetIdOk() (*int32, bool)`

GetIdOk returns a tuple with the Id field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetId

`func (o *MailDelistResponse) SetId(v int32)`

SetId sets Id field to given value.

### HasId

`func (o *MailDelistResponse) HasId() bool`

HasId returns a boolean if a field has been set.

### GetLocal

`func (o *MailDelistResponse) GetLocal() []map[string]interface{}`

GetLocal returns the Local field if non-nil, zero value otherwise.

### GetLocalOk

`func (o *MailDelistResponse) GetLocalOk() (*[]map[string]interface{}, bool)`

GetLocalOk returns a tuple with the Local field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetLocal

`func (o *MailDelistResponse) SetLocal(v []map[string]interface{})`

SetLocal sets Local field to given value.

### HasLocal

`func (o *MailDelistResponse) HasLocal() bool`

HasLocal returns a boolean if a field has been set.

### GetMbtrap

`func (o *MailDelistResponse) GetMbtrap() []map[string]interface{}`

GetMbtrap returns the Mbtrap field if non-nil, zero value otherwise.

### GetMbtrapOk

`func (o *MailDelistResponse) GetMbtrapOk() (*[]map[string]interface{}, bool)`

GetMbtrapOk returns a tuple with the Mbtrap field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetMbtrap

`func (o *MailDelistResponse) SetMbtrap(v []map[string]interface{})`

SetMbtrap sets Mbtrap field to given value.

### HasMbtrap

`func (o *MailDelistResponse) HasMbtrap() bool`

HasMbtrap returns a boolean if a field has been set.

### GetSubject

`func (o *MailDelistResponse) GetSubject() []map[string]interface{}`

GetSubject returns the Subject field if non-nil, zero value otherwise.

### GetSubjectOk

`func (o *MailDelistResponse) GetSubjectOk() (*[]map[string]interface{}, bool)`

GetSubjectOk returns a tuple with the Subject field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSubject

`func (o *MailDelistResponse) SetSubject(v []map[string]interface{})`

SetSubject sets Subject field to given value.

### HasSubject

`func (o *MailDelistResponse) HasSubject() bool`

HasSubject returns a boolean if a field has been set.

### GetManual

`func (o *MailDelistResponse) GetManual() []map[string]interface{}`

GetManual returns the Manual field if non-nil, zero value otherwise.

### GetManualOk

`func (o *MailDelistResponse) GetManualOk() (*[]map[string]interface{}, bool)`

GetManualOk returns a tuple with the Manual field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetManual

`func (o *MailDelistResponse) SetManual(v []map[string]interface{})`

SetManual sets Manual field to given value.

### HasManual

`func (o *MailDelistResponse) HasManual() bool`

HasManual returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


