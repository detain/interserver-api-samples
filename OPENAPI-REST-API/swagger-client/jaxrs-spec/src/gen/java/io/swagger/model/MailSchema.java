package io.swagger.model;

import io.swagger.model.MailBillingDetails;
import io.swagger.model.MailClientLink;
import io.swagger.model.MailSchemaExtraInfoTables;
import io.swagger.model.MailServiceInfo;
import io.swagger.model.MailServiceType;
import java.util.ArrayList;
import java.util.List;
import javax.validation.constraints.*;
import javax.validation.Valid;


import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class MailSchema   {

  private @Valid MailServiceInfo serviceInfo = null;

  private @Valid List<MailClientLink> clientLinks = new ArrayList<MailClientLink>();

  private @Valid MailBillingDetails billingDetails = null;

  private @Valid String custCurrency = null;

  private @Valid String custCurrencySymbol = null;

  private @Valid String _package = null;

  private @Valid List<String> serviceExtra = new ArrayList<String>();

  private @Valid MailSchemaExtraInfoTables extraInfoTables = null;

  private @Valid MailServiceType serviceType = null;

  private @Valid String usageCount = null;

  /**
   **/
  public MailSchema serviceInfo(MailServiceInfo serviceInfo) {
    this.serviceInfo = serviceInfo;
    return this;
  }

  
  @ApiModelProperty(required = true, value = "")
  @JsonProperty("serviceInfo")
  @NotNull

  public MailServiceInfo getServiceInfo() {
    return serviceInfo;
  }
  public void setServiceInfo(MailServiceInfo serviceInfo) {
    this.serviceInfo = serviceInfo;
  }

  /**
   * Links related to the mail service for clients.
   **/
  public MailSchema clientLinks(List<MailClientLink> clientLinks) {
    this.clientLinks = clientLinks;
    return this;
  }

  
  @ApiModelProperty(required = true, value = "Links related to the mail service for clients.")
  @JsonProperty("client_links")
  @NotNull

  public List<MailClientLink> getClientLinks() {
    return clientLinks;
  }
  public void setClientLinks(List<MailClientLink> clientLinks) {
    this.clientLinks = clientLinks;
  }

  /**
   **/
  public MailSchema billingDetails(MailBillingDetails billingDetails) {
    this.billingDetails = billingDetails;
    return this;
  }

  
  @ApiModelProperty(required = true, value = "")
  @JsonProperty("billingDetails")
  @NotNull

  public MailBillingDetails getBillingDetails() {
    return billingDetails;
  }
  public void setBillingDetails(MailBillingDetails billingDetails) {
    this.billingDetails = billingDetails;
  }

  /**
   * The customer&#x27;s currency.
   **/
  public MailSchema custCurrency(String custCurrency) {
    this.custCurrency = custCurrency;
    return this;
  }

  
  @ApiModelProperty(example = "USD", required = true, value = "The customer's currency.")
  @JsonProperty("custCurrency")
  @NotNull

  public String getCustCurrency() {
    return custCurrency;
  }
  public void setCustCurrency(String custCurrency) {
    this.custCurrency = custCurrency;
  }

  /**
   * The currency symbol for the customer.
   **/
  public MailSchema custCurrencySymbol(String custCurrencySymbol) {
    this.custCurrencySymbol = custCurrencySymbol;
    return this;
  }

  
  @ApiModelProperty(example = "$", required = true, value = "The currency symbol for the customer.")
  @JsonProperty("custCurrencySymbol")
  @NotNull

  public String getCustCurrencySymbol() {
    return custCurrencySymbol;
  }
  public void setCustCurrencySymbol(String custCurrencySymbol) {
    this.custCurrencySymbol = custCurrencySymbol;
  }

  /**
   * The package of the mail service.
   **/
  public MailSchema _package(String _package) {
    this._package = _package;
    return this;
  }

  
  @ApiModelProperty(example = "MailBaby Mail", required = true, value = "The package of the mail service.")
  @JsonProperty("package")
  @NotNull

  public String getPackage() {
    return _package;
  }
  public void setPackage(String _package) {
    this._package = _package;
  }

  /**
   * Extra information for the mail service.
   **/
  public MailSchema serviceExtra(List<String> serviceExtra) {
    this.serviceExtra = serviceExtra;
    return this;
  }

  
  @ApiModelProperty(example = "[]", value = "Extra information for the mail service.")
  @JsonProperty("serviceExtra")
  @NotNull

  public List<String> getServiceExtra() {
    return serviceExtra;
  }
  public void setServiceExtra(List<String> serviceExtra) {
    this.serviceExtra = serviceExtra;
  }

  /**
   **/
  public MailSchema extraInfoTables(MailSchemaExtraInfoTables extraInfoTables) {
    this.extraInfoTables = extraInfoTables;
    return this;
  }

  
  @ApiModelProperty(required = true, value = "")
  @JsonProperty("extraInfoTables")
  @NotNull

  public MailSchemaExtraInfoTables getExtraInfoTables() {
    return extraInfoTables;
  }
  public void setExtraInfoTables(MailSchemaExtraInfoTables extraInfoTables) {
    this.extraInfoTables = extraInfoTables;
  }

  /**
   **/
  public MailSchema serviceType(MailServiceType serviceType) {
    this.serviceType = serviceType;
    return this;
  }

  
  @ApiModelProperty(required = true, value = "")
  @JsonProperty("serviceType")
  @NotNull

  public MailServiceType getServiceType() {
    return serviceType;
  }
  public void setServiceType(MailServiceType serviceType) {
    this.serviceType = serviceType;
  }

  /**
   * The usage count of the mail service.
   **/
  public MailSchema usageCount(String usageCount) {
    this.usageCount = usageCount;
    return this;
  }

  
  @ApiModelProperty(example = "0", required = true, value = "The usage count of the mail service.")
  @JsonProperty("usage_count")
  @NotNull

  public String getUsageCount() {
    return usageCount;
  }
  public void setUsageCount(String usageCount) {
    this.usageCount = usageCount;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    MailSchema mailSchema = (MailSchema) o;
    return Objects.equals(serviceInfo, mailSchema.serviceInfo) &&
        Objects.equals(clientLinks, mailSchema.clientLinks) &&
        Objects.equals(billingDetails, mailSchema.billingDetails) &&
        Objects.equals(custCurrency, mailSchema.custCurrency) &&
        Objects.equals(custCurrencySymbol, mailSchema.custCurrencySymbol) &&
        Objects.equals(_package, mailSchema._package) &&
        Objects.equals(serviceExtra, mailSchema.serviceExtra) &&
        Objects.equals(extraInfoTables, mailSchema.extraInfoTables) &&
        Objects.equals(serviceType, mailSchema.serviceType) &&
        Objects.equals(usageCount, mailSchema.usageCount);
  }

  @Override
  public int hashCode() {
    return Objects.hash(serviceInfo, clientLinks, billingDetails, custCurrency, custCurrencySymbol, _package, serviceExtra, extraInfoTables, serviceType, usageCount);
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
    sb.append("    serviceExtra: ").append(toIndentedString(serviceExtra)).append("\n");
    sb.append("    extraInfoTables: ").append(toIndentedString(extraInfoTables)).append("\n");
    sb.append("    serviceType: ").append(toIndentedString(serviceType)).append("\n");
    sb.append("    usageCount: ").append(toIndentedString(usageCount)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
