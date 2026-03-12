# CreateGeoFirewallRule

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**destinationPort** | [**kotlin.Int**](.md) |  |  [optional]
**countryCode** | [**kotlin.Int**](.md) | To get country code refer our countries api - https://my.interserver.net/apiv2/account/countries?fetch_by&#x3D;numcode |  [optional]
**asn** | [**kotlin.Int**](.md) | ASN number |  [optional]
**xdpAction** | [**inline**](#XdpAction) | 1 &#x3D; Block,  0 &#x3D; Whitelist | 

<a name="XdpAction"></a>
## Enum: xdp_action
Name | Value
---- | -----
xdpAction | 0, 1
