

# VpsServiceAddons

Add-on services and IP address information for a VPS, including control panel licenses and extra IP assignments.

The class is defined in **[VpsServiceAddons.java](../../src/main/java/org/openapitools/model/VpsServiceAddons.java)**

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**hasCpanel** | `Boolean` | Whether a cPanel license is active on this VPS. |  [optional property]
**hasDirectadmin** | `Boolean` | Whether a DirectAdmin license is active on this VPS. |  [optional property]
**hasFantastico** | `Boolean` | Whether a Fantastico license is active on this VPS. |  [optional property]
**hasSoftaculous** | `Boolean` | Whether a Softaculous license is active on this VPS. |  [optional property]
**hasHdspace** | `Boolean` | Whether extra disk space has been added to this VPS. |  [optional property]
**dedicatedIp** | `Boolean` | Whether a dedicated IP address is assigned to this VPS. |  [optional property]
**extraIps** | `List&lt;String&gt;` | List of additional IPv4 addresses assigned to this VPS. |  [optional property]
**extraIps6** | `List&lt;String&gt;` | List of additional IPv6 addresses assigned to this VPS. |  [optional property]
**unpaidIps** | `List&lt;String&gt;` | List of IP addresses that have unpaid charges. |  [optional property]
**ips** | `List&lt;String&gt;` | All IPv4 addresses assigned to this VPS. |  [optional property]
**ips6** | `List&lt;String&gt;` | All IPv6 addresses assigned to this VPS. |  [optional property]
**cpanelId** | `Integer` | The add-on service ID for the cPanel license. |  [optional property]
**cost** | `Integer` | Total monthly add-on cost in cents. |  [optional property]
**ids** | `List&lt;String&gt;` | List of add-on service IDs active on this VPS. |  [optional property]
**rdata** | `List&lt;String&gt;` | Raw add-on data entries. |  [optional property]

















