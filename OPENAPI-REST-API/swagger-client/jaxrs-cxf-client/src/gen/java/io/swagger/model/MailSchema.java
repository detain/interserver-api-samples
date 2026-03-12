package io.swagger.model;

import io.swagger.model.MailBillingDetails;
import io.swagger.model.MailClientLink;
import io.swagger.model.MailSchemaExtraInfoTables;
import io.swagger.model.MailServiceInfo;
import io.swagger.model.MailServiceType;
import java.util.ArrayList;
import java.util.List;

import io.swagger.v3.oas.annotations.media.Schema;
import javax.xml.bind.annotation.XmlElement;
import javax.xml.bind.annotation.XmlRootElement;
import javax.xml.bind.annotation.XmlAccessType;
import javax.xml.bind.annotation.XmlAccessorType;
import javax.xml.bind.annotation.XmlType;
import javax.xml.bind.annotation.XmlEnum;
import javax.xml.bind.annotation.XmlEnumValue;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonValue;
import com.fasterxml.jackson.annotation.JsonCreator;

public class MailSchema   {
  
  @Schema(required = true, description = "")
  private MailServiceInfo serviceInfo = null;
  
  @Schema(required = true, description = "Links related to the mail service for clients.")
 /**
   * Links related to the mail service for clients.  
  **/
  private List<MailClientLink> clientLinks = new ArrayList<MailClientLink>();
  
  @Schema(required = true, description = "")
  private MailBillingDetails billingDetails = null;
  
  @Schema(example = "USD", required = true, description = "The customer's currency.")
 /**
   * The customer's currency.  
  **/
  private String custCurrency = null;
  
  @Schema(example = "$", required = true, description = "The currency symbol for the customer.")
 /**
   * The currency symbol for the customer.  
  **/
  private String custCurrencySymbol = null;
  
  @Schema(example = "MailBaby Mail", required = true, description = "The package of the mail service.")
 /**
   * The package of the mail service.  
  **/
  private String _package = null;
  
  @Schema(example = "[]", description = "Extra information for the mail service.")
 /**
   * Extra information for the mail service.  
  **/
  private List<String> serviceExtra = null;
  
  @Schema(required = true, description = "")
  private MailSchemaExtraInfoTables extraInfoTables = null;
  
  @Schema(required = true, description = "")
  private MailServiceType serviceType = null;
  
  @Schema(example = "0", required = true, description = "The usage count of the mail service.")
 /**
   * The usage count of the mail service.  
  **/
  private String usageCount = null;
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
   * The customer&#x27;s currency.
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
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
