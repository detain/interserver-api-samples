package org.openapitools.model;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import org.openapitools.model.WebsiteBillingDetails;
import org.openapitools.model.WebsiteClientLink;
import org.openapitools.model.WebsiteExtraInfoTables;
import org.openapitools.model.WebsiteServiceInfo;
import org.openapitools.model.WebsiteServiceMaster;

import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * Full detail view of a webhosting service including billing, service configuration, and panel access links.
 */
@ApiModel(description="Full detail view of a webhosting service including billing, service configuration, and panel access links.")

public class Website  {
  
  @ApiModelProperty(value = "")

  private WebsiteServiceInfo serviceInfo;

  @ApiModelProperty(value = "")

  private List<WebsiteClientLink> clientLinks = new ArrayList<>();

  @ApiModelProperty(value = "")

  private WebsiteBillingDetails billingDetails;

 /**
  * Customer's currency
  */
  @ApiModelProperty(example = "USD", value = "Customer's currency")

  private String custCurrency;

 /**
  * Customer currency symbol
  */
  @ApiModelProperty(example = "$", value = "Customer currency symbol")

  private String custCurrencySymbol;

  @ApiModelProperty(value = "")

  private WebsiteServiceMaster serviceMaster;

 /**
  * Package information
  */
  @ApiModelProperty(example = "Web Hosting Direct Admin", value = "Package information")

  private String _package;

  @ApiModelProperty(value = "")

  private List<Object> serviceExtra = new ArrayList<>();

  @ApiModelProperty(value = "")

  private WebsiteExtraInfoTables extraInfoTables;
 /**
   * Get serviceInfo
   * @return serviceInfo
  **/
  @JsonProperty("serviceInfo")
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
   * Customer&#39;s currency
   * @return custCurrency
  **/
  @JsonProperty("custCurrency")
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
  public List<Object> getServiceExtra() {
    return serviceExtra;
  }

  public void setServiceExtra(List<Object> serviceExtra) {
    this.serviceExtra = serviceExtra;
  }

  public Website serviceExtra(List<Object> serviceExtra) {
    this.serviceExtra = serviceExtra;
    return this;
  }

  public Website addServiceExtraItem(Object serviceExtraItem) {
    this.serviceExtra.add(serviceExtraItem);
    return this;
  }

 /**
   * Get extraInfoTables
   * @return extraInfoTables
  **/
  @JsonProperty("extraInfoTables")
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
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    Website website = (Website) o;
    return Objects.equals(this.serviceInfo, website.serviceInfo) &&
        Objects.equals(this.clientLinks, website.clientLinks) &&
        Objects.equals(this.billingDetails, website.billingDetails) &&
        Objects.equals(this.custCurrency, website.custCurrency) &&
        Objects.equals(this.custCurrencySymbol, website.custCurrencySymbol) &&
        Objects.equals(this.serviceMaster, website.serviceMaster) &&
        Objects.equals(this._package, website._package) &&
        Objects.equals(this.serviceExtra, website.serviceExtra) &&
        Objects.equals(this.extraInfoTables, website.extraInfoTables);
  }

  @Override
  public int hashCode() {
    return Objects.hash(serviceInfo, clientLinks, billingDetails, custCurrency, custCurrencySymbol, serviceMaster, _package, serviceExtra, extraInfoTables);
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
  private static String toIndentedString(Object o) {
    return o == null ? "null" : o.toString().replace("\n", "\n    ");
  }
}

