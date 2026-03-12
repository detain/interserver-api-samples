

# CreateFirewallRule

Create firewall rule for your ip

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**protocol_id** | [**ProtocolId**](#ProtocolId) | 1 &#x3D; TCP, 2 &#x3D; UDP | 
**xdp_action** | [**XdpAction**](#XdpAction) | 1 &#x3D; Block,  0 &#x3D; Whitelist | 
**destination_port** | **Int** |  |  [optional]
**source_ip** | **String** |  |  [optional]
**source_port** | **Int** |  |  [optional]


## Enum: ProtocolId
Allowed values: [1, 2]



## Enum: XdpAction
Allowed values: [0, 1]




