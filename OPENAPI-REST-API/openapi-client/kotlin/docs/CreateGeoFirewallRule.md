
# CreateGeoFirewallRule

## Properties
| Name | Type | Description | Notes |
| ------------ | ------------- | ------------- | ------------- |
| **xdpAction** | [**inline**](#XdpAction) | 1 &#x3D; Block,  0 &#x3D; Whitelist |  |
| **destinationPort** | **kotlin.Int** |  |  [optional] |
| **countryCode** | **kotlin.Int** | To get country code refer our countries api - https://my.interserver.net/apiv2/account/countries?fetch_by&#x3D;numcode |  [optional] |
| **asn** | **kotlin.Int** | ASN number |  [optional] |


<a id="XdpAction"></a>
## Enum: xdp_action
| Name | Value |
| ---- | ----- |
| xdpAction | 0, 1 |



