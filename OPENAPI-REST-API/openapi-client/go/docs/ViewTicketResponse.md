# ViewTicketResponse

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Success** | **bool** |  | 
**Ticket** | [**TicketDetails**](TicketDetails.md) |  | 
**TicketCustomFields** | Pointer to [**TicketCustomFieldDetails**](TicketCustomFieldDetails.md) |  | [optional] 
**TicketPosts** | Pointer to [**TicketPostDetails**](TicketPostDetails.md) |  | [optional] 

## Methods

### NewViewTicketResponse

`func NewViewTicketResponse(success bool, ticket TicketDetails, ) *ViewTicketResponse`

NewViewTicketResponse instantiates a new ViewTicketResponse object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewViewTicketResponseWithDefaults

`func NewViewTicketResponseWithDefaults() *ViewTicketResponse`

NewViewTicketResponseWithDefaults instantiates a new ViewTicketResponse object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetSuccess

`func (o *ViewTicketResponse) GetSuccess() bool`

GetSuccess returns the Success field if non-nil, zero value otherwise.

### GetSuccessOk

`func (o *ViewTicketResponse) GetSuccessOk() (*bool, bool)`

GetSuccessOk returns a tuple with the Success field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSuccess

`func (o *ViewTicketResponse) SetSuccess(v bool)`

SetSuccess sets Success field to given value.


### GetTicket

`func (o *ViewTicketResponse) GetTicket() TicketDetails`

GetTicket returns the Ticket field if non-nil, zero value otherwise.

### GetTicketOk

`func (o *ViewTicketResponse) GetTicketOk() (*TicketDetails, bool)`

GetTicketOk returns a tuple with the Ticket field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTicket

`func (o *ViewTicketResponse) SetTicket(v TicketDetails)`

SetTicket sets Ticket field to given value.


### GetTicketCustomFields

`func (o *ViewTicketResponse) GetTicketCustomFields() TicketCustomFieldDetails`

GetTicketCustomFields returns the TicketCustomFields field if non-nil, zero value otherwise.

### GetTicketCustomFieldsOk

`func (o *ViewTicketResponse) GetTicketCustomFieldsOk() (*TicketCustomFieldDetails, bool)`

GetTicketCustomFieldsOk returns a tuple with the TicketCustomFields field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTicketCustomFields

`func (o *ViewTicketResponse) SetTicketCustomFields(v TicketCustomFieldDetails)`

SetTicketCustomFields sets TicketCustomFields field to given value.

### HasTicketCustomFields

`func (o *ViewTicketResponse) HasTicketCustomFields() bool`

HasTicketCustomFields returns a boolean if a field has been set.

### GetTicketPosts

`func (o *ViewTicketResponse) GetTicketPosts() TicketPostDetails`

GetTicketPosts returns the TicketPosts field if non-nil, zero value otherwise.

### GetTicketPostsOk

`func (o *ViewTicketResponse) GetTicketPostsOk() (*TicketPostDetails, bool)`

GetTicketPostsOk returns a tuple with the TicketPosts field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTicketPosts

`func (o *ViewTicketResponse) SetTicketPosts(v TicketPostDetails)`

SetTicketPosts sets TicketPosts field to given value.

### HasTicketPosts

`func (o *ViewTicketResponse) HasTicketPosts() bool`

HasTicketPosts returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


