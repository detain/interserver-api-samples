# AccountInfoData

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Group** | Pointer to **string** |  | [optional] 
**Address** | Pointer to **string** |  | [optional] 
**City** | Pointer to **string** |  | [optional] 
**Country** | Pointer to **string** |  | [optional] 
**DisableCc** | Pointer to **string** |  | [optional] 
**FraudrecordScore** | Pointer to **string** |  | [optional] 
**Ima** | Pointer to **string** |  | [optional] 
**Name** | Pointer to **string** |  | [optional] 
**PaymentMethod** | Pointer to **string** |  | [optional] 
**Phone** | Pointer to **string** |  | [optional] 
**Pin** | Pointer to **string** |  | [optional] 
**State** | Pointer to **string** |  | [optional] 
**Status** | Pointer to **string** |  | [optional] 
**Zip** | Pointer to **string** |  | [optional] 
**AccountId** | Pointer to **string** |  | [optional] 
**AccountLid** | Pointer to **string** |  | [optional] 
**Address2** | Pointer to **string** |  | [optional] 
**AffiliateDockDescription** | Pointer to **string** |  | [optional] 
**AffiliateDockTitle** | Pointer to **string** |  | [optional] 
**AffiliatePaymentMethod** | Pointer to **string** |  | [optional] 
**AffiliatePaypal** | Pointer to **string** |  | [optional] 
**Cc** | Pointer to **string** |  | [optional] 
**CcAuto** | Pointer to **string** |  | [optional] 
**CcExp** | Pointer to **string** |  | [optional] 
**CcType** | Pointer to **string** |  | [optional] 
**CcWhitelist** | Pointer to **string** |  | [optional] 
**Ccs** | Pointer to [**AccountInfoDataCcs**](AccountInfoDataCcs.md) |  | [optional] 
**CcsAdded** | Pointer to **string** |  | [optional] 
**Company** | Pointer to **string** |  | [optional] 
**Currency** | Pointer to **string** |  | [optional] 
**DisableReinstall** | Pointer to **string** |  | [optional] 
**DisableReset** | Pointer to **string** |  | [optional] 
**Email** | Pointer to **string** |  | [optional] 
**EmailAbuse** | Pointer to **string** |  | [optional] 
**EmailSettings** | Pointer to [**AccountInfoDataEmailSettings**](AccountInfoDataEmailSettings.md) |  | [optional] 
**Extra** | Pointer to [**AccountInfoDataExtra**](AccountInfoDataExtra.md) |  | [optional] 
**FacebookId** | Pointer to **string** |  | [optional] 
**FacebookUrl** | Pointer to **string** |  | [optional] 
**Firstname** | Pointer to **string** |  | [optional] 
**Fraudrecord** | Pointer to [**AccountInfoDataFraudrecord**](AccountInfoDataFraudrecord.md) |  | [optional] 
**GithubId** | Pointer to **string** |  | [optional] 
**GithubUrl** | Pointer to **string** |  | [optional] 
**GoogleId** | Pointer to **string** |  | [optional] 
**GoogleUrl** | Pointer to **string** |  | [optional] 
**InnertellId** | Pointer to **string** |  | [optional] 
**Lastname** | Pointer to **string** |  | [optional] 
**Locale** | Pointer to **string** |  | [optional] 
**Maxmind** | Pointer to [**AccountInfoMaxMindResponse**](AccountInfoMaxMindResponse.md) |  | [optional] 
**MaxmindScore** | Pointer to **string** |  | [optional] 
**MbId** | Pointer to **string** |  | [optional] 
**ModernbillId** | Pointer to **string** |  | [optional] 
**Picture** | Pointer to **string** |  | [optional] 
**ReferrerCoupon** | Pointer to **string** |  | [optional] 
**ResellerMarkup** | Pointer to **string** |  | [optional] 
**Username** | Pointer to **string** |  | [optional] 
**SshKey** | Pointer to **string** |  | [optional] 
**SshKeyWrapped** | Pointer to **string** |  | [optional] 
**ApiKey** | Pointer to **string** |  | [optional] 
**ApiKeyWrapped** | Pointer to **string** |  | [optional] 
**Var2faGoogleKey** | Pointer to **string** |  | [optional] 
**Var2faGoogleEnabled** | Pointer to **bool** |  | [optional] 
**Var2faGoogle** | Pointer to **int32** |  | [optional] 
**Var2faGoogleSplit** | Pointer to **string** |  | [optional] 
**Var2faGoogleQr** | Pointer to **string** |  | [optional] 

## Methods

### NewAccountInfoData

`func NewAccountInfoData() *AccountInfoData`

NewAccountInfoData instantiates a new AccountInfoData object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewAccountInfoDataWithDefaults

`func NewAccountInfoDataWithDefaults() *AccountInfoData`

NewAccountInfoDataWithDefaults instantiates a new AccountInfoData object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetGroup

`func (o *AccountInfoData) GetGroup() string`

GetGroup returns the Group field if non-nil, zero value otherwise.

### GetGroupOk

`func (o *AccountInfoData) GetGroupOk() (*string, bool)`

GetGroupOk returns a tuple with the Group field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetGroup

`func (o *AccountInfoData) SetGroup(v string)`

SetGroup sets Group field to given value.

### HasGroup

`func (o *AccountInfoData) HasGroup() bool`

HasGroup returns a boolean if a field has been set.

### GetAddress

`func (o *AccountInfoData) GetAddress() string`

GetAddress returns the Address field if non-nil, zero value otherwise.

### GetAddressOk

`func (o *AccountInfoData) GetAddressOk() (*string, bool)`

GetAddressOk returns a tuple with the Address field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetAddress

`func (o *AccountInfoData) SetAddress(v string)`

SetAddress sets Address field to given value.

### HasAddress

`func (o *AccountInfoData) HasAddress() bool`

HasAddress returns a boolean if a field has been set.

### GetCity

`func (o *AccountInfoData) GetCity() string`

GetCity returns the City field if non-nil, zero value otherwise.

### GetCityOk

`func (o *AccountInfoData) GetCityOk() (*string, bool)`

GetCityOk returns a tuple with the City field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCity

`func (o *AccountInfoData) SetCity(v string)`

SetCity sets City field to given value.

### HasCity

`func (o *AccountInfoData) HasCity() bool`

HasCity returns a boolean if a field has been set.

### GetCountry

`func (o *AccountInfoData) GetCountry() string`

GetCountry returns the Country field if non-nil, zero value otherwise.

### GetCountryOk

`func (o *AccountInfoData) GetCountryOk() (*string, bool)`

GetCountryOk returns a tuple with the Country field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCountry

`func (o *AccountInfoData) SetCountry(v string)`

SetCountry sets Country field to given value.

### HasCountry

`func (o *AccountInfoData) HasCountry() bool`

HasCountry returns a boolean if a field has been set.

### GetDisableCc

`func (o *AccountInfoData) GetDisableCc() string`

GetDisableCc returns the DisableCc field if non-nil, zero value otherwise.

### GetDisableCcOk

`func (o *AccountInfoData) GetDisableCcOk() (*string, bool)`

GetDisableCcOk returns a tuple with the DisableCc field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDisableCc

`func (o *AccountInfoData) SetDisableCc(v string)`

SetDisableCc sets DisableCc field to given value.

### HasDisableCc

`func (o *AccountInfoData) HasDisableCc() bool`

HasDisableCc returns a boolean if a field has been set.

### GetFraudrecordScore

`func (o *AccountInfoData) GetFraudrecordScore() string`

GetFraudrecordScore returns the FraudrecordScore field if non-nil, zero value otherwise.

### GetFraudrecordScoreOk

`func (o *AccountInfoData) GetFraudrecordScoreOk() (*string, bool)`

GetFraudrecordScoreOk returns a tuple with the FraudrecordScore field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetFraudrecordScore

`func (o *AccountInfoData) SetFraudrecordScore(v string)`

SetFraudrecordScore sets FraudrecordScore field to given value.

### HasFraudrecordScore

`func (o *AccountInfoData) HasFraudrecordScore() bool`

HasFraudrecordScore returns a boolean if a field has been set.

### GetIma

`func (o *AccountInfoData) GetIma() string`

GetIma returns the Ima field if non-nil, zero value otherwise.

### GetImaOk

`func (o *AccountInfoData) GetImaOk() (*string, bool)`

GetImaOk returns a tuple with the Ima field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIma

`func (o *AccountInfoData) SetIma(v string)`

SetIma sets Ima field to given value.

### HasIma

`func (o *AccountInfoData) HasIma() bool`

HasIma returns a boolean if a field has been set.

### GetName

`func (o *AccountInfoData) GetName() string`

GetName returns the Name field if non-nil, zero value otherwise.

### GetNameOk

`func (o *AccountInfoData) GetNameOk() (*string, bool)`

GetNameOk returns a tuple with the Name field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetName

`func (o *AccountInfoData) SetName(v string)`

SetName sets Name field to given value.

### HasName

`func (o *AccountInfoData) HasName() bool`

HasName returns a boolean if a field has been set.

### GetPaymentMethod

`func (o *AccountInfoData) GetPaymentMethod() string`

GetPaymentMethod returns the PaymentMethod field if non-nil, zero value otherwise.

### GetPaymentMethodOk

`func (o *AccountInfoData) GetPaymentMethodOk() (*string, bool)`

GetPaymentMethodOk returns a tuple with the PaymentMethod field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPaymentMethod

`func (o *AccountInfoData) SetPaymentMethod(v string)`

SetPaymentMethod sets PaymentMethod field to given value.

### HasPaymentMethod

`func (o *AccountInfoData) HasPaymentMethod() bool`

HasPaymentMethod returns a boolean if a field has been set.

### GetPhone

`func (o *AccountInfoData) GetPhone() string`

GetPhone returns the Phone field if non-nil, zero value otherwise.

### GetPhoneOk

`func (o *AccountInfoData) GetPhoneOk() (*string, bool)`

GetPhoneOk returns a tuple with the Phone field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPhone

`func (o *AccountInfoData) SetPhone(v string)`

SetPhone sets Phone field to given value.

### HasPhone

`func (o *AccountInfoData) HasPhone() bool`

HasPhone returns a boolean if a field has been set.

### GetPin

`func (o *AccountInfoData) GetPin() string`

GetPin returns the Pin field if non-nil, zero value otherwise.

### GetPinOk

`func (o *AccountInfoData) GetPinOk() (*string, bool)`

GetPinOk returns a tuple with the Pin field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPin

`func (o *AccountInfoData) SetPin(v string)`

SetPin sets Pin field to given value.

### HasPin

`func (o *AccountInfoData) HasPin() bool`

HasPin returns a boolean if a field has been set.

### GetState

`func (o *AccountInfoData) GetState() string`

GetState returns the State field if non-nil, zero value otherwise.

### GetStateOk

`func (o *AccountInfoData) GetStateOk() (*string, bool)`

GetStateOk returns a tuple with the State field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetState

`func (o *AccountInfoData) SetState(v string)`

SetState sets State field to given value.

### HasState

`func (o *AccountInfoData) HasState() bool`

HasState returns a boolean if a field has been set.

### GetStatus

`func (o *AccountInfoData) GetStatus() string`

GetStatus returns the Status field if non-nil, zero value otherwise.

### GetStatusOk

`func (o *AccountInfoData) GetStatusOk() (*string, bool)`

GetStatusOk returns a tuple with the Status field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetStatus

`func (o *AccountInfoData) SetStatus(v string)`

SetStatus sets Status field to given value.

### HasStatus

`func (o *AccountInfoData) HasStatus() bool`

HasStatus returns a boolean if a field has been set.

### GetZip

`func (o *AccountInfoData) GetZip() string`

GetZip returns the Zip field if non-nil, zero value otherwise.

### GetZipOk

`func (o *AccountInfoData) GetZipOk() (*string, bool)`

GetZipOk returns a tuple with the Zip field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetZip

`func (o *AccountInfoData) SetZip(v string)`

SetZip sets Zip field to given value.

### HasZip

`func (o *AccountInfoData) HasZip() bool`

HasZip returns a boolean if a field has been set.

### GetAccountId

`func (o *AccountInfoData) GetAccountId() string`

GetAccountId returns the AccountId field if non-nil, zero value otherwise.

### GetAccountIdOk

`func (o *AccountInfoData) GetAccountIdOk() (*string, bool)`

GetAccountIdOk returns a tuple with the AccountId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetAccountId

`func (o *AccountInfoData) SetAccountId(v string)`

SetAccountId sets AccountId field to given value.

### HasAccountId

`func (o *AccountInfoData) HasAccountId() bool`

HasAccountId returns a boolean if a field has been set.

### GetAccountLid

`func (o *AccountInfoData) GetAccountLid() string`

GetAccountLid returns the AccountLid field if non-nil, zero value otherwise.

### GetAccountLidOk

`func (o *AccountInfoData) GetAccountLidOk() (*string, bool)`

GetAccountLidOk returns a tuple with the AccountLid field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetAccountLid

`func (o *AccountInfoData) SetAccountLid(v string)`

SetAccountLid sets AccountLid field to given value.

### HasAccountLid

`func (o *AccountInfoData) HasAccountLid() bool`

HasAccountLid returns a boolean if a field has been set.

### GetAddress2

`func (o *AccountInfoData) GetAddress2() string`

GetAddress2 returns the Address2 field if non-nil, zero value otherwise.

### GetAddress2Ok

`func (o *AccountInfoData) GetAddress2Ok() (*string, bool)`

GetAddress2Ok returns a tuple with the Address2 field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetAddress2

`func (o *AccountInfoData) SetAddress2(v string)`

SetAddress2 sets Address2 field to given value.

### HasAddress2

`func (o *AccountInfoData) HasAddress2() bool`

HasAddress2 returns a boolean if a field has been set.

### GetAffiliateDockDescription

`func (o *AccountInfoData) GetAffiliateDockDescription() string`

GetAffiliateDockDescription returns the AffiliateDockDescription field if non-nil, zero value otherwise.

### GetAffiliateDockDescriptionOk

`func (o *AccountInfoData) GetAffiliateDockDescriptionOk() (*string, bool)`

GetAffiliateDockDescriptionOk returns a tuple with the AffiliateDockDescription field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetAffiliateDockDescription

`func (o *AccountInfoData) SetAffiliateDockDescription(v string)`

SetAffiliateDockDescription sets AffiliateDockDescription field to given value.

### HasAffiliateDockDescription

`func (o *AccountInfoData) HasAffiliateDockDescription() bool`

HasAffiliateDockDescription returns a boolean if a field has been set.

### GetAffiliateDockTitle

`func (o *AccountInfoData) GetAffiliateDockTitle() string`

GetAffiliateDockTitle returns the AffiliateDockTitle field if non-nil, zero value otherwise.

### GetAffiliateDockTitleOk

`func (o *AccountInfoData) GetAffiliateDockTitleOk() (*string, bool)`

GetAffiliateDockTitleOk returns a tuple with the AffiliateDockTitle field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetAffiliateDockTitle

`func (o *AccountInfoData) SetAffiliateDockTitle(v string)`

SetAffiliateDockTitle sets AffiliateDockTitle field to given value.

### HasAffiliateDockTitle

`func (o *AccountInfoData) HasAffiliateDockTitle() bool`

HasAffiliateDockTitle returns a boolean if a field has been set.

### GetAffiliatePaymentMethod

`func (o *AccountInfoData) GetAffiliatePaymentMethod() string`

GetAffiliatePaymentMethod returns the AffiliatePaymentMethod field if non-nil, zero value otherwise.

### GetAffiliatePaymentMethodOk

`func (o *AccountInfoData) GetAffiliatePaymentMethodOk() (*string, bool)`

GetAffiliatePaymentMethodOk returns a tuple with the AffiliatePaymentMethod field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetAffiliatePaymentMethod

`func (o *AccountInfoData) SetAffiliatePaymentMethod(v string)`

SetAffiliatePaymentMethod sets AffiliatePaymentMethod field to given value.

### HasAffiliatePaymentMethod

`func (o *AccountInfoData) HasAffiliatePaymentMethod() bool`

HasAffiliatePaymentMethod returns a boolean if a field has been set.

### GetAffiliatePaypal

`func (o *AccountInfoData) GetAffiliatePaypal() string`

GetAffiliatePaypal returns the AffiliatePaypal field if non-nil, zero value otherwise.

### GetAffiliatePaypalOk

`func (o *AccountInfoData) GetAffiliatePaypalOk() (*string, bool)`

GetAffiliatePaypalOk returns a tuple with the AffiliatePaypal field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetAffiliatePaypal

`func (o *AccountInfoData) SetAffiliatePaypal(v string)`

SetAffiliatePaypal sets AffiliatePaypal field to given value.

### HasAffiliatePaypal

`func (o *AccountInfoData) HasAffiliatePaypal() bool`

HasAffiliatePaypal returns a boolean if a field has been set.

### GetCc

`func (o *AccountInfoData) GetCc() string`

GetCc returns the Cc field if non-nil, zero value otherwise.

### GetCcOk

`func (o *AccountInfoData) GetCcOk() (*string, bool)`

GetCcOk returns a tuple with the Cc field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCc

`func (o *AccountInfoData) SetCc(v string)`

SetCc sets Cc field to given value.

### HasCc

`func (o *AccountInfoData) HasCc() bool`

HasCc returns a boolean if a field has been set.

### GetCcAuto

`func (o *AccountInfoData) GetCcAuto() string`

GetCcAuto returns the CcAuto field if non-nil, zero value otherwise.

### GetCcAutoOk

`func (o *AccountInfoData) GetCcAutoOk() (*string, bool)`

GetCcAutoOk returns a tuple with the CcAuto field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCcAuto

`func (o *AccountInfoData) SetCcAuto(v string)`

SetCcAuto sets CcAuto field to given value.

### HasCcAuto

`func (o *AccountInfoData) HasCcAuto() bool`

HasCcAuto returns a boolean if a field has been set.

### GetCcExp

`func (o *AccountInfoData) GetCcExp() string`

GetCcExp returns the CcExp field if non-nil, zero value otherwise.

### GetCcExpOk

`func (o *AccountInfoData) GetCcExpOk() (*string, bool)`

GetCcExpOk returns a tuple with the CcExp field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCcExp

`func (o *AccountInfoData) SetCcExp(v string)`

SetCcExp sets CcExp field to given value.

### HasCcExp

`func (o *AccountInfoData) HasCcExp() bool`

HasCcExp returns a boolean if a field has been set.

### GetCcType

`func (o *AccountInfoData) GetCcType() string`

GetCcType returns the CcType field if non-nil, zero value otherwise.

### GetCcTypeOk

`func (o *AccountInfoData) GetCcTypeOk() (*string, bool)`

GetCcTypeOk returns a tuple with the CcType field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCcType

`func (o *AccountInfoData) SetCcType(v string)`

SetCcType sets CcType field to given value.

### HasCcType

`func (o *AccountInfoData) HasCcType() bool`

HasCcType returns a boolean if a field has been set.

### GetCcWhitelist

`func (o *AccountInfoData) GetCcWhitelist() string`

GetCcWhitelist returns the CcWhitelist field if non-nil, zero value otherwise.

### GetCcWhitelistOk

`func (o *AccountInfoData) GetCcWhitelistOk() (*string, bool)`

GetCcWhitelistOk returns a tuple with the CcWhitelist field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCcWhitelist

`func (o *AccountInfoData) SetCcWhitelist(v string)`

SetCcWhitelist sets CcWhitelist field to given value.

### HasCcWhitelist

`func (o *AccountInfoData) HasCcWhitelist() bool`

HasCcWhitelist returns a boolean if a field has been set.

### GetCcs

`func (o *AccountInfoData) GetCcs() AccountInfoDataCcs`

GetCcs returns the Ccs field if non-nil, zero value otherwise.

### GetCcsOk

`func (o *AccountInfoData) GetCcsOk() (*AccountInfoDataCcs, bool)`

GetCcsOk returns a tuple with the Ccs field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCcs

`func (o *AccountInfoData) SetCcs(v AccountInfoDataCcs)`

SetCcs sets Ccs field to given value.

### HasCcs

`func (o *AccountInfoData) HasCcs() bool`

HasCcs returns a boolean if a field has been set.

### GetCcsAdded

`func (o *AccountInfoData) GetCcsAdded() string`

GetCcsAdded returns the CcsAdded field if non-nil, zero value otherwise.

### GetCcsAddedOk

`func (o *AccountInfoData) GetCcsAddedOk() (*string, bool)`

GetCcsAddedOk returns a tuple with the CcsAdded field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCcsAdded

`func (o *AccountInfoData) SetCcsAdded(v string)`

SetCcsAdded sets CcsAdded field to given value.

### HasCcsAdded

`func (o *AccountInfoData) HasCcsAdded() bool`

HasCcsAdded returns a boolean if a field has been set.

### GetCompany

`func (o *AccountInfoData) GetCompany() string`

GetCompany returns the Company field if non-nil, zero value otherwise.

### GetCompanyOk

`func (o *AccountInfoData) GetCompanyOk() (*string, bool)`

GetCompanyOk returns a tuple with the Company field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCompany

`func (o *AccountInfoData) SetCompany(v string)`

SetCompany sets Company field to given value.

### HasCompany

`func (o *AccountInfoData) HasCompany() bool`

HasCompany returns a boolean if a field has been set.

### GetCurrency

`func (o *AccountInfoData) GetCurrency() string`

GetCurrency returns the Currency field if non-nil, zero value otherwise.

### GetCurrencyOk

`func (o *AccountInfoData) GetCurrencyOk() (*string, bool)`

GetCurrencyOk returns a tuple with the Currency field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCurrency

`func (o *AccountInfoData) SetCurrency(v string)`

SetCurrency sets Currency field to given value.

### HasCurrency

`func (o *AccountInfoData) HasCurrency() bool`

HasCurrency returns a boolean if a field has been set.

### GetDisableReinstall

`func (o *AccountInfoData) GetDisableReinstall() string`

GetDisableReinstall returns the DisableReinstall field if non-nil, zero value otherwise.

### GetDisableReinstallOk

`func (o *AccountInfoData) GetDisableReinstallOk() (*string, bool)`

GetDisableReinstallOk returns a tuple with the DisableReinstall field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDisableReinstall

`func (o *AccountInfoData) SetDisableReinstall(v string)`

SetDisableReinstall sets DisableReinstall field to given value.

### HasDisableReinstall

`func (o *AccountInfoData) HasDisableReinstall() bool`

HasDisableReinstall returns a boolean if a field has been set.

### GetDisableReset

`func (o *AccountInfoData) GetDisableReset() string`

GetDisableReset returns the DisableReset field if non-nil, zero value otherwise.

### GetDisableResetOk

`func (o *AccountInfoData) GetDisableResetOk() (*string, bool)`

GetDisableResetOk returns a tuple with the DisableReset field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDisableReset

`func (o *AccountInfoData) SetDisableReset(v string)`

SetDisableReset sets DisableReset field to given value.

### HasDisableReset

`func (o *AccountInfoData) HasDisableReset() bool`

HasDisableReset returns a boolean if a field has been set.

### GetEmail

`func (o *AccountInfoData) GetEmail() string`

GetEmail returns the Email field if non-nil, zero value otherwise.

### GetEmailOk

`func (o *AccountInfoData) GetEmailOk() (*string, bool)`

GetEmailOk returns a tuple with the Email field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetEmail

`func (o *AccountInfoData) SetEmail(v string)`

SetEmail sets Email field to given value.

### HasEmail

`func (o *AccountInfoData) HasEmail() bool`

HasEmail returns a boolean if a field has been set.

### GetEmailAbuse

`func (o *AccountInfoData) GetEmailAbuse() string`

GetEmailAbuse returns the EmailAbuse field if non-nil, zero value otherwise.

### GetEmailAbuseOk

`func (o *AccountInfoData) GetEmailAbuseOk() (*string, bool)`

GetEmailAbuseOk returns a tuple with the EmailAbuse field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetEmailAbuse

`func (o *AccountInfoData) SetEmailAbuse(v string)`

SetEmailAbuse sets EmailAbuse field to given value.

### HasEmailAbuse

`func (o *AccountInfoData) HasEmailAbuse() bool`

HasEmailAbuse returns a boolean if a field has been set.

### GetEmailSettings

`func (o *AccountInfoData) GetEmailSettings() AccountInfoDataEmailSettings`

GetEmailSettings returns the EmailSettings field if non-nil, zero value otherwise.

### GetEmailSettingsOk

`func (o *AccountInfoData) GetEmailSettingsOk() (*AccountInfoDataEmailSettings, bool)`

GetEmailSettingsOk returns a tuple with the EmailSettings field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetEmailSettings

`func (o *AccountInfoData) SetEmailSettings(v AccountInfoDataEmailSettings)`

SetEmailSettings sets EmailSettings field to given value.

### HasEmailSettings

`func (o *AccountInfoData) HasEmailSettings() bool`

HasEmailSettings returns a boolean if a field has been set.

### GetExtra

`func (o *AccountInfoData) GetExtra() AccountInfoDataExtra`

GetExtra returns the Extra field if non-nil, zero value otherwise.

### GetExtraOk

`func (o *AccountInfoData) GetExtraOk() (*AccountInfoDataExtra, bool)`

GetExtraOk returns a tuple with the Extra field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetExtra

`func (o *AccountInfoData) SetExtra(v AccountInfoDataExtra)`

SetExtra sets Extra field to given value.

### HasExtra

`func (o *AccountInfoData) HasExtra() bool`

HasExtra returns a boolean if a field has been set.

### GetFacebookId

`func (o *AccountInfoData) GetFacebookId() string`

GetFacebookId returns the FacebookId field if non-nil, zero value otherwise.

### GetFacebookIdOk

`func (o *AccountInfoData) GetFacebookIdOk() (*string, bool)`

GetFacebookIdOk returns a tuple with the FacebookId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetFacebookId

`func (o *AccountInfoData) SetFacebookId(v string)`

SetFacebookId sets FacebookId field to given value.

### HasFacebookId

`func (o *AccountInfoData) HasFacebookId() bool`

HasFacebookId returns a boolean if a field has been set.

### GetFacebookUrl

`func (o *AccountInfoData) GetFacebookUrl() string`

GetFacebookUrl returns the FacebookUrl field if non-nil, zero value otherwise.

### GetFacebookUrlOk

`func (o *AccountInfoData) GetFacebookUrlOk() (*string, bool)`

GetFacebookUrlOk returns a tuple with the FacebookUrl field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetFacebookUrl

`func (o *AccountInfoData) SetFacebookUrl(v string)`

SetFacebookUrl sets FacebookUrl field to given value.

### HasFacebookUrl

`func (o *AccountInfoData) HasFacebookUrl() bool`

HasFacebookUrl returns a boolean if a field has been set.

### GetFirstname

`func (o *AccountInfoData) GetFirstname() string`

GetFirstname returns the Firstname field if non-nil, zero value otherwise.

### GetFirstnameOk

`func (o *AccountInfoData) GetFirstnameOk() (*string, bool)`

GetFirstnameOk returns a tuple with the Firstname field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetFirstname

`func (o *AccountInfoData) SetFirstname(v string)`

SetFirstname sets Firstname field to given value.

### HasFirstname

`func (o *AccountInfoData) HasFirstname() bool`

HasFirstname returns a boolean if a field has been set.

### GetFraudrecord

`func (o *AccountInfoData) GetFraudrecord() AccountInfoDataFraudrecord`

GetFraudrecord returns the Fraudrecord field if non-nil, zero value otherwise.

### GetFraudrecordOk

`func (o *AccountInfoData) GetFraudrecordOk() (*AccountInfoDataFraudrecord, bool)`

GetFraudrecordOk returns a tuple with the Fraudrecord field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetFraudrecord

`func (o *AccountInfoData) SetFraudrecord(v AccountInfoDataFraudrecord)`

SetFraudrecord sets Fraudrecord field to given value.

### HasFraudrecord

`func (o *AccountInfoData) HasFraudrecord() bool`

HasFraudrecord returns a boolean if a field has been set.

### GetGithubId

`func (o *AccountInfoData) GetGithubId() string`

GetGithubId returns the GithubId field if non-nil, zero value otherwise.

### GetGithubIdOk

`func (o *AccountInfoData) GetGithubIdOk() (*string, bool)`

GetGithubIdOk returns a tuple with the GithubId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetGithubId

`func (o *AccountInfoData) SetGithubId(v string)`

SetGithubId sets GithubId field to given value.

### HasGithubId

`func (o *AccountInfoData) HasGithubId() bool`

HasGithubId returns a boolean if a field has been set.

### GetGithubUrl

`func (o *AccountInfoData) GetGithubUrl() string`

GetGithubUrl returns the GithubUrl field if non-nil, zero value otherwise.

### GetGithubUrlOk

`func (o *AccountInfoData) GetGithubUrlOk() (*string, bool)`

GetGithubUrlOk returns a tuple with the GithubUrl field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetGithubUrl

`func (o *AccountInfoData) SetGithubUrl(v string)`

SetGithubUrl sets GithubUrl field to given value.

### HasGithubUrl

`func (o *AccountInfoData) HasGithubUrl() bool`

HasGithubUrl returns a boolean if a field has been set.

### GetGoogleId

`func (o *AccountInfoData) GetGoogleId() string`

GetGoogleId returns the GoogleId field if non-nil, zero value otherwise.

### GetGoogleIdOk

`func (o *AccountInfoData) GetGoogleIdOk() (*string, bool)`

GetGoogleIdOk returns a tuple with the GoogleId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetGoogleId

`func (o *AccountInfoData) SetGoogleId(v string)`

SetGoogleId sets GoogleId field to given value.

### HasGoogleId

`func (o *AccountInfoData) HasGoogleId() bool`

HasGoogleId returns a boolean if a field has been set.

### GetGoogleUrl

`func (o *AccountInfoData) GetGoogleUrl() string`

GetGoogleUrl returns the GoogleUrl field if non-nil, zero value otherwise.

### GetGoogleUrlOk

`func (o *AccountInfoData) GetGoogleUrlOk() (*string, bool)`

GetGoogleUrlOk returns a tuple with the GoogleUrl field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetGoogleUrl

`func (o *AccountInfoData) SetGoogleUrl(v string)`

SetGoogleUrl sets GoogleUrl field to given value.

### HasGoogleUrl

`func (o *AccountInfoData) HasGoogleUrl() bool`

HasGoogleUrl returns a boolean if a field has been set.

### GetInnertellId

`func (o *AccountInfoData) GetInnertellId() string`

GetInnertellId returns the InnertellId field if non-nil, zero value otherwise.

### GetInnertellIdOk

`func (o *AccountInfoData) GetInnertellIdOk() (*string, bool)`

GetInnertellIdOk returns a tuple with the InnertellId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetInnertellId

`func (o *AccountInfoData) SetInnertellId(v string)`

SetInnertellId sets InnertellId field to given value.

### HasInnertellId

`func (o *AccountInfoData) HasInnertellId() bool`

HasInnertellId returns a boolean if a field has been set.

### GetLastname

`func (o *AccountInfoData) GetLastname() string`

GetLastname returns the Lastname field if non-nil, zero value otherwise.

### GetLastnameOk

`func (o *AccountInfoData) GetLastnameOk() (*string, bool)`

GetLastnameOk returns a tuple with the Lastname field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetLastname

`func (o *AccountInfoData) SetLastname(v string)`

SetLastname sets Lastname field to given value.

### HasLastname

`func (o *AccountInfoData) HasLastname() bool`

HasLastname returns a boolean if a field has been set.

### GetLocale

`func (o *AccountInfoData) GetLocale() string`

GetLocale returns the Locale field if non-nil, zero value otherwise.

### GetLocaleOk

`func (o *AccountInfoData) GetLocaleOk() (*string, bool)`

GetLocaleOk returns a tuple with the Locale field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetLocale

`func (o *AccountInfoData) SetLocale(v string)`

SetLocale sets Locale field to given value.

### HasLocale

`func (o *AccountInfoData) HasLocale() bool`

HasLocale returns a boolean if a field has been set.

### GetMaxmind

`func (o *AccountInfoData) GetMaxmind() AccountInfoMaxMindResponse`

GetMaxmind returns the Maxmind field if non-nil, zero value otherwise.

### GetMaxmindOk

`func (o *AccountInfoData) GetMaxmindOk() (*AccountInfoMaxMindResponse, bool)`

GetMaxmindOk returns a tuple with the Maxmind field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetMaxmind

`func (o *AccountInfoData) SetMaxmind(v AccountInfoMaxMindResponse)`

SetMaxmind sets Maxmind field to given value.

### HasMaxmind

`func (o *AccountInfoData) HasMaxmind() bool`

HasMaxmind returns a boolean if a field has been set.

### GetMaxmindScore

`func (o *AccountInfoData) GetMaxmindScore() string`

GetMaxmindScore returns the MaxmindScore field if non-nil, zero value otherwise.

### GetMaxmindScoreOk

`func (o *AccountInfoData) GetMaxmindScoreOk() (*string, bool)`

GetMaxmindScoreOk returns a tuple with the MaxmindScore field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetMaxmindScore

`func (o *AccountInfoData) SetMaxmindScore(v string)`

SetMaxmindScore sets MaxmindScore field to given value.

### HasMaxmindScore

`func (o *AccountInfoData) HasMaxmindScore() bool`

HasMaxmindScore returns a boolean if a field has been set.

### GetMbId

`func (o *AccountInfoData) GetMbId() string`

GetMbId returns the MbId field if non-nil, zero value otherwise.

### GetMbIdOk

`func (o *AccountInfoData) GetMbIdOk() (*string, bool)`

GetMbIdOk returns a tuple with the MbId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetMbId

`func (o *AccountInfoData) SetMbId(v string)`

SetMbId sets MbId field to given value.

### HasMbId

`func (o *AccountInfoData) HasMbId() bool`

HasMbId returns a boolean if a field has been set.

### GetModernbillId

`func (o *AccountInfoData) GetModernbillId() string`

GetModernbillId returns the ModernbillId field if non-nil, zero value otherwise.

### GetModernbillIdOk

`func (o *AccountInfoData) GetModernbillIdOk() (*string, bool)`

GetModernbillIdOk returns a tuple with the ModernbillId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetModernbillId

`func (o *AccountInfoData) SetModernbillId(v string)`

SetModernbillId sets ModernbillId field to given value.

### HasModernbillId

`func (o *AccountInfoData) HasModernbillId() bool`

HasModernbillId returns a boolean if a field has been set.

### GetPicture

`func (o *AccountInfoData) GetPicture() string`

GetPicture returns the Picture field if non-nil, zero value otherwise.

### GetPictureOk

`func (o *AccountInfoData) GetPictureOk() (*string, bool)`

GetPictureOk returns a tuple with the Picture field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPicture

`func (o *AccountInfoData) SetPicture(v string)`

SetPicture sets Picture field to given value.

### HasPicture

`func (o *AccountInfoData) HasPicture() bool`

HasPicture returns a boolean if a field has been set.

### GetReferrerCoupon

`func (o *AccountInfoData) GetReferrerCoupon() string`

GetReferrerCoupon returns the ReferrerCoupon field if non-nil, zero value otherwise.

### GetReferrerCouponOk

`func (o *AccountInfoData) GetReferrerCouponOk() (*string, bool)`

GetReferrerCouponOk returns a tuple with the ReferrerCoupon field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetReferrerCoupon

`func (o *AccountInfoData) SetReferrerCoupon(v string)`

SetReferrerCoupon sets ReferrerCoupon field to given value.

### HasReferrerCoupon

`func (o *AccountInfoData) HasReferrerCoupon() bool`

HasReferrerCoupon returns a boolean if a field has been set.

### GetResellerMarkup

`func (o *AccountInfoData) GetResellerMarkup() string`

GetResellerMarkup returns the ResellerMarkup field if non-nil, zero value otherwise.

### GetResellerMarkupOk

`func (o *AccountInfoData) GetResellerMarkupOk() (*string, bool)`

GetResellerMarkupOk returns a tuple with the ResellerMarkup field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetResellerMarkup

`func (o *AccountInfoData) SetResellerMarkup(v string)`

SetResellerMarkup sets ResellerMarkup field to given value.

### HasResellerMarkup

`func (o *AccountInfoData) HasResellerMarkup() bool`

HasResellerMarkup returns a boolean if a field has been set.

### GetUsername

`func (o *AccountInfoData) GetUsername() string`

GetUsername returns the Username field if non-nil, zero value otherwise.

### GetUsernameOk

`func (o *AccountInfoData) GetUsernameOk() (*string, bool)`

GetUsernameOk returns a tuple with the Username field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetUsername

`func (o *AccountInfoData) SetUsername(v string)`

SetUsername sets Username field to given value.

### HasUsername

`func (o *AccountInfoData) HasUsername() bool`

HasUsername returns a boolean if a field has been set.

### GetSshKey

`func (o *AccountInfoData) GetSshKey() string`

GetSshKey returns the SshKey field if non-nil, zero value otherwise.

### GetSshKeyOk

`func (o *AccountInfoData) GetSshKeyOk() (*string, bool)`

GetSshKeyOk returns a tuple with the SshKey field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSshKey

`func (o *AccountInfoData) SetSshKey(v string)`

SetSshKey sets SshKey field to given value.

### HasSshKey

`func (o *AccountInfoData) HasSshKey() bool`

HasSshKey returns a boolean if a field has been set.

### GetSshKeyWrapped

`func (o *AccountInfoData) GetSshKeyWrapped() string`

GetSshKeyWrapped returns the SshKeyWrapped field if non-nil, zero value otherwise.

### GetSshKeyWrappedOk

`func (o *AccountInfoData) GetSshKeyWrappedOk() (*string, bool)`

GetSshKeyWrappedOk returns a tuple with the SshKeyWrapped field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSshKeyWrapped

`func (o *AccountInfoData) SetSshKeyWrapped(v string)`

SetSshKeyWrapped sets SshKeyWrapped field to given value.

### HasSshKeyWrapped

`func (o *AccountInfoData) HasSshKeyWrapped() bool`

HasSshKeyWrapped returns a boolean if a field has been set.

### GetApiKey

`func (o *AccountInfoData) GetApiKey() string`

GetApiKey returns the ApiKey field if non-nil, zero value otherwise.

### GetApiKeyOk

`func (o *AccountInfoData) GetApiKeyOk() (*string, bool)`

GetApiKeyOk returns a tuple with the ApiKey field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetApiKey

`func (o *AccountInfoData) SetApiKey(v string)`

SetApiKey sets ApiKey field to given value.

### HasApiKey

`func (o *AccountInfoData) HasApiKey() bool`

HasApiKey returns a boolean if a field has been set.

### GetApiKeyWrapped

`func (o *AccountInfoData) GetApiKeyWrapped() string`

GetApiKeyWrapped returns the ApiKeyWrapped field if non-nil, zero value otherwise.

### GetApiKeyWrappedOk

`func (o *AccountInfoData) GetApiKeyWrappedOk() (*string, bool)`

GetApiKeyWrappedOk returns a tuple with the ApiKeyWrapped field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetApiKeyWrapped

`func (o *AccountInfoData) SetApiKeyWrapped(v string)`

SetApiKeyWrapped sets ApiKeyWrapped field to given value.

### HasApiKeyWrapped

`func (o *AccountInfoData) HasApiKeyWrapped() bool`

HasApiKeyWrapped returns a boolean if a field has been set.

### GetVar2faGoogleKey

`func (o *AccountInfoData) GetVar2faGoogleKey() string`

GetVar2faGoogleKey returns the Var2faGoogleKey field if non-nil, zero value otherwise.

### GetVar2faGoogleKeyOk

`func (o *AccountInfoData) GetVar2faGoogleKeyOk() (*string, bool)`

GetVar2faGoogleKeyOk returns a tuple with the Var2faGoogleKey field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetVar2faGoogleKey

`func (o *AccountInfoData) SetVar2faGoogleKey(v string)`

SetVar2faGoogleKey sets Var2faGoogleKey field to given value.

### HasVar2faGoogleKey

`func (o *AccountInfoData) HasVar2faGoogleKey() bool`

HasVar2faGoogleKey returns a boolean if a field has been set.

### GetVar2faGoogleEnabled

`func (o *AccountInfoData) GetVar2faGoogleEnabled() bool`

GetVar2faGoogleEnabled returns the Var2faGoogleEnabled field if non-nil, zero value otherwise.

### GetVar2faGoogleEnabledOk

`func (o *AccountInfoData) GetVar2faGoogleEnabledOk() (*bool, bool)`

GetVar2faGoogleEnabledOk returns a tuple with the Var2faGoogleEnabled field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetVar2faGoogleEnabled

`func (o *AccountInfoData) SetVar2faGoogleEnabled(v bool)`

SetVar2faGoogleEnabled sets Var2faGoogleEnabled field to given value.

### HasVar2faGoogleEnabled

`func (o *AccountInfoData) HasVar2faGoogleEnabled() bool`

HasVar2faGoogleEnabled returns a boolean if a field has been set.

### GetVar2faGoogle

`func (o *AccountInfoData) GetVar2faGoogle() int32`

GetVar2faGoogle returns the Var2faGoogle field if non-nil, zero value otherwise.

### GetVar2faGoogleOk

`func (o *AccountInfoData) GetVar2faGoogleOk() (*int32, bool)`

GetVar2faGoogleOk returns a tuple with the Var2faGoogle field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetVar2faGoogle

`func (o *AccountInfoData) SetVar2faGoogle(v int32)`

SetVar2faGoogle sets Var2faGoogle field to given value.

### HasVar2faGoogle

`func (o *AccountInfoData) HasVar2faGoogle() bool`

HasVar2faGoogle returns a boolean if a field has been set.

### GetVar2faGoogleSplit

`func (o *AccountInfoData) GetVar2faGoogleSplit() string`

GetVar2faGoogleSplit returns the Var2faGoogleSplit field if non-nil, zero value otherwise.

### GetVar2faGoogleSplitOk

`func (o *AccountInfoData) GetVar2faGoogleSplitOk() (*string, bool)`

GetVar2faGoogleSplitOk returns a tuple with the Var2faGoogleSplit field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetVar2faGoogleSplit

`func (o *AccountInfoData) SetVar2faGoogleSplit(v string)`

SetVar2faGoogleSplit sets Var2faGoogleSplit field to given value.

### HasVar2faGoogleSplit

`func (o *AccountInfoData) HasVar2faGoogleSplit() bool`

HasVar2faGoogleSplit returns a boolean if a field has been set.

### GetVar2faGoogleQr

`func (o *AccountInfoData) GetVar2faGoogleQr() string`

GetVar2faGoogleQr returns the Var2faGoogleQr field if non-nil, zero value otherwise.

### GetVar2faGoogleQrOk

`func (o *AccountInfoData) GetVar2faGoogleQrOk() (*string, bool)`

GetVar2faGoogleQrOk returns a tuple with the Var2faGoogleQr field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetVar2faGoogleQr

`func (o *AccountInfoData) SetVar2faGoogleQr(v string)`

SetVar2faGoogleQr sets Var2faGoogleQr field to given value.

### HasVar2faGoogleQr

`func (o *AccountInfoData) HasVar2faGoogleQr() bool`

HasVar2faGoogleQr returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


