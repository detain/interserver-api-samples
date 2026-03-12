package io.swagger.model;

import io.swagger.model.WebsiteBillingDetails;
import io.swagger.model.WebsiteClientLink;
import io.swagger.model.WebsiteExtraInfoTables;
import io.swagger.model.WebsiteServiceExtra;
import io.swagger.model.WebsiteServiceInfo;
import io.swagger.model.WebsiteServiceMaster;
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.ArrayList;
import java.util.List;
import javax.validation.constraints.*;

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

/**
  * Full detail view of a webhosting service including billing, service configuration, and panel access links.
 **/
@Schema(description="Full detail view of a webhosting service including billing, service configuration, and panel access links.")
public class Website   {
  
  @Schema(description = "")
  private WebsiteServiceInfo serviceInfo = null;
  
  @Schema(description = "")
  private List<WebsiteClientLink> clientLinks = null;
  
  @Schema(description = "")
  private WebsiteBillingDetails billingDetails = null;
  
  @Schema(example = "USD", description = "Customer's currency")
 /**
   * Customer's currency  
  **/
  private String custCurrency = null;
  
  @Schema(example = "$", description = "Customer currency symbol")
 /**
   * Customer currency symbol  
  **/
  private String custCurrencySymbol = null;
  
  @Schema(description = "")
  private WebsiteServiceMaster serviceMaster = null;
  
  @Schema(example = "Web Hosting Direct Admin", description = "Package information")
 /**
   * Package information  
  **/
  private String _package = null;
  
  @Schema(description = "")
  private List<WebsiteServiceExtra> serviceExtra = null;
  
  @Schema(description = "")
  private WebsiteExtraInfoTables extraInfoTables = null;
 /**
   * Get serviceInfo
   * @return serviceInfo
  **/
  @JsonProperty("serviceInfo")
  @NotNull
  public WebsiteServiceInfo getServiceInfo() {
    return serviceInfo;
  }

  public void setServiceInfo(WebsiteServiceInfo serviceInfo) {
    this.serviceInfo = serviceInfo;
  }

  public Website serviceInfo(WebsiteServiceInfo serviceInfo) {
    this.serviceInfo = serviceInfo;
    return this;
  }

 /**
   * Get clientLinks
   * @return clientLinks
  **/
  @JsonProperty("client_links")
  @NotNull
  public List<WebsiteClientLink> getClientLinks() {
    return clientLinks;
  }

  public void setClientLinks(List<WebsiteClientLink> clientLinks) {
    this.clientLinks = clientLinks;
  }

  public Website clientLinks(List<WebsiteClientLink> clientLinks) {
    this.clientLinks = clientLinks;
    return this;
  }

  public Website addClientLinksItem(WebsiteClientLink clientLinksItem) {
    this.clientLinks.add(clientLinksItem);
    return this;
  }

 /**
   * Get billingDetails
   * @return billingDetails
  **/
  @JsonProperty("billingDetails")
  @NotNull
  public WebsiteBillingDetails getBillingDetails() {
    return billingDetails;
  }

  public void setBillingDetails(WebsiteBillingDetails billingDetails) {
    this.billingDetails = billingDetails;
  }

  public Website billingDetails(WebsiteBillingDetails billingDetails) {
    this.billingDetails = billingDetails;
    return this;
  }

 /**
   * Customer&#x27;s currency
   * @return custCurrency
  **/
  @JsonProperty("custCurrency")
  @NotNull
  public String getCustCurrency() {
    return custCurrency;
  }

  public void setCustCurrency(String custCurrency) {
    this.custCurrency = custCurrency;
  }

  public Website custCurrency(String custCurrency) {
    this.custCurrency = custCurrency;
    return this;
  }

 /**
   * Customer currency symbol
   * @return custCurrencySymbol
  **/
  @JsonProperty("custCurrencySymbol")
  @NotNull
  public String getCustCurrencySymbol() {
    return custCurrencySymbol;
  }

  public void setCustCurrencySymbol(String custCurrencySymbol) {
    this.custCurrencySymbol = custCurrencySymbol;
  }

  public Website custCurrencySymbol(String custCurrencySymbol) {
    this.custCurrencySymbol = custCurrencySymbol;
    return this;
  }

 /**
   * Get serviceMaster
   * @return serviceMaster
  **/
  @JsonProperty("serviceMaster")
  @NotNull
  public WebsiteServiceMaster getServiceMaster() {
    return serviceMaster;
  }

  public void setServiceMaster(WebsiteServiceMaster serviceMaster) {
    this.serviceMaster = serviceMaster;
  }

  public Website serviceMaster(WebsiteServiceMaster serviceMaster) {
    this.serviceMaster = serviceMaster;
    return this;
  }

 /**
   * Package information
   * @return _package
  **/
  @JsonProperty("package")
  @NotNull
  public String getPackage() {
    return _package;
  }

  public void setPackage(String _package) {
    this._package = _package;
  }

  public Website _package(String _package) {
    this._package = _package;
    return this;
  }

 /**
   * Get serviceExtra
   * @return serviceExtra
  **/
  @JsonProperty("serviceExtra")
  @NotNull
  public List<WebsiteServiceExtra> getServiceExtra() {
    return serviceExtra;
  }

  public void setServiceExtra(List<WebsiteServiceExtra> serviceExtra) {
    this.serviceExtra = serviceExtra;
  }

  public Website serviceExtra(List<WebsiteServiceExtra> serviceExtra) {
    this.serviceExtra = serviceExtra;
    return this;
  }

  public Website addServiceExtraItem(WebsiteServiceExtra serviceExtraItem) {
    this.serviceExtra.add(serviceExtraItem);
    return this;
  }

 /**
   * Get extraInfoTables
   * @return extraInfoTables
  **/
  @JsonProperty("extraInfoTables")
  @NotNull
  public WebsiteExtraInfoTables getExtraInfoTables() {
    return extraInfoTables;
  }

  public void setExtraInfoTables(WebsiteExtraInfoTables extraInfoTables) {
    this.extraInfoTables = extraInfoTables;
  }

  public Website extraInfoTables(WebsiteExtraInfoTables extraInfoTables) {
    this.extraInfoTables = extraInfoTables;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class Website {\n");
    
    sb.append("    serviceInfo: ").append(toIndentedString(serviceInfo)).append("\n");
    sb.append("    clientLinks: ").append(toIndentedString(clientLinks)).append("\n");
    sb.append("    billingDetails: ").append(toIndentedString(billingDetails)).append("\n");
    sb.append("    custCurrency: ").append(toIndentedString(custCurrency)).append("\n");
    sb.append("    custCurrencySymbol: ").append(toIndentedString(custCurrencySymbol)).append("\n");
    sb.append("    serviceMaster: ").append(toIndentedString(serviceMaster)).append("\n");
    sb.append("    _package: ").append(toIndentedString(_package)).append("\n");
    sb.append("    serviceExtra: ").append(toIndentedString(serviceExtra)).append("\n");
    sb.append("    extraInfoTables: ").append(toIndentedString(extraInfoTables)).append("\n");
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
