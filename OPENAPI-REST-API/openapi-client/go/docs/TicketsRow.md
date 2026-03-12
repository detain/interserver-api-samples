# TicketsRow

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Title** | **string** |  | 
**Ticketmaskid** | **string** |  | 
**Lastreplier** | **string** |  | 
**Status** | **string** |  | 
**Priority** | **string** |  | 
**TotalReplies** | **int32** |  | 
**Lastactivity** | **string** |  | 
**Departmenttitle** | **string** |  | 
**Ticketid** | **int32** |  | 
**CanClose** | **string** |  | 
**Attachments** | **interface{}** |  | 
**StatusText** | **string** |  | 
**Checked** | **bool** |  | 

## Methods

### NewTicketsRow

`func NewTicketsRow(title string, ticketmaskid string, lastreplier string, status string, priority string, totalReplies int32, lastactivity string, departmenttitle string, ticketid int32, canClose string, attachments interface{}, statusText string, checked bool, ) *TicketsRow`

NewTicketsRow instantiates a new TicketsRow object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewTicketsRowWithDefaults

`func NewTicketsRowWithDefaults() *TicketsRow`

NewTicketsRowWithDefaults instantiates a new TicketsRow object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetTitle

`func (o *TicketsRow) GetTitle() string`

GetTitle returns the Title field if non-nil, zero value otherwise.

### GetTitleOk

`func (o *TicketsRow) GetTitleOk() (*string, bool)`

GetTitleOk returns a tuple with the Title field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTitle

`func (o *TicketsRow) SetTitle(v string)`

SetTitle sets Title field to given value.


### GetTicketmaskid

`func (o *TicketsRow) GetTicketmaskid() string`

GetTicketmaskid returns the Ticketmaskid field if non-nil, zero value otherwise.

### GetTicketmaskidOk

`func (o *TicketsRow) GetTicketmaskidOk() (*string, bool)`

GetTicketmaskidOk returns a tuple with the Ticketmaskid field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTicketmaskid

`func (o *TicketsRow) SetTicketmaskid(v string)`

SetTicketmaskid sets Ticketmaskid field to given value.


### GetLastreplier

`func (o *TicketsRow) GetLastreplier() string`

GetLastreplier returns the Lastreplier field if non-nil, zero value otherwise.

### GetLastreplierOk

`func (o *TicketsRow) GetLastreplierOk() (*string, bool)`

GetLastreplierOk returns a tuple with the Lastreplier field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetLastreplier

`func (o *TicketsRow) SetLastreplier(v string)`

SetLastreplier sets Lastreplier field to given value.


### GetStatus

`func (o *TicketsRow) GetStatus() string`

GetStatus returns the Status field if non-nil, zero value otherwise.

### GetStatusOk

`func (o *TicketsRow) GetStatusOk() (*string, bool)`

GetStatusOk returns a tuple with the Status field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetStatus

`func (o *TicketsRow) SetStatus(v string)`

SetStatus sets Status field to given value.


### GetPriority

`func (o *TicketsRow) GetPriority() string`

GetPriority returns the Priority field if non-nil, zero value otherwise.

### GetPriorityOk

`func (o *TicketsRow) GetPriorityOk() (*string, bool)`

GetPriorityOk returns a tuple with the Priority field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPriority

`func (o *TicketsRow) SetPriority(v string)`

SetPriority sets Priority field to given value.


### GetTotalReplies

`func (o *TicketsRow) GetTotalReplies() int32`

GetTotalReplies returns the TotalReplies field if non-nil, zero value otherwise.

### GetTotalRepliesOk

`func (o *TicketsRow) GetTotalRepliesOk() (*int32, bool)`

GetTotalRepliesOk returns a tuple with the TotalReplies field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTotalReplies

`func (o *TicketsRow) SetTotalReplies(v int32)`

SetTotalReplies sets TotalReplies field to given value.


### GetLastactivity

`func (o *TicketsRow) GetLastactivity() string`

GetLastactivity returns the Lastactivity field if non-nil, zero value otherwise.

### GetLastactivityOk

`func (o *TicketsRow) GetLastactivityOk() (*string, bool)`

GetLastactivityOk returns a tuple with the Lastactivity field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetLastactivity

`func (o *TicketsRow) SetLastactivity(v string)`

SetLastactivity sets Lastactivity field to given value.


### GetDepartmenttitle

`func (o *TicketsRow) GetDepartmenttitle() string`

GetDepartmenttitle returns the Departmenttitle field if non-nil, zero value otherwise.

### GetDepartmenttitleOk

`func (o *TicketsRow) GetDepartmenttitleOk() (*string, bool)`

GetDepartmenttitleOk returns a tuple with the Departmenttitle field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDepartmenttitle

`func (o *TicketsRow) SetDepartmenttitle(v string)`

SetDepartmenttitle sets Departmenttitle field to given value.


### GetTicketid

`func (o *TicketsRow) GetTicketid() int32`

GetTicketid returns the Ticketid field if non-nil, zero value otherwise.

### GetTicketidOk

`func (o *TicketsRow) GetTicketidOk() (*int32, bool)`

GetTicketidOk returns a tuple with the Ticketid field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTicketid

`func (o *TicketsRow) SetTicketid(v int32)`

SetTicketid sets Ticketid field to given value.


### GetCanClose

`func (o *TicketsRow) GetCanClose() string`

GetCanClose returns the CanClose field if non-nil, zero value otherwise.

### GetCanCloseOk

`func (o *TicketsRow) GetCanCloseOk() (*string, bool)`

GetCanCloseOk returns a tuple with the CanClose field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCanClose

`func (o *TicketsRow) SetCanClose(v string)`

SetCanClose sets CanClose field to given value.


### GetAttachments

`func (o *TicketsRow) GetAttachments() interface{}`

GetAttachments returns the Attachments field if non-nil, zero value otherwise.

### GetAttachmentsOk

`func (o *TicketsRow) GetAttachmentsOk() (*interface{}, bool)`

GetAttachmentsOk returns a tuple with the Attachments field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetAttachments

`func (o *TicketsRow) SetAttachments(v interface{})`

SetAttachments sets Attachments field to given value.


### SetAttachmentsNil

`func (o *TicketsRow) SetAttachmentsNil(b bool)`

 SetAttachmentsNil sets the value for Attachments to be an explicit nil

### UnsetAttachments
`func (o *TicketsRow) UnsetAttachments()`

UnsetAttachments ensures that no value is present for Attachments, not even an explicit nil
### GetStatusText

`func (o *TicketsRow) GetStatusText() string`

GetStatusText returns the StatusText field if non-nil, zero value otherwise.

### GetStatusTextOk

`func (o *TicketsRow) GetStatusTextOk() (*string, bool)`

GetStatusTextOk returns a tuple with the StatusText field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetStatusText

`func (o *TicketsRow) SetStatusText(v string)`

SetStatusText sets StatusText field to given value.


### GetChecked

`func (o *TicketsRow) GetChecked() bool`

GetChecked returns the Checked field if non-nil, zero value otherwise.

### GetCheckedOk

`func (o *TicketsRow) GetCheckedOk() (*bool, bool)`

GetCheckedOk returns a tuple with the Checked field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetChecked

`func (o *TicketsRow) SetChecked(v bool)`

SetChecked sets Checked field to given value.



[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


