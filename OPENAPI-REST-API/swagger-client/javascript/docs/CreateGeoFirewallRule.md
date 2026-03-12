# InterServerManagementApi.CreateGeoFirewallRule

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**destination_port** | **Number** |  | [optional] [default to 80]
**country_code** | **Number** | To get country code refer our countries api - https://my.interserver.net/apiv2/account/countries?fetch_by&#x3D;numcode | [optional] 
**asn** | **Number** | ASN number | [optional] 
**xdp_action** | **Number** | 1 &#x3D; Block,  0 &#x3D; Whitelist | 

<a name="XdpActionEnum"></a>
## Enum: XdpActionEnum

* `_0` (value: `0`)
* `_1` (value: `1`)

