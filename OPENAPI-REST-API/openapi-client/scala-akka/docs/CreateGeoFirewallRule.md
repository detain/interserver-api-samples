

# CreateGeoFirewallRule

Create firewall rule for your ip

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**xdp_action** | [**XdpAction**](#XdpAction) | 1 &#x3D; Block,  0 &#x3D; Whitelist | 
**destination_port** | **Int** |  |  [optional]
**country_code** | **Int** | To get country code refer our countries api - https://my.interserver.net/apiv2/account/countries?fetch_by&#x3D;numcode |  [optional]
**asn** | **Int** | ASN number |  [optional]


## Enum: XdpAction
Allowed values: [0, 1]




