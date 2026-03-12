# MailAttachment

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Filename** | **string** | The filename of the attached file. | 
**Data** | **string** | The file contents base64 encoded | 

## Methods

### NewMailAttachment

`func NewMailAttachment(filename string, data string, ) *MailAttachment`

NewMailAttachment instantiates a new MailAttachment object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewMailAttachmentWithDefaults

`func NewMailAttachmentWithDefaults() *MailAttachment`

NewMailAttachmentWithDefaults instantiates a new MailAttachment object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetFilename

`func (o *MailAttachment) GetFilename() string`

GetFilename returns the Filename field if non-nil, zero value otherwise.

### GetFilenameOk

`func (o *MailAttachment) GetFilenameOk() (*string, bool)`

GetFilenameOk returns a tuple with the Filename field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetFilename

`func (o *MailAttachment) SetFilename(v string)`

SetFilename sets Filename field to given value.


### GetData

`func (o *MailAttachment) GetData() string`

GetData returns the Data field if non-nil, zero value otherwise.

### GetDataOk

`func (o *MailAttachment) GetDataOk() (*string, bool)`

GetDataOk returns a tuple with the Data field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetData

`func (o *MailAttachment) SetData(v string)`

SetData sets Data field to given value.



[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


