# AccountInfoMaxMindResponse

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Distance** | Pointer to **string** |  | [optional] 
**CountryMatch** | Pointer to **string** |  | [optional] 
**CountryCode** | Pointer to **string** |  | [optional] 
**FreeMail** | Pointer to **string** |  | [optional] 
**AnonymousProxy** | Pointer to **string** |  | [optional] 
**Score** | Pointer to **string** |  | [optional] 
**BinMatch** | Pointer to **string** |  | [optional] 
**BinCountry** | Pointer to **string** |  | [optional] 
**Err** | Pointer to **string** |  | [optional] 
**ProxyScore** | Pointer to **string** |  | [optional] 
**IpRegion** | Pointer to **string** |  | [optional] 
**IpCity** | Pointer to **string** |  | [optional] 
**IpLatitude** | Pointer to **string** |  | [optional] 
**IpLongitude** | Pointer to **string** |  | [optional] 
**BinName** | Pointer to **string** |  | [optional] 
**IpIsp** | Pointer to **string** |  | [optional] 
**IpOrg** | Pointer to **string** |  | [optional] 
**BinNameMatch** | Pointer to **string** |  | [optional] 
**BinPhoneMatch** | Pointer to **string** |  | [optional] 
**BinPhone** | Pointer to **string** |  | [optional] 
**CustPhoneInBillingLoc** | Pointer to **string** |  | [optional] 
**HighRiskCountry** | Pointer to **string** |  | [optional] 
**QueriesRemaining** | Pointer to **string** |  | [optional] 
**CityPostalMatch** | Pointer to **string** |  | [optional] 
**ShipCityPostalMatch** | Pointer to **string** |  | [optional] 
**MaxmindID** | Pointer to **string** |  | [optional] 
**IpAsnum** | Pointer to **string** |  | [optional] 
**IpUserType** | Pointer to **string** |  | [optional] 
**IpCountryConf** | Pointer to **string** |  | [optional] 
**IpRegionConf** | Pointer to **string** |  | [optional] 
**IpCityConf** | Pointer to **string** |  | [optional] 
**IpPostalCode** | Pointer to **string** |  | [optional] 
**IpPostalConf** | Pointer to **string** |  | [optional] 
**IpAccuracyRadius** | Pointer to **string** |  | [optional] 
**IpNetSpeedCell** | Pointer to **string** |  | [optional] 
**IpMetroCode** | Pointer to **string** |  | [optional] 
**IpAreaCode** | Pointer to **string** |  | [optional] 
**IpTimeZone** | Pointer to **string** |  | [optional] 
**IpRegionName** | Pointer to **string** |  | [optional] 
**IpDomain** | Pointer to **string** |  | [optional] 
**IpCountryName** | Pointer to **string** |  | [optional] 
**IpContinentCode** | Pointer to **string** |  | [optional] 
**IpCorporateProxy** | Pointer to **string** |  | [optional] 
**CarderEmail** | Pointer to **string** |  | [optional] 
**HighRiskUsername** | Pointer to **string** |  | [optional] 
**HighRiskPassword** | Pointer to **string** |  | [optional] 
**RiskScore** | Pointer to [**AccountInfoMaxMindResponseRiskScore**](AccountInfoMaxMindResponseRiskScore.md) |  | [optional] 
**IsTransProxy** | Pointer to **string** |  | [optional] 
**Prepaid** | Pointer to **string** |  | [optional] 
**MinfraudVersion** | Pointer to **string** |  | [optional] 
**ServiceLevel** | Pointer to **string** |  | [optional] 
**Explanation** | Pointer to **string** |  | [optional] 
**FemaleName** | Pointer to **string** |  | [optional] 

## Methods

### NewAccountInfoMaxMindResponse

`func NewAccountInfoMaxMindResponse() *AccountInfoMaxMindResponse`

NewAccountInfoMaxMindResponse instantiates a new AccountInfoMaxMindResponse object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewAccountInfoMaxMindResponseWithDefaults

`func NewAccountInfoMaxMindResponseWithDefaults() *AccountInfoMaxMindResponse`

NewAccountInfoMaxMindResponseWithDefaults instantiates a new AccountInfoMaxMindResponse object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetDistance

`func (o *AccountInfoMaxMindResponse) GetDistance() string`

GetDistance returns the Distance field if non-nil, zero value otherwise.

### GetDistanceOk

`func (o *AccountInfoMaxMindResponse) GetDistanceOk() (*string, bool)`

GetDistanceOk returns a tuple with the Distance field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDistance

`func (o *AccountInfoMaxMindResponse) SetDistance(v string)`

SetDistance sets Distance field to given value.

### HasDistance

`func (o *AccountInfoMaxMindResponse) HasDistance() bool`

HasDistance returns a boolean if a field has been set.

### GetCountryMatch

`func (o *AccountInfoMaxMindResponse) GetCountryMatch() string`

GetCountryMatch returns the CountryMatch field if non-nil, zero value otherwise.

### GetCountryMatchOk

`func (o *AccountInfoMaxMindResponse) GetCountryMatchOk() (*string, bool)`

GetCountryMatchOk returns a tuple with the CountryMatch field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCountryMatch

`func (o *AccountInfoMaxMindResponse) SetCountryMatch(v string)`

SetCountryMatch sets CountryMatch field to given value.

### HasCountryMatch

`func (o *AccountInfoMaxMindResponse) HasCountryMatch() bool`

HasCountryMatch returns a boolean if a field has been set.

### GetCountryCode

`func (o *AccountInfoMaxMindResponse) GetCountryCode() string`

GetCountryCode returns the CountryCode field if non-nil, zero value otherwise.

### GetCountryCodeOk

`func (o *AccountInfoMaxMindResponse) GetCountryCodeOk() (*string, bool)`

GetCountryCodeOk returns a tuple with the CountryCode field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCountryCode

`func (o *AccountInfoMaxMindResponse) SetCountryCode(v string)`

SetCountryCode sets CountryCode field to given value.

### HasCountryCode

`func (o *AccountInfoMaxMindResponse) HasCountryCode() bool`

HasCountryCode returns a boolean if a field has been set.

### GetFreeMail

`func (o *AccountInfoMaxMindResponse) GetFreeMail() string`

GetFreeMail returns the FreeMail field if non-nil, zero value otherwise.

### GetFreeMailOk

`func (o *AccountInfoMaxMindResponse) GetFreeMailOk() (*string, bool)`

GetFreeMailOk returns a tuple with the FreeMail field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetFreeMail

`func (o *AccountInfoMaxMindResponse) SetFreeMail(v string)`

SetFreeMail sets FreeMail field to given value.

### HasFreeMail

`func (o *AccountInfoMaxMindResponse) HasFreeMail() bool`

HasFreeMail returns a boolean if a field has been set.

### GetAnonymousProxy

`func (o *AccountInfoMaxMindResponse) GetAnonymousProxy() string`

GetAnonymousProxy returns the AnonymousProxy field if non-nil, zero value otherwise.

### GetAnonymousProxyOk

`func (o *AccountInfoMaxMindResponse) GetAnonymousProxyOk() (*string, bool)`

GetAnonymousProxyOk returns a tuple with the AnonymousProxy field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetAnonymousProxy

`func (o *AccountInfoMaxMindResponse) SetAnonymousProxy(v string)`

SetAnonymousProxy sets AnonymousProxy field to given value.

### HasAnonymousProxy

`func (o *AccountInfoMaxMindResponse) HasAnonymousProxy() bool`

HasAnonymousProxy returns a boolean if a field has been set.

### GetScore

`func (o *AccountInfoMaxMindResponse) GetScore() string`

GetScore returns the Score field if non-nil, zero value otherwise.

### GetScoreOk

`func (o *AccountInfoMaxMindResponse) GetScoreOk() (*string, bool)`

GetScoreOk returns a tuple with the Score field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetScore

`func (o *AccountInfoMaxMindResponse) SetScore(v string)`

SetScore sets Score field to given value.

### HasScore

`func (o *AccountInfoMaxMindResponse) HasScore() bool`

HasScore returns a boolean if a field has been set.

### GetBinMatch

`func (o *AccountInfoMaxMindResponse) GetBinMatch() string`

GetBinMatch returns the BinMatch field if non-nil, zero value otherwise.

### GetBinMatchOk

`func (o *AccountInfoMaxMindResponse) GetBinMatchOk() (*string, bool)`

GetBinMatchOk returns a tuple with the BinMatch field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetBinMatch

`func (o *AccountInfoMaxMindResponse) SetBinMatch(v string)`

SetBinMatch sets BinMatch field to given value.

### HasBinMatch

`func (o *AccountInfoMaxMindResponse) HasBinMatch() bool`

HasBinMatch returns a boolean if a field has been set.

### GetBinCountry

`func (o *AccountInfoMaxMindResponse) GetBinCountry() string`

GetBinCountry returns the BinCountry field if non-nil, zero value otherwise.

### GetBinCountryOk

`func (o *AccountInfoMaxMindResponse) GetBinCountryOk() (*string, bool)`

GetBinCountryOk returns a tuple with the BinCountry field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetBinCountry

`func (o *AccountInfoMaxMindResponse) SetBinCountry(v string)`

SetBinCountry sets BinCountry field to given value.

### HasBinCountry

`func (o *AccountInfoMaxMindResponse) HasBinCountry() bool`

HasBinCountry returns a boolean if a field has been set.

### GetErr

`func (o *AccountInfoMaxMindResponse) GetErr() string`

GetErr returns the Err field if non-nil, zero value otherwise.

### GetErrOk

`func (o *AccountInfoMaxMindResponse) GetErrOk() (*string, bool)`

GetErrOk returns a tuple with the Err field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetErr

`func (o *AccountInfoMaxMindResponse) SetErr(v string)`

SetErr sets Err field to given value.

### HasErr

`func (o *AccountInfoMaxMindResponse) HasErr() bool`

HasErr returns a boolean if a field has been set.

### GetProxyScore

`func (o *AccountInfoMaxMindResponse) GetProxyScore() string`

GetProxyScore returns the ProxyScore field if non-nil, zero value otherwise.

### GetProxyScoreOk

`func (o *AccountInfoMaxMindResponse) GetProxyScoreOk() (*string, bool)`

GetProxyScoreOk returns a tuple with the ProxyScore field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetProxyScore

`func (o *AccountInfoMaxMindResponse) SetProxyScore(v string)`

SetProxyScore sets ProxyScore field to given value.

### HasProxyScore

`func (o *AccountInfoMaxMindResponse) HasProxyScore() bool`

HasProxyScore returns a boolean if a field has been set.

### GetIpRegion

`func (o *AccountInfoMaxMindResponse) GetIpRegion() string`

GetIpRegion returns the IpRegion field if non-nil, zero value otherwise.

### GetIpRegionOk

`func (o *AccountInfoMaxMindResponse) GetIpRegionOk() (*string, bool)`

GetIpRegionOk returns a tuple with the IpRegion field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIpRegion

`func (o *AccountInfoMaxMindResponse) SetIpRegion(v string)`

SetIpRegion sets IpRegion field to given value.

### HasIpRegion

`func (o *AccountInfoMaxMindResponse) HasIpRegion() bool`

HasIpRegion returns a boolean if a field has been set.

### GetIpCity

`func (o *AccountInfoMaxMindResponse) GetIpCity() string`

GetIpCity returns the IpCity field if non-nil, zero value otherwise.

### GetIpCityOk

`func (o *AccountInfoMaxMindResponse) GetIpCityOk() (*string, bool)`

GetIpCityOk returns a tuple with the IpCity field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIpCity

`func (o *AccountInfoMaxMindResponse) SetIpCity(v string)`

SetIpCity sets IpCity field to given value.

### HasIpCity

`func (o *AccountInfoMaxMindResponse) HasIpCity() bool`

HasIpCity returns a boolean if a field has been set.

### GetIpLatitude

`func (o *AccountInfoMaxMindResponse) GetIpLatitude() string`

GetIpLatitude returns the IpLatitude field if non-nil, zero value otherwise.

### GetIpLatitudeOk

`func (o *AccountInfoMaxMindResponse) GetIpLatitudeOk() (*string, bool)`

GetIpLatitudeOk returns a tuple with the IpLatitude field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIpLatitude

`func (o *AccountInfoMaxMindResponse) SetIpLatitude(v string)`

SetIpLatitude sets IpLatitude field to given value.

### HasIpLatitude

`func (o *AccountInfoMaxMindResponse) HasIpLatitude() bool`

HasIpLatitude returns a boolean if a field has been set.

### GetIpLongitude

`func (o *AccountInfoMaxMindResponse) GetIpLongitude() string`

GetIpLongitude returns the IpLongitude field if non-nil, zero value otherwise.

### GetIpLongitudeOk

`func (o *AccountInfoMaxMindResponse) GetIpLongitudeOk() (*string, bool)`

GetIpLongitudeOk returns a tuple with the IpLongitude field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIpLongitude

`func (o *AccountInfoMaxMindResponse) SetIpLongitude(v string)`

SetIpLongitude sets IpLongitude field to given value.

### HasIpLongitude

`func (o *AccountInfoMaxMindResponse) HasIpLongitude() bool`

HasIpLongitude returns a boolean if a field has been set.

### GetBinName

`func (o *AccountInfoMaxMindResponse) GetBinName() string`

GetBinName returns the BinName field if non-nil, zero value otherwise.

### GetBinNameOk

`func (o *AccountInfoMaxMindResponse) GetBinNameOk() (*string, bool)`

GetBinNameOk returns a tuple with the BinName field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetBinName

`func (o *AccountInfoMaxMindResponse) SetBinName(v string)`

SetBinName sets BinName field to given value.

### HasBinName

`func (o *AccountInfoMaxMindResponse) HasBinName() bool`

HasBinName returns a boolean if a field has been set.

### GetIpIsp

`func (o *AccountInfoMaxMindResponse) GetIpIsp() string`

GetIpIsp returns the IpIsp field if non-nil, zero value otherwise.

### GetIpIspOk

`func (o *AccountInfoMaxMindResponse) GetIpIspOk() (*string, bool)`

GetIpIspOk returns a tuple with the IpIsp field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIpIsp

`func (o *AccountInfoMaxMindResponse) SetIpIsp(v string)`

SetIpIsp sets IpIsp field to given value.

### HasIpIsp

`func (o *AccountInfoMaxMindResponse) HasIpIsp() bool`

HasIpIsp returns a boolean if a field has been set.

### GetIpOrg

`func (o *AccountInfoMaxMindResponse) GetIpOrg() string`

GetIpOrg returns the IpOrg field if non-nil, zero value otherwise.

### GetIpOrgOk

`func (o *AccountInfoMaxMindResponse) GetIpOrgOk() (*string, bool)`

GetIpOrgOk returns a tuple with the IpOrg field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIpOrg

`func (o *AccountInfoMaxMindResponse) SetIpOrg(v string)`

SetIpOrg sets IpOrg field to given value.

### HasIpOrg

`func (o *AccountInfoMaxMindResponse) HasIpOrg() bool`

HasIpOrg returns a boolean if a field has been set.

### GetBinNameMatch

`func (o *AccountInfoMaxMindResponse) GetBinNameMatch() string`

GetBinNameMatch returns the BinNameMatch field if non-nil, zero value otherwise.

### GetBinNameMatchOk

`func (o *AccountInfoMaxMindResponse) GetBinNameMatchOk() (*string, bool)`

GetBinNameMatchOk returns a tuple with the BinNameMatch field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetBinNameMatch

`func (o *AccountInfoMaxMindResponse) SetBinNameMatch(v string)`

SetBinNameMatch sets BinNameMatch field to given value.

### HasBinNameMatch

`func (o *AccountInfoMaxMindResponse) HasBinNameMatch() bool`

HasBinNameMatch returns a boolean if a field has been set.

### GetBinPhoneMatch

`func (o *AccountInfoMaxMindResponse) GetBinPhoneMatch() string`

GetBinPhoneMatch returns the BinPhoneMatch field if non-nil, zero value otherwise.

### GetBinPhoneMatchOk

`func (o *AccountInfoMaxMindResponse) GetBinPhoneMatchOk() (*string, bool)`

GetBinPhoneMatchOk returns a tuple with the BinPhoneMatch field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetBinPhoneMatch

`func (o *AccountInfoMaxMindResponse) SetBinPhoneMatch(v string)`

SetBinPhoneMatch sets BinPhoneMatch field to given value.

### HasBinPhoneMatch

`func (o *AccountInfoMaxMindResponse) HasBinPhoneMatch() bool`

HasBinPhoneMatch returns a boolean if a field has been set.

### GetBinPhone

`func (o *AccountInfoMaxMindResponse) GetBinPhone() string`

GetBinPhone returns the BinPhone field if non-nil, zero value otherwise.

### GetBinPhoneOk

`func (o *AccountInfoMaxMindResponse) GetBinPhoneOk() (*string, bool)`

GetBinPhoneOk returns a tuple with the BinPhone field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetBinPhone

`func (o *AccountInfoMaxMindResponse) SetBinPhone(v string)`

SetBinPhone sets BinPhone field to given value.

### HasBinPhone

`func (o *AccountInfoMaxMindResponse) HasBinPhone() bool`

HasBinPhone returns a boolean if a field has been set.

### GetCustPhoneInBillingLoc

`func (o *AccountInfoMaxMindResponse) GetCustPhoneInBillingLoc() string`

GetCustPhoneInBillingLoc returns the CustPhoneInBillingLoc field if non-nil, zero value otherwise.

### GetCustPhoneInBillingLocOk

`func (o *AccountInfoMaxMindResponse) GetCustPhoneInBillingLocOk() (*string, bool)`

GetCustPhoneInBillingLocOk returns a tuple with the CustPhoneInBillingLoc field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCustPhoneInBillingLoc

`func (o *AccountInfoMaxMindResponse) SetCustPhoneInBillingLoc(v string)`

SetCustPhoneInBillingLoc sets CustPhoneInBillingLoc field to given value.

### HasCustPhoneInBillingLoc

`func (o *AccountInfoMaxMindResponse) HasCustPhoneInBillingLoc() bool`

HasCustPhoneInBillingLoc returns a boolean if a field has been set.

### GetHighRiskCountry

`func (o *AccountInfoMaxMindResponse) GetHighRiskCountry() string`

GetHighRiskCountry returns the HighRiskCountry field if non-nil, zero value otherwise.

### GetHighRiskCountryOk

`func (o *AccountInfoMaxMindResponse) GetHighRiskCountryOk() (*string, bool)`

GetHighRiskCountryOk returns a tuple with the HighRiskCountry field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetHighRiskCountry

`func (o *AccountInfoMaxMindResponse) SetHighRiskCountry(v string)`

SetHighRiskCountry sets HighRiskCountry field to given value.

### HasHighRiskCountry

`func (o *AccountInfoMaxMindResponse) HasHighRiskCountry() bool`

HasHighRiskCountry returns a boolean if a field has been set.

### GetQueriesRemaining

`func (o *AccountInfoMaxMindResponse) GetQueriesRemaining() string`

GetQueriesRemaining returns the QueriesRemaining field if non-nil, zero value otherwise.

### GetQueriesRemainingOk

`func (o *AccountInfoMaxMindResponse) GetQueriesRemainingOk() (*string, bool)`

GetQueriesRemainingOk returns a tuple with the QueriesRemaining field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetQueriesRemaining

`func (o *AccountInfoMaxMindResponse) SetQueriesRemaining(v string)`

SetQueriesRemaining sets QueriesRemaining field to given value.

### HasQueriesRemaining

`func (o *AccountInfoMaxMindResponse) HasQueriesRemaining() bool`

HasQueriesRemaining returns a boolean if a field has been set.

### GetCityPostalMatch

`func (o *AccountInfoMaxMindResponse) GetCityPostalMatch() string`

GetCityPostalMatch returns the CityPostalMatch field if non-nil, zero value otherwise.

### GetCityPostalMatchOk

`func (o *AccountInfoMaxMindResponse) GetCityPostalMatchOk() (*string, bool)`

GetCityPostalMatchOk returns a tuple with the CityPostalMatch field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCityPostalMatch

`func (o *AccountInfoMaxMindResponse) SetCityPostalMatch(v string)`

SetCityPostalMatch sets CityPostalMatch field to given value.

### HasCityPostalMatch

`func (o *AccountInfoMaxMindResponse) HasCityPostalMatch() bool`

HasCityPostalMatch returns a boolean if a field has been set.

### GetShipCityPostalMatch

`func (o *AccountInfoMaxMindResponse) GetShipCityPostalMatch() string`

GetShipCityPostalMatch returns the ShipCityPostalMatch field if non-nil, zero value otherwise.

### GetShipCityPostalMatchOk

`func (o *AccountInfoMaxMindResponse) GetShipCityPostalMatchOk() (*string, bool)`

GetShipCityPostalMatchOk returns a tuple with the ShipCityPostalMatch field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetShipCityPostalMatch

`func (o *AccountInfoMaxMindResponse) SetShipCityPostalMatch(v string)`

SetShipCityPostalMatch sets ShipCityPostalMatch field to given value.

### HasShipCityPostalMatch

`func (o *AccountInfoMaxMindResponse) HasShipCityPostalMatch() bool`

HasShipCityPostalMatch returns a boolean if a field has been set.

### GetMaxmindID

`func (o *AccountInfoMaxMindResponse) GetMaxmindID() string`

GetMaxmindID returns the MaxmindID field if non-nil, zero value otherwise.

### GetMaxmindIDOk

`func (o *AccountInfoMaxMindResponse) GetMaxmindIDOk() (*string, bool)`

GetMaxmindIDOk returns a tuple with the MaxmindID field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetMaxmindID

`func (o *AccountInfoMaxMindResponse) SetMaxmindID(v string)`

SetMaxmindID sets MaxmindID field to given value.

### HasMaxmindID

`func (o *AccountInfoMaxMindResponse) HasMaxmindID() bool`

HasMaxmindID returns a boolean if a field has been set.

### GetIpAsnum

`func (o *AccountInfoMaxMindResponse) GetIpAsnum() string`

GetIpAsnum returns the IpAsnum field if non-nil, zero value otherwise.

### GetIpAsnumOk

`func (o *AccountInfoMaxMindResponse) GetIpAsnumOk() (*string, bool)`

GetIpAsnumOk returns a tuple with the IpAsnum field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIpAsnum

`func (o *AccountInfoMaxMindResponse) SetIpAsnum(v string)`

SetIpAsnum sets IpAsnum field to given value.

### HasIpAsnum

`func (o *AccountInfoMaxMindResponse) HasIpAsnum() bool`

HasIpAsnum returns a boolean if a field has been set.

### GetIpUserType

`func (o *AccountInfoMaxMindResponse) GetIpUserType() string`

GetIpUserType returns the IpUserType field if non-nil, zero value otherwise.

### GetIpUserTypeOk

`func (o *AccountInfoMaxMindResponse) GetIpUserTypeOk() (*string, bool)`

GetIpUserTypeOk returns a tuple with the IpUserType field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIpUserType

`func (o *AccountInfoMaxMindResponse) SetIpUserType(v string)`

SetIpUserType sets IpUserType field to given value.

### HasIpUserType

`func (o *AccountInfoMaxMindResponse) HasIpUserType() bool`

HasIpUserType returns a boolean if a field has been set.

### GetIpCountryConf

`func (o *AccountInfoMaxMindResponse) GetIpCountryConf() string`

GetIpCountryConf returns the IpCountryConf field if non-nil, zero value otherwise.

### GetIpCountryConfOk

`func (o *AccountInfoMaxMindResponse) GetIpCountryConfOk() (*string, bool)`

GetIpCountryConfOk returns a tuple with the IpCountryConf field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIpCountryConf

`func (o *AccountInfoMaxMindResponse) SetIpCountryConf(v string)`

SetIpCountryConf sets IpCountryConf field to given value.

### HasIpCountryConf

`func (o *AccountInfoMaxMindResponse) HasIpCountryConf() bool`

HasIpCountryConf returns a boolean if a field has been set.

### GetIpRegionConf

`func (o *AccountInfoMaxMindResponse) GetIpRegionConf() string`

GetIpRegionConf returns the IpRegionConf field if non-nil, zero value otherwise.

### GetIpRegionConfOk

`func (o *AccountInfoMaxMindResponse) GetIpRegionConfOk() (*string, bool)`

GetIpRegionConfOk returns a tuple with the IpRegionConf field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIpRegionConf

`func (o *AccountInfoMaxMindResponse) SetIpRegionConf(v string)`

SetIpRegionConf sets IpRegionConf field to given value.

### HasIpRegionConf

`func (o *AccountInfoMaxMindResponse) HasIpRegionConf() bool`

HasIpRegionConf returns a boolean if a field has been set.

### GetIpCityConf

`func (o *AccountInfoMaxMindResponse) GetIpCityConf() string`

GetIpCityConf returns the IpCityConf field if non-nil, zero value otherwise.

### GetIpCityConfOk

`func (o *AccountInfoMaxMindResponse) GetIpCityConfOk() (*string, bool)`

GetIpCityConfOk returns a tuple with the IpCityConf field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIpCityConf

`func (o *AccountInfoMaxMindResponse) SetIpCityConf(v string)`

SetIpCityConf sets IpCityConf field to given value.

### HasIpCityConf

`func (o *AccountInfoMaxMindResponse) HasIpCityConf() bool`

HasIpCityConf returns a boolean if a field has been set.

### GetIpPostalCode

`func (o *AccountInfoMaxMindResponse) GetIpPostalCode() string`

GetIpPostalCode returns the IpPostalCode field if non-nil, zero value otherwise.

### GetIpPostalCodeOk

`func (o *AccountInfoMaxMindResponse) GetIpPostalCodeOk() (*string, bool)`

GetIpPostalCodeOk returns a tuple with the IpPostalCode field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIpPostalCode

`func (o *AccountInfoMaxMindResponse) SetIpPostalCode(v string)`

SetIpPostalCode sets IpPostalCode field to given value.

### HasIpPostalCode

`func (o *AccountInfoMaxMindResponse) HasIpPostalCode() bool`

HasIpPostalCode returns a boolean if a field has been set.

### GetIpPostalConf

`func (o *AccountInfoMaxMindResponse) GetIpPostalConf() string`

GetIpPostalConf returns the IpPostalConf field if non-nil, zero value otherwise.

### GetIpPostalConfOk

`func (o *AccountInfoMaxMindResponse) GetIpPostalConfOk() (*string, bool)`

GetIpPostalConfOk returns a tuple with the IpPostalConf field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIpPostalConf

`func (o *AccountInfoMaxMindResponse) SetIpPostalConf(v string)`

SetIpPostalConf sets IpPostalConf field to given value.

### HasIpPostalConf

`func (o *AccountInfoMaxMindResponse) HasIpPostalConf() bool`

HasIpPostalConf returns a boolean if a field has been set.

### GetIpAccuracyRadius

`func (o *AccountInfoMaxMindResponse) GetIpAccuracyRadius() string`

GetIpAccuracyRadius returns the IpAccuracyRadius field if non-nil, zero value otherwise.

### GetIpAccuracyRadiusOk

`func (o *AccountInfoMaxMindResponse) GetIpAccuracyRadiusOk() (*string, bool)`

GetIpAccuracyRadiusOk returns a tuple with the IpAccuracyRadius field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIpAccuracyRadius

`func (o *AccountInfoMaxMindResponse) SetIpAccuracyRadius(v string)`

SetIpAccuracyRadius sets IpAccuracyRadius field to given value.

### HasIpAccuracyRadius

`func (o *AccountInfoMaxMindResponse) HasIpAccuracyRadius() bool`

HasIpAccuracyRadius returns a boolean if a field has been set.

### GetIpNetSpeedCell

`func (o *AccountInfoMaxMindResponse) GetIpNetSpeedCell() string`

GetIpNetSpeedCell returns the IpNetSpeedCell field if non-nil, zero value otherwise.

### GetIpNetSpeedCellOk

`func (o *AccountInfoMaxMindResponse) GetIpNetSpeedCellOk() (*string, bool)`

GetIpNetSpeedCellOk returns a tuple with the IpNetSpeedCell field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIpNetSpeedCell

`func (o *AccountInfoMaxMindResponse) SetIpNetSpeedCell(v string)`

SetIpNetSpeedCell sets IpNetSpeedCell field to given value.

### HasIpNetSpeedCell

`func (o *AccountInfoMaxMindResponse) HasIpNetSpeedCell() bool`

HasIpNetSpeedCell returns a boolean if a field has been set.

### GetIpMetroCode

`func (o *AccountInfoMaxMindResponse) GetIpMetroCode() string`

GetIpMetroCode returns the IpMetroCode field if non-nil, zero value otherwise.

### GetIpMetroCodeOk

`func (o *AccountInfoMaxMindResponse) GetIpMetroCodeOk() (*string, bool)`

GetIpMetroCodeOk returns a tuple with the IpMetroCode field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIpMetroCode

`func (o *AccountInfoMaxMindResponse) SetIpMetroCode(v string)`

SetIpMetroCode sets IpMetroCode field to given value.

### HasIpMetroCode

`func (o *AccountInfoMaxMindResponse) HasIpMetroCode() bool`

HasIpMetroCode returns a boolean if a field has been set.

### GetIpAreaCode

`func (o *AccountInfoMaxMindResponse) GetIpAreaCode() string`

GetIpAreaCode returns the IpAreaCode field if non-nil, zero value otherwise.

### GetIpAreaCodeOk

`func (o *AccountInfoMaxMindResponse) GetIpAreaCodeOk() (*string, bool)`

GetIpAreaCodeOk returns a tuple with the IpAreaCode field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIpAreaCode

`func (o *AccountInfoMaxMindResponse) SetIpAreaCode(v string)`

SetIpAreaCode sets IpAreaCode field to given value.

### HasIpAreaCode

`func (o *AccountInfoMaxMindResponse) HasIpAreaCode() bool`

HasIpAreaCode returns a boolean if a field has been set.

### GetIpTimeZone

`func (o *AccountInfoMaxMindResponse) GetIpTimeZone() string`

GetIpTimeZone returns the IpTimeZone field if non-nil, zero value otherwise.

### GetIpTimeZoneOk

`func (o *AccountInfoMaxMindResponse) GetIpTimeZoneOk() (*string, bool)`

GetIpTimeZoneOk returns a tuple with the IpTimeZone field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIpTimeZone

`func (o *AccountInfoMaxMindResponse) SetIpTimeZone(v string)`

SetIpTimeZone sets IpTimeZone field to given value.

### HasIpTimeZone

`func (o *AccountInfoMaxMindResponse) HasIpTimeZone() bool`

HasIpTimeZone returns a boolean if a field has been set.

### GetIpRegionName

`func (o *AccountInfoMaxMindResponse) GetIpRegionName() string`

GetIpRegionName returns the IpRegionName field if non-nil, zero value otherwise.

### GetIpRegionNameOk

`func (o *AccountInfoMaxMindResponse) GetIpRegionNameOk() (*string, bool)`

GetIpRegionNameOk returns a tuple with the IpRegionName field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIpRegionName

`func (o *AccountInfoMaxMindResponse) SetIpRegionName(v string)`

SetIpRegionName sets IpRegionName field to given value.

### HasIpRegionName

`func (o *AccountInfoMaxMindResponse) HasIpRegionName() bool`

HasIpRegionName returns a boolean if a field has been set.

### GetIpDomain

`func (o *AccountInfoMaxMindResponse) GetIpDomain() string`

GetIpDomain returns the IpDomain field if non-nil, zero value otherwise.

### GetIpDomainOk

`func (o *AccountInfoMaxMindResponse) GetIpDomainOk() (*string, bool)`

GetIpDomainOk returns a tuple with the IpDomain field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIpDomain

`func (o *AccountInfoMaxMindResponse) SetIpDomain(v string)`

SetIpDomain sets IpDomain field to given value.

### HasIpDomain

`func (o *AccountInfoMaxMindResponse) HasIpDomain() bool`

HasIpDomain returns a boolean if a field has been set.

### GetIpCountryName

`func (o *AccountInfoMaxMindResponse) GetIpCountryName() string`

GetIpCountryName returns the IpCountryName field if non-nil, zero value otherwise.

### GetIpCountryNameOk

`func (o *AccountInfoMaxMindResponse) GetIpCountryNameOk() (*string, bool)`

GetIpCountryNameOk returns a tuple with the IpCountryName field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIpCountryName

`func (o *AccountInfoMaxMindResponse) SetIpCountryName(v string)`

SetIpCountryName sets IpCountryName field to given value.

### HasIpCountryName

`func (o *AccountInfoMaxMindResponse) HasIpCountryName() bool`

HasIpCountryName returns a boolean if a field has been set.

### GetIpContinentCode

`func (o *AccountInfoMaxMindResponse) GetIpContinentCode() string`

GetIpContinentCode returns the IpContinentCode field if non-nil, zero value otherwise.

### GetIpContinentCodeOk

`func (o *AccountInfoMaxMindResponse) GetIpContinentCodeOk() (*string, bool)`

GetIpContinentCodeOk returns a tuple with the IpContinentCode field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIpContinentCode

`func (o *AccountInfoMaxMindResponse) SetIpContinentCode(v string)`

SetIpContinentCode sets IpContinentCode field to given value.

### HasIpContinentCode

`func (o *AccountInfoMaxMindResponse) HasIpContinentCode() bool`

HasIpContinentCode returns a boolean if a field has been set.

### GetIpCorporateProxy

`func (o *AccountInfoMaxMindResponse) GetIpCorporateProxy() string`

GetIpCorporateProxy returns the IpCorporateProxy field if non-nil, zero value otherwise.

### GetIpCorporateProxyOk

`func (o *AccountInfoMaxMindResponse) GetIpCorporateProxyOk() (*string, bool)`

GetIpCorporateProxyOk returns a tuple with the IpCorporateProxy field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIpCorporateProxy

`func (o *AccountInfoMaxMindResponse) SetIpCorporateProxy(v string)`

SetIpCorporateProxy sets IpCorporateProxy field to given value.

### HasIpCorporateProxy

`func (o *AccountInfoMaxMindResponse) HasIpCorporateProxy() bool`

HasIpCorporateProxy returns a boolean if a field has been set.

### GetCarderEmail

`func (o *AccountInfoMaxMindResponse) GetCarderEmail() string`

GetCarderEmail returns the CarderEmail field if non-nil, zero value otherwise.

### GetCarderEmailOk

`func (o *AccountInfoMaxMindResponse) GetCarderEmailOk() (*string, bool)`

GetCarderEmailOk returns a tuple with the CarderEmail field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCarderEmail

`func (o *AccountInfoMaxMindResponse) SetCarderEmail(v string)`

SetCarderEmail sets CarderEmail field to given value.

### HasCarderEmail

`func (o *AccountInfoMaxMindResponse) HasCarderEmail() bool`

HasCarderEmail returns a boolean if a field has been set.

### GetHighRiskUsername

`func (o *AccountInfoMaxMindResponse) GetHighRiskUsername() string`

GetHighRiskUsername returns the HighRiskUsername field if non-nil, zero value otherwise.

### GetHighRiskUsernameOk

`func (o *AccountInfoMaxMindResponse) GetHighRiskUsernameOk() (*string, bool)`

GetHighRiskUsernameOk returns a tuple with the HighRiskUsername field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetHighRiskUsername

`func (o *AccountInfoMaxMindResponse) SetHighRiskUsername(v string)`

SetHighRiskUsername sets HighRiskUsername field to given value.

### HasHighRiskUsername

`func (o *AccountInfoMaxMindResponse) HasHighRiskUsername() bool`

HasHighRiskUsername returns a boolean if a field has been set.

### GetHighRiskPassword

`func (o *AccountInfoMaxMindResponse) GetHighRiskPassword() string`

GetHighRiskPassword returns the HighRiskPassword field if non-nil, zero value otherwise.

### GetHighRiskPasswordOk

`func (o *AccountInfoMaxMindResponse) GetHighRiskPasswordOk() (*string, bool)`

GetHighRiskPasswordOk returns a tuple with the HighRiskPassword field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetHighRiskPassword

`func (o *AccountInfoMaxMindResponse) SetHighRiskPassword(v string)`

SetHighRiskPassword sets HighRiskPassword field to given value.

### HasHighRiskPassword

`func (o *AccountInfoMaxMindResponse) HasHighRiskPassword() bool`

HasHighRiskPassword returns a boolean if a field has been set.

### GetRiskScore

`func (o *AccountInfoMaxMindResponse) GetRiskScore() AccountInfoMaxMindResponseRiskScore`

GetRiskScore returns the RiskScore field if non-nil, zero value otherwise.

### GetRiskScoreOk

`func (o *AccountInfoMaxMindResponse) GetRiskScoreOk() (*AccountInfoMaxMindResponseRiskScore, bool)`

GetRiskScoreOk returns a tuple with the RiskScore field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetRiskScore

`func (o *AccountInfoMaxMindResponse) SetRiskScore(v AccountInfoMaxMindResponseRiskScore)`

SetRiskScore sets RiskScore field to given value.

### HasRiskScore

`func (o *AccountInfoMaxMindResponse) HasRiskScore() bool`

HasRiskScore returns a boolean if a field has been set.

### GetIsTransProxy

`func (o *AccountInfoMaxMindResponse) GetIsTransProxy() string`

GetIsTransProxy returns the IsTransProxy field if non-nil, zero value otherwise.

### GetIsTransProxyOk

`func (o *AccountInfoMaxMindResponse) GetIsTransProxyOk() (*string, bool)`

GetIsTransProxyOk returns a tuple with the IsTransProxy field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIsTransProxy

`func (o *AccountInfoMaxMindResponse) SetIsTransProxy(v string)`

SetIsTransProxy sets IsTransProxy field to given value.

### HasIsTransProxy

`func (o *AccountInfoMaxMindResponse) HasIsTransProxy() bool`

HasIsTransProxy returns a boolean if a field has been set.

### GetPrepaid

`func (o *AccountInfoMaxMindResponse) GetPrepaid() string`

GetPrepaid returns the Prepaid field if non-nil, zero value otherwise.

### GetPrepaidOk

`func (o *AccountInfoMaxMindResponse) GetPrepaidOk() (*string, bool)`

GetPrepaidOk returns a tuple with the Prepaid field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPrepaid

`func (o *AccountInfoMaxMindResponse) SetPrepaid(v string)`

SetPrepaid sets Prepaid field to given value.

### HasPrepaid

`func (o *AccountInfoMaxMindResponse) HasPrepaid() bool`

HasPrepaid returns a boolean if a field has been set.

### GetMinfraudVersion

`func (o *AccountInfoMaxMindResponse) GetMinfraudVersion() string`

GetMinfraudVersion returns the MinfraudVersion field if non-nil, zero value otherwise.

### GetMinfraudVersionOk

`func (o *AccountInfoMaxMindResponse) GetMinfraudVersionOk() (*string, bool)`

GetMinfraudVersionOk returns a tuple with the MinfraudVersion field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetMinfraudVersion

`func (o *AccountInfoMaxMindResponse) SetMinfraudVersion(v string)`

SetMinfraudVersion sets MinfraudVersion field to given value.

### HasMinfraudVersion

`func (o *AccountInfoMaxMindResponse) HasMinfraudVersion() bool`

HasMinfraudVersion returns a boolean if a field has been set.

### GetServiceLevel

`func (o *AccountInfoMaxMindResponse) GetServiceLevel() string`

GetServiceLevel returns the ServiceLevel field if non-nil, zero value otherwise.

### GetServiceLevelOk

`func (o *AccountInfoMaxMindResponse) GetServiceLevelOk() (*string, bool)`

GetServiceLevelOk returns a tuple with the ServiceLevel field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServiceLevel

`func (o *AccountInfoMaxMindResponse) SetServiceLevel(v string)`

SetServiceLevel sets ServiceLevel field to given value.

### HasServiceLevel

`func (o *AccountInfoMaxMindResponse) HasServiceLevel() bool`

HasServiceLevel returns a boolean if a field has been set.

### GetExplanation

`func (o *AccountInfoMaxMindResponse) GetExplanation() string`

GetExplanation returns the Explanation field if non-nil, zero value otherwise.

### GetExplanationOk

`func (o *AccountInfoMaxMindResponse) GetExplanationOk() (*string, bool)`

GetExplanationOk returns a tuple with the Explanation field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetExplanation

`func (o *AccountInfoMaxMindResponse) SetExplanation(v string)`

SetExplanation sets Explanation field to given value.

### HasExplanation

`func (o *AccountInfoMaxMindResponse) HasExplanation() bool`

HasExplanation returns a boolean if a field has been set.

### GetFemaleName

`func (o *AccountInfoMaxMindResponse) GetFemaleName() string`

GetFemaleName returns the FemaleName field if non-nil, zero value otherwise.

### GetFemaleNameOk

`func (o *AccountInfoMaxMindResponse) GetFemaleNameOk() (*string, bool)`

GetFemaleNameOk returns a tuple with the FemaleName field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetFemaleName

`func (o *AccountInfoMaxMindResponse) SetFemaleName(v string)`

SetFemaleName sets FemaleName field to given value.

### HasFemaleName

`func (o *AccountInfoMaxMindResponse) HasFemaleName() bool`

HasFemaleName returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


