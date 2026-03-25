package org.openapitools.model;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import org.openapitools.model.MailBillingDetails;
import org.openapitools.model.MailClientLink;
import org.openapitools.model.MailSchemaExtraInfoTables;
import org.openapitools.model.MailServiceInfo;
import org.openapitools.model.MailServiceType;

import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class MailSchema  {
  
  @ApiModelProperty(required = true, value = "")

  private MailServiceInfo serviceInfo;

 /**
  * Links related to the mail service for clients.
  */
  @ApiModelProperty(required = true, value = "Links related to the mail service for clients.")

  private List<MailClientLink> clientLinks = new ArrayList<>();

  @ApiModelProperty(required = true, value = "")

  private MailBillingDetails billingDetails;

 /**
  * The customer's currency.
  */
  @ApiModelProperty(example = "USD", required = true, value = "The customer's currency.")

  private String custCurrency;

 /**
  * The currency symbol for the customer.
  */
  @ApiModelProperty(example = "$", required = true, value = "The currency symbol for the customer.")

  private String custCurrencySymbol;

 /**
  * The package of the mail service.
  */
  @ApiModelProperty(example = "MailBaby Mail", required = true, value = "The package of the mail service.")

  private String _package;

  @ApiModelProperty(required = true, value = "")

  private MailSchemaExtraInfoTables extraInfoTables;

  @ApiModelProperty(required = true, value = "")

  private MailServiceType serviceType;

 /**
  * The usage count of the mail service.
  */
  @ApiModelProperty(example = "0", required = true, value = "The usage count of the mail service.")

  private String usageCount;

 /**
  * Extra information for the mail service.
  */
  @ApiModelProperty(example = "[]", value = "Extra information for the mail service.")

  private List<String> serviceExtra = new ArrayList<>();
 /**
   * Get serviceInfo
   * @return serviceInfo
  **/
  @JsonProperty("serviceInfo")
  public MailServiceInfo getServiceInfo() {
    return serviceInfo;
  }

  public void setServiceInfo(MailServiceInfo serviceInfo) {
    this.serviceInfo = serviceInfo;
  }

  public MailSchema serviceInfo(MailServiceInfo serviceInfo) {
    this.serviceInfo = serviceInfo;
    return this;
  }

 /**
   * Links related to the mail service for clients.
   * @return clientLinks
  **/
  @JsonProperty("client_links")
  public List<MailClientLink> getClientLinks() {
    return clientLinks;
  }

  public void setClientLinks(List<MailClientLink> clientLinks) {
    this.clientLinks = clientLinks;
  }

  public MailSchema clientLinks(List<MailClientLink> clientLinks) {
    this.clientLinks = clientLinks;
    return this;
  }

  public MailSchema addClientLinksItem(MailClientLink clientLinksItem) {
    this.clientLinks.add(clientLinksItem);
    return this;
  }

 /**
   * Get billingDetails
   * @return billingDetails
  **/
  @JsonProperty("billingDetails")
  public MailBillingDetails getBillingDetails() {
    return billingDetails;
  }

  public void setBillingDetails(MailBillingDetails billingDetails) {
    this.billingDetails = billingDetails;
  }

  public MailSchema billingDetails(MailBillingDetails billingDetails) {
    this.billingDetails = billingDetails;
    return this;
  }

 /**
   * The customer&#39;s currency.
   * @return custCurrency
  **/
  @JsonProperty("custCurrency")
  public String getCustCurrency() {
    return custCurrency;
  }

  public void setCustCurrency(String custCurrency) {
    this.custCurrency = custCurrency;
  }

  public MailSchema custCurrency(String custCurrency) {
    this.custCurrency = custCurrency;
    return this;
  }

 /**
   * The currency symbol for the customer.
   * @return custCurrencySymbol
  **/
  @JsonProperty("custCurrencySymbol")
  public String getCustCurrencySymbol() {
    return custCurrencySymbol;
  }

  public void setCustCurrencySymbol(String custCurrencySymbol) {
    this.custCurrencySymbol = custCurrencySymbol;
  }

  public MailSchema custCurrencySymbol(String custCurrencySymbol) {
    this.custCurrencySymbol = custCurrencySymbol;
    return this;
  }

 /**
   * The package of the mail service.
   * @return _package
  **/
  @JsonProperty("package")
  public String getPackage() {
    return _package;
  }

  public void setPackage(String _package) {
    this._package = _package;
  }

  public MailSchema _package(String _package) {
    this._package = _package;
    return this;
  }

 /**
   * Get extraInfoTables
   * @return extraInfoTables
  **/
  @JsonProperty("extraInfoTables")
  public MailSchemaExtraInfoTables getExtraInfoTables() {
    return extraInfoTables;
  }

  public void setExtraInfoTables(MailSchemaExtraInfoTables extraInfoTables) {
    this.extraInfoTables = extraInfoTables;
  }

  public MailSchema extraInfoTables(MailSchemaExtraInfoTables extraInfoTables) {
    this.extraInfoTables = extraInfoTables;
    return this;
  }

 /**
   * Get serviceType
   * @return serviceType
  **/
  @JsonProperty("serviceType")
  public MailServiceType getServiceType() {
    return serviceType;
  }

  public void setServiceType(MailServiceType serviceType) {
    this.serviceType = serviceType;
  }

  public MailSchema serviceType(MailServiceType serviceType) {
    this.serviceType = serviceType;
    return this;
  }

 /**
   * The usage count of the mail service.
   * @return usageCount
  **/
  @JsonProperty("usage_count")
  public String getUsageCount() {
    return usageCount;
  }

  public void setUsageCount(String usageCount) {
    this.usageCount = usageCount;
  }

  public MailSchema usageCount(String usageCount) {
    this.usageCount = usageCount;
    return this;
  }

 /**
   * Extra information for the mail service.
   * @return serviceExtra
  **/
  @JsonProperty("serviceExtra")
  public List<String> getServiceExtra() {
    return serviceExtra;
  }

  public void setServiceExtra(List<String> serviceExtra) {
    this.serviceExtra = serviceExtra;
  }

  public MailSchema serviceExtra(List<String> serviceExtra) {
    this.serviceExtra = serviceExtra;
    return this;
  }

  public MailSchema addServiceExtraItem(String serviceExtraItem) {
    this.serviceExtra.add(serviceExtraItem);
    return this;
  }

  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    MailSchema mailSchema = (MailSchema) o;
    return Objects.equals(this.serviceInfo, mailSchema.serviceInfo) &&
        Objects.equals(this.clientLinks, mailSchema.clientLinks) &&
        Objects.equals(this.billingDetails, mailSchema.billingDetails) &&
        Objects.equals(this.custCurrency, mailSchema.custCurrency) &&
        Objects.equals(this.custCurrencySymbol, mailSchema.custCurrencySymbol) &&
        Objects.equals(this._package, mailSchema._package) &&
        Objects.equals(this.extraInfoTables, mailSchema.extraInfoTables) &&
        Objects.equals(this.serviceType, mailSchema.serviceType) &&
        Objects.equals(this.usageCount, mailSchema.usageCount) &&
        Objects.equals(this.serviceExtra, mailSchema.serviceExtra);
  }

  @Override
  public int hashCode() {
    return Objects.hash(serviceInfo, clientLinks, billingDetails, custCurrency, custCurrencySymbol, _package, extraInfoTables, serviceType, usageCount, serviceExtra);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class MailSchema {\n");
    
    sb.append("    serviceInfo: ").append(toIndentedString(serviceInfo)).append("\n");
    sb.append("    clientLinks: ").append(toIndentedString(clientLinks)).append("\n");
    sb.append("    billingDetails: ").append(toIndentedString(billingDetails)).append("\n");
    sb.append("    custCurrency: ").append(toIndentedString(custCurrency)).append("\n");
    sb.append("    custCurrencySymbol: ").append(toIndentedString(custCurrencySymbol)).append("\n");
    sb.append("    _package: ").append(toIndentedString(_package)).append("\n");
    sb.append("    extraInfoTables: ").append(toIndentedString(extraInfoTables)).append("\n");
    sb.append("    serviceType: ").append(toIndentedString(serviceType)).append("\n");
    sb.append("    usageCount: ").append(toIndentedString(usageCount)).append("\n");
    sb.append("    serviceExtra: ").append(toIndentedString(serviceExtra)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private static String toIndentedString(Object o) {
    return o == null ? "null" : o.toString().replace("\n", "\n    ");
  }
}

