# PostWebsiteMigrationRequest

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**CustPortal** | Pointer to **string** | URL of the customer&#39;s current hosting portal. | [optional] 
**RegEmail** | Pointer to **string** | Registered email address at the current host. | [optional] 
**Password** | Pointer to **string** | Password for the current hosting account. | [optional] 
**CtrlPanel** | Pointer to **string** | URL of the current control panel. | [optional] 
**FtpUsername** | Pointer to **string** | FTP username at the current host. | [optional] 
**FtpPassword** | Pointer to **string** | FTP password at the current host. | [optional] 
**SiteBusyMig** | Pointer to **string** | Information about site traffic during migration. | [optional] 
**SplReqMig** | Pointer to **string** | Special requirements for the migration. | [optional] 
**DomainReg** | Pointer to **string** | Whether domain registration assistance is needed. | [optional] 
**DataMig** | Pointer to **string** | Data migration timing preference. | [optional] 
**DomainRegPortal** | Pointer to **string** | Domain registrar portal URL. | [optional] 
**DomainRegEmail** | Pointer to **string** | Email for the domain registrar account. | [optional] 
**DomainRegPassword** | Pointer to **string** | Password for the domain registrar account. | [optional] 

## Methods

### NewPostWebsiteMigrationRequest

`func NewPostWebsiteMigrationRequest() *PostWebsiteMigrationRequest`

NewPostWebsiteMigrationRequest instantiates a new PostWebsiteMigrationRequest object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewPostWebsiteMigrationRequestWithDefaults

`func NewPostWebsiteMigrationRequestWithDefaults() *PostWebsiteMigrationRequest`

NewPostWebsiteMigrationRequestWithDefaults instantiates a new PostWebsiteMigrationRequest object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetCustPortal

`func (o *PostWebsiteMigrationRequest) GetCustPortal() string`

GetCustPortal returns the CustPortal field if non-nil, zero value otherwise.

### GetCustPortalOk

`func (o *PostWebsiteMigrationRequest) GetCustPortalOk() (*string, bool)`

GetCustPortalOk returns a tuple with the CustPortal field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCustPortal

`func (o *PostWebsiteMigrationRequest) SetCustPortal(v string)`

SetCustPortal sets CustPortal field to given value.

### HasCustPortal

`func (o *PostWebsiteMigrationRequest) HasCustPortal() bool`

HasCustPortal returns a boolean if a field has been set.

### GetRegEmail

`func (o *PostWebsiteMigrationRequest) GetRegEmail() string`

GetRegEmail returns the RegEmail field if non-nil, zero value otherwise.

### GetRegEmailOk

`func (o *PostWebsiteMigrationRequest) GetRegEmailOk() (*string, bool)`

GetRegEmailOk returns a tuple with the RegEmail field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetRegEmail

`func (o *PostWebsiteMigrationRequest) SetRegEmail(v string)`

SetRegEmail sets RegEmail field to given value.

### HasRegEmail

`func (o *PostWebsiteMigrationRequest) HasRegEmail() bool`

HasRegEmail returns a boolean if a field has been set.

### GetPassword

`func (o *PostWebsiteMigrationRequest) GetPassword() string`

GetPassword returns the Password field if non-nil, zero value otherwise.

### GetPasswordOk

`func (o *PostWebsiteMigrationRequest) GetPasswordOk() (*string, bool)`

GetPasswordOk returns a tuple with the Password field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPassword

`func (o *PostWebsiteMigrationRequest) SetPassword(v string)`

SetPassword sets Password field to given value.

### HasPassword

`func (o *PostWebsiteMigrationRequest) HasPassword() bool`

HasPassword returns a boolean if a field has been set.

### GetCtrlPanel

`func (o *PostWebsiteMigrationRequest) GetCtrlPanel() string`

GetCtrlPanel returns the CtrlPanel field if non-nil, zero value otherwise.

### GetCtrlPanelOk

`func (o *PostWebsiteMigrationRequest) GetCtrlPanelOk() (*string, bool)`

GetCtrlPanelOk returns a tuple with the CtrlPanel field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCtrlPanel

`func (o *PostWebsiteMigrationRequest) SetCtrlPanel(v string)`

SetCtrlPanel sets CtrlPanel field to given value.

### HasCtrlPanel

`func (o *PostWebsiteMigrationRequest) HasCtrlPanel() bool`

HasCtrlPanel returns a boolean if a field has been set.

### GetFtpUsername

`func (o *PostWebsiteMigrationRequest) GetFtpUsername() string`

GetFtpUsername returns the FtpUsername field if non-nil, zero value otherwise.

### GetFtpUsernameOk

`func (o *PostWebsiteMigrationRequest) GetFtpUsernameOk() (*string, bool)`

GetFtpUsernameOk returns a tuple with the FtpUsername field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetFtpUsername

`func (o *PostWebsiteMigrationRequest) SetFtpUsername(v string)`

SetFtpUsername sets FtpUsername field to given value.

### HasFtpUsername

`func (o *PostWebsiteMigrationRequest) HasFtpUsername() bool`

HasFtpUsername returns a boolean if a field has been set.

### GetFtpPassword

`func (o *PostWebsiteMigrationRequest) GetFtpPassword() string`

GetFtpPassword returns the FtpPassword field if non-nil, zero value otherwise.

### GetFtpPasswordOk

`func (o *PostWebsiteMigrationRequest) GetFtpPasswordOk() (*string, bool)`

GetFtpPasswordOk returns a tuple with the FtpPassword field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetFtpPassword

`func (o *PostWebsiteMigrationRequest) SetFtpPassword(v string)`

SetFtpPassword sets FtpPassword field to given value.

### HasFtpPassword

`func (o *PostWebsiteMigrationRequest) HasFtpPassword() bool`

HasFtpPassword returns a boolean if a field has been set.

### GetSiteBusyMig

`func (o *PostWebsiteMigrationRequest) GetSiteBusyMig() string`

GetSiteBusyMig returns the SiteBusyMig field if non-nil, zero value otherwise.

### GetSiteBusyMigOk

`func (o *PostWebsiteMigrationRequest) GetSiteBusyMigOk() (*string, bool)`

GetSiteBusyMigOk returns a tuple with the SiteBusyMig field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSiteBusyMig

`func (o *PostWebsiteMigrationRequest) SetSiteBusyMig(v string)`

SetSiteBusyMig sets SiteBusyMig field to given value.

### HasSiteBusyMig

`func (o *PostWebsiteMigrationRequest) HasSiteBusyMig() bool`

HasSiteBusyMig returns a boolean if a field has been set.

### GetSplReqMig

`func (o *PostWebsiteMigrationRequest) GetSplReqMig() string`

GetSplReqMig returns the SplReqMig field if non-nil, zero value otherwise.

### GetSplReqMigOk

`func (o *PostWebsiteMigrationRequest) GetSplReqMigOk() (*string, bool)`

GetSplReqMigOk returns a tuple with the SplReqMig field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSplReqMig

`func (o *PostWebsiteMigrationRequest) SetSplReqMig(v string)`

SetSplReqMig sets SplReqMig field to given value.

### HasSplReqMig

`func (o *PostWebsiteMigrationRequest) HasSplReqMig() bool`

HasSplReqMig returns a boolean if a field has been set.

### GetDomainReg

`func (o *PostWebsiteMigrationRequest) GetDomainReg() string`

GetDomainReg returns the DomainReg field if non-nil, zero value otherwise.

### GetDomainRegOk

`func (o *PostWebsiteMigrationRequest) GetDomainRegOk() (*string, bool)`

GetDomainRegOk returns a tuple with the DomainReg field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDomainReg

`func (o *PostWebsiteMigrationRequest) SetDomainReg(v string)`

SetDomainReg sets DomainReg field to given value.

### HasDomainReg

`func (o *PostWebsiteMigrationRequest) HasDomainReg() bool`

HasDomainReg returns a boolean if a field has been set.

### GetDataMig

`func (o *PostWebsiteMigrationRequest) GetDataMig() string`

GetDataMig returns the DataMig field if non-nil, zero value otherwise.

### GetDataMigOk

`func (o *PostWebsiteMigrationRequest) GetDataMigOk() (*string, bool)`

GetDataMigOk returns a tuple with the DataMig field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDataMig

`func (o *PostWebsiteMigrationRequest) SetDataMig(v string)`

SetDataMig sets DataMig field to given value.

### HasDataMig

`func (o *PostWebsiteMigrationRequest) HasDataMig() bool`

HasDataMig returns a boolean if a field has been set.

### GetDomainRegPortal

`func (o *PostWebsiteMigrationRequest) GetDomainRegPortal() string`

GetDomainRegPortal returns the DomainRegPortal field if non-nil, zero value otherwise.

### GetDomainRegPortalOk

`func (o *PostWebsiteMigrationRequest) GetDomainRegPortalOk() (*string, bool)`

GetDomainRegPortalOk returns a tuple with the DomainRegPortal field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDomainRegPortal

`func (o *PostWebsiteMigrationRequest) SetDomainRegPortal(v string)`

SetDomainRegPortal sets DomainRegPortal field to given value.

### HasDomainRegPortal

`func (o *PostWebsiteMigrationRequest) HasDomainRegPortal() bool`

HasDomainRegPortal returns a boolean if a field has been set.

### GetDomainRegEmail

`func (o *PostWebsiteMigrationRequest) GetDomainRegEmail() string`

GetDomainRegEmail returns the DomainRegEmail field if non-nil, zero value otherwise.

### GetDomainRegEmailOk

`func (o *PostWebsiteMigrationRequest) GetDomainRegEmailOk() (*string, bool)`

GetDomainRegEmailOk returns a tuple with the DomainRegEmail field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDomainRegEmail

`func (o *PostWebsiteMigrationRequest) SetDomainRegEmail(v string)`

SetDomainRegEmail sets DomainRegEmail field to given value.

### HasDomainRegEmail

`func (o *PostWebsiteMigrationRequest) HasDomainRegEmail() bool`

HasDomainRegEmail returns a boolean if a field has been set.

### GetDomainRegPassword

`func (o *PostWebsiteMigrationRequest) GetDomainRegPassword() string`

GetDomainRegPassword returns the DomainRegPassword field if non-nil, zero value otherwise.

### GetDomainRegPasswordOk

`func (o *PostWebsiteMigrationRequest) GetDomainRegPasswordOk() (*string, bool)`

GetDomainRegPasswordOk returns a tuple with the DomainRegPassword field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDomainRegPassword

`func (o *PostWebsiteMigrationRequest) SetDomainRegPassword(v string)`

SetDomainRegPassword sets DomainRegPassword field to given value.

### HasDomainRegPassword

`func (o *PostWebsiteMigrationRequest) HasDomainRegPassword() bool`

HasDomainRegPassword returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


