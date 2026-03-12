# InterServerManagementApi.CreateFirewallRule

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**destination_port** | **Number** |  | [optional] [default to 80]
**source_ip** | **String** |  | [optional] [default to &#x27;0&#x27;]
**source_port** | **Number** |  | [optional] [default to 0]
**protocol_id** | **Number** | 1 &#x3D; TCP, 2 &#x3D; UDP | 
**xdp_action** | **Number** | 1 &#x3D; Block,  0 &#x3D; Whitelist | 

<a name="ProtocolIdEnum"></a>
## Enum: ProtocolIdEnum

* `_1` (value: `1`)
* `_2` (value: `2`)


<a name="XdpActionEnum"></a>
## Enum: XdpActionEnum

* `_0` (value: `0`)
* `_1` (value: `1`)

