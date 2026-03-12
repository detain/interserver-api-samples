

# DomainBillingDetails

Billing information for a domain service including payment status, dates, and cost.

The class is defined in **[DomainBillingDetails.java](../../src/main/java/org/openapitools/model/DomainBillingDetails.java)**

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**serviceLastInvoiceDate** | `String` | Date of the last invoice for the domain. |  [optional property]
**servicePaymentStatus** | `String` | Current payment status (e.g., Paid, Unpaid). |  [optional property]
**serviceFrequency** | `String` | Billing frequency (e.g., Yearly, Monthly). |  [optional property]
**nextDate** | `String` | Next billing date (ISO 8601). |  [optional property]
**serviceNextInvoiceDate** | `String` | Human-readable next invoice date. |  [optional property]
**serviceCurrency** | `String` | Billing currency code. |  [optional property]
**serviceCurrencySymbol** | `String` | Billing currency symbol. |  [optional property]
**serviceCostInfo** | `String` | Cost breakdown information. |  [optional property]
**serviceExtra** | [`DomainBillingExtra`](DomainBillingExtra.md) |  |  [optional property]
**serviceExtraJson** | `String` | Raw JSON string of extra billing data. |  [optional property]












