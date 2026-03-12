# VpsServiceAddons

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**hasCpanel** | [**kotlin.Boolean**](.md) | Whether a cPanel license is active on this VPS. |  [optional]
**hasDirectadmin** | [**kotlin.Boolean**](.md) | Whether a DirectAdmin license is active on this VPS. |  [optional]
**hasFantastico** | [**kotlin.Boolean**](.md) | Whether a Fantastico license is active on this VPS. |  [optional]
**hasSoftaculous** | [**kotlin.Boolean**](.md) | Whether a Softaculous license is active on this VPS. |  [optional]
**hasHdspace** | [**kotlin.Boolean**](.md) | Whether extra disk space has been added to this VPS. |  [optional]
**dedicatedIp** | [**kotlin.Boolean**](.md) | Whether a dedicated IP address is assigned to this VPS. |  [optional]
**extraIps** | [**kotlin.Array&lt;kotlin.String&gt;**](.md) | List of additional IPv4 addresses assigned to this VPS. |  [optional]
**extraIps6** | [**kotlin.Array&lt;kotlin.String&gt;**](.md) | List of additional IPv6 addresses assigned to this VPS. |  [optional]
**unpaidIps** | [**kotlin.Array&lt;kotlin.String&gt;**](.md) | List of IP addresses that have unpaid charges. |  [optional]
**ips** | [**kotlin.Array&lt;kotlin.String&gt;**](.md) | All IPv4 addresses assigned to this VPS. |  [optional]
**ips6** | [**kotlin.Array&lt;kotlin.String&gt;**](.md) | All IPv6 addresses assigned to this VPS. |  [optional]
**cpanelId** | [**kotlin.Int**](.md) | The add-on service ID for the cPanel license. |  [optional]
**cost** | [**kotlin.Int**](.md) | Total monthly add-on cost in cents. |  [optional]
**ids** | [**kotlin.Array&lt;kotlin.String&gt;**](.md) | List of add-on service IDs active on this VPS. |  [optional]
**rdata** | [**kotlin.Array&lt;kotlin.String&gt;**](.md) | Raw add-on data entries. |  [optional]
