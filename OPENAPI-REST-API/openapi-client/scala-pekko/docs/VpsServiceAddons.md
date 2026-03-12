

# VpsServiceAddons

Add-on services and IP address information for a VPS, including control panel licenses and extra IP assignments.

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**has_cpanel** | **Boolean** | Whether a cPanel license is active on this VPS. |  [optional]
**has_directadmin** | **Boolean** | Whether a DirectAdmin license is active on this VPS. |  [optional]
**has_fantastico** | **Boolean** | Whether a Fantastico license is active on this VPS. |  [optional]
**has_softaculous** | **Boolean** | Whether a Softaculous license is active on this VPS. |  [optional]
**has_hdspace** | **Boolean** | Whether extra disk space has been added to this VPS. |  [optional]
**dedicated_ip** | **Boolean** | Whether a dedicated IP address is assigned to this VPS. |  [optional]
**extra_ips** | **Seq&lt;String&gt;** | List of additional IPv4 addresses assigned to this VPS. |  [optional]
**extra_ips6** | **Seq&lt;String&gt;** | List of additional IPv6 addresses assigned to this VPS. |  [optional]
**unpaid_ips** | **Seq&lt;String&gt;** | List of IP addresses that have unpaid charges. |  [optional]
**ips** | **Seq&lt;String&gt;** | All IPv4 addresses assigned to this VPS. |  [optional]
**ips6** | **Seq&lt;String&gt;** | All IPv6 addresses assigned to this VPS. |  [optional]
**cpanel_id** | **Int** | The add-on service ID for the cPanel license. |  [optional]
**cost** | **Int** | Total monthly add-on cost in cents. |  [optional]
**ids** | **Seq&lt;String&gt;** | List of add-on service IDs active on this VPS. |  [optional]
**rdata** | **Seq&lt;String&gt;** | Raw add-on data entries. |  [optional]



