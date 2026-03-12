

# DomainDnssecRequest

Request payload for adding DNSSEC DS records to a domain.

The class is defined in **[DomainDnssecRequest.java](../../src/main/java/org/openapitools/model/DomainDnssecRequest.java)**

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**algorithm** | `List&lt;Integer&gt;` | List of DNSSEC algorithm IDs for each record. |  [optional property]
**digestType** | `List&lt;Integer&gt;` | List of digest type IDs for each record. |  [optional property]
**digest** | `List&lt;String&gt;` | List of hex digests for each record. |  [optional property]
**keyTag** | `List&lt;Integer&gt;` | List of key tag values corresponding to each record. |  [optional property]






