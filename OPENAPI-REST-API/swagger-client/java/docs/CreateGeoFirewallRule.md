# CreateGeoFirewallRule

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**destinationPort** | **Integer** |  |  [optional]
**countryCode** | **Integer** | To get country code refer our countries api - https://my.interserver.net/apiv2/account/countries?fetch_by&#x3D;numcode |  [optional]
**asn** | **Integer** | ASN number |  [optional]
**xdpAction** | [**XdpActionEnum**](#XdpActionEnum) | 1 &#x3D; Block,  0 &#x3D; Whitelist | 

<a name="XdpActionEnum"></a>
## Enum: XdpActionEnum
Name | Value
---- | -----
NUMBER_0 | 0
NUMBER_1 | 1
