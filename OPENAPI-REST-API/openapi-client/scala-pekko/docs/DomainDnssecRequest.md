

# DomainDnssecRequest

Request payload for adding DNSSEC DS records to a domain.

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**algorithm** | **Seq&lt;Int&gt;** | List of DNSSEC algorithm IDs for each record. |  [optional]
**digest_type** | **Seq&lt;Int&gt;** | List of digest type IDs for each record. |  [optional]
**digest** | **Seq&lt;String&gt;** | List of hex digests for each record. |  [optional]
**key_tag** | **Seq&lt;Int&gt;** | List of key tag values corresponding to each record. |  [optional]



