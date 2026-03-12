# DomainContactDetails

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Status** | Pointer to **string** | Contact status reported by the registrar. | [optional] 
**State** | Pointer to **string** | State or region for the contact address. | [optional] 
**OrgName** | Pointer to **string** | Organization name for the contact. | [optional] 
**Country** | Pointer to **string** | Two-letter country code for the contact. | [optional] 
**PostalCode** | Pointer to **string** | Postal or ZIP code for the contact address. | [optional] 
**Email** | Pointer to **string** | Email address for the contact. | [optional] 
**Fax** | Pointer to **string** | Fax number for the contact, if available. | [optional] 
**Address2** | Pointer to **string** | Secondary street address line. | [optional] 
**Address3** | Pointer to **string** | Tertiary street address line. | [optional] 
**Address1** | Pointer to **string** | Primary street address line. | [optional] 
**City** | Pointer to **string** | City for the contact address. | [optional] 
**Phone** | Pointer to **string** | Phone number for the contact. | [optional] 
**FirstName** | Pointer to **string** | First name for the contact. | [optional] 
**LastName** | Pointer to **string** | Last name for the contact. | [optional] 

## Methods

### NewDomainContactDetails

`func NewDomainContactDetails() *DomainContactDetails`

NewDomainContactDetails instantiates a new DomainContactDetails object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewDomainContactDetailsWithDefaults

`func NewDomainContactDetailsWithDefaults() *DomainContactDetails`

NewDomainContactDetailsWithDefaults instantiates a new DomainContactDetails object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetStatus

`func (o *DomainContactDetails) GetStatus() string`

GetStatus returns the Status field if non-nil, zero value otherwise.

### GetStatusOk

`func (o *DomainContactDetails) GetStatusOk() (*string, bool)`

GetStatusOk returns a tuple with the Status field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetStatus

`func (o *DomainContactDetails) SetStatus(v string)`

SetStatus sets Status field to given value.

### HasStatus

`func (o *DomainContactDetails) HasStatus() bool`

HasStatus returns a boolean if a field has been set.

### GetState

`func (o *DomainContactDetails) GetState() string`

GetState returns the State field if non-nil, zero value otherwise.

### GetStateOk

`func (o *DomainContactDetails) GetStateOk() (*string, bool)`

GetStateOk returns a tuple with the State field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetState

`func (o *DomainContactDetails) SetState(v string)`

SetState sets State field to given value.

### HasState

`func (o *DomainContactDetails) HasState() bool`

HasState returns a boolean if a field has been set.

### GetOrgName

`func (o *DomainContactDetails) GetOrgName() string`

GetOrgName returns the OrgName field if non-nil, zero value otherwise.

### GetOrgNameOk

`func (o *DomainContactDetails) GetOrgNameOk() (*string, bool)`

GetOrgNameOk returns a tuple with the OrgName field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetOrgName

`func (o *DomainContactDetails) SetOrgName(v string)`

SetOrgName sets OrgName field to given value.

### HasOrgName

`func (o *DomainContactDetails) HasOrgName() bool`

HasOrgName returns a boolean if a field has been set.

### GetCountry

`func (o *DomainContactDetails) GetCountry() string`

GetCountry returns the Country field if non-nil, zero value otherwise.

### GetCountryOk

`func (o *DomainContactDetails) GetCountryOk() (*string, bool)`

GetCountryOk returns a tuple with the Country field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCountry

`func (o *DomainContactDetails) SetCountry(v string)`

SetCountry sets Country field to given value.

### HasCountry

`func (o *DomainContactDetails) HasCountry() bool`

HasCountry returns a boolean if a field has been set.

### GetPostalCode

`func (o *DomainContactDetails) GetPostalCode() string`

GetPostalCode returns the PostalCode field if non-nil, zero value otherwise.

### GetPostalCodeOk

`func (o *DomainContactDetails) GetPostalCodeOk() (*string, bool)`

GetPostalCodeOk returns a tuple with the PostalCode field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPostalCode

`func (o *DomainContactDetails) SetPostalCode(v string)`

SetPostalCode sets PostalCode field to given value.

### HasPostalCode

`func (o *DomainContactDetails) HasPostalCode() bool`

HasPostalCode returns a boolean if a field has been set.

### GetEmail

`func (o *DomainContactDetails) GetEmail() string`

GetEmail returns the Email field if non-nil, zero value otherwise.

### GetEmailOk

`func (o *DomainContactDetails) GetEmailOk() (*string, bool)`

GetEmailOk returns a tuple with the Email field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetEmail

`func (o *DomainContactDetails) SetEmail(v string)`

SetEmail sets Email field to given value.

### HasEmail

`func (o *DomainContactDetails) HasEmail() bool`

HasEmail returns a boolean if a field has been set.

### GetFax

`func (o *DomainContactDetails) GetFax() string`

GetFax returns the Fax field if non-nil, zero value otherwise.

### GetFaxOk

`func (o *DomainContactDetails) GetFaxOk() (*string, bool)`

GetFaxOk returns a tuple with the Fax field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetFax

`func (o *DomainContactDetails) SetFax(v string)`

SetFax sets Fax field to given value.

### HasFax

`func (o *DomainContactDetails) HasFax() bool`

HasFax returns a boolean if a field has been set.

### GetAddress2

`func (o *DomainContactDetails) GetAddress2() string`

GetAddress2 returns the Address2 field if non-nil, zero value otherwise.

### GetAddress2Ok

`func (o *DomainContactDetails) GetAddress2Ok() (*string, bool)`

GetAddress2Ok returns a tuple with the Address2 field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetAddress2

`func (o *DomainContactDetails) SetAddress2(v string)`

SetAddress2 sets Address2 field to given value.

### HasAddress2

`func (o *DomainContactDetails) HasAddress2() bool`

HasAddress2 returns a boolean if a field has been set.

### GetAddress3

`func (o *DomainContactDetails) GetAddress3() string`

GetAddress3 returns the Address3 field if non-nil, zero value otherwise.

### GetAddress3Ok

`func (o *DomainContactDetails) GetAddress3Ok() (*string, bool)`

GetAddress3Ok returns a tuple with the Address3 field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetAddress3

`func (o *DomainContactDetails) SetAddress3(v string)`

SetAddress3 sets Address3 field to given value.

### HasAddress3

`func (o *DomainContactDetails) HasAddress3() bool`

HasAddress3 returns a boolean if a field has been set.

### GetAddress1

`func (o *DomainContactDetails) GetAddress1() string`

GetAddress1 returns the Address1 field if non-nil, zero value otherwise.

### GetAddress1Ok

`func (o *DomainContactDetails) GetAddress1Ok() (*string, bool)`

GetAddress1Ok returns a tuple with the Address1 field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetAddress1

`func (o *DomainContactDetails) SetAddress1(v string)`

SetAddress1 sets Address1 field to given value.

### HasAddress1

`func (o *DomainContactDetails) HasAddress1() bool`

HasAddress1 returns a boolean if a field has been set.

### GetCity

`func (o *DomainContactDetails) GetCity() string`

GetCity returns the City field if non-nil, zero value otherwise.

### GetCityOk

`func (o *DomainContactDetails) GetCityOk() (*string, bool)`

GetCityOk returns a tuple with the City field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCity

`func (o *DomainContactDetails) SetCity(v string)`

SetCity sets City field to given value.

### HasCity

`func (o *DomainContactDetails) HasCity() bool`

HasCity returns a boolean if a field has been set.

### GetPhone

`func (o *DomainContactDetails) GetPhone() string`

GetPhone returns the Phone field if non-nil, zero value otherwise.

### GetPhoneOk

`func (o *DomainContactDetails) GetPhoneOk() (*string, bool)`

GetPhoneOk returns a tuple with the Phone field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPhone

`func (o *DomainContactDetails) SetPhone(v string)`

SetPhone sets Phone field to given value.

### HasPhone

`func (o *DomainContactDetails) HasPhone() bool`

HasPhone returns a boolean if a field has been set.

### GetFirstName

`func (o *DomainContactDetails) GetFirstName() string`

GetFirstName returns the FirstName field if non-nil, zero value otherwise.

### GetFirstNameOk

`func (o *DomainContactDetails) GetFirstNameOk() (*string, bool)`

GetFirstNameOk returns a tuple with the FirstName field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetFirstName

`func (o *DomainContactDetails) SetFirstName(v string)`

SetFirstName sets FirstName field to given value.

### HasFirstName

`func (o *DomainContactDetails) HasFirstName() bool`

HasFirstName returns a boolean if a field has been set.

### GetLastName

`func (o *DomainContactDetails) GetLastName() string`

GetLastName returns the LastName field if non-nil, zero value otherwise.

### GetLastNameOk

`func (o *DomainContactDetails) GetLastNameOk() (*string, bool)`

GetLastNameOk returns a tuple with the LastName field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetLastName

`func (o *DomainContactDetails) SetLastName(v string)`

SetLastName sets LastName field to given value.

### HasLastName

`func (o *DomainContactDetails) HasLastName() bool`

HasLastName returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


