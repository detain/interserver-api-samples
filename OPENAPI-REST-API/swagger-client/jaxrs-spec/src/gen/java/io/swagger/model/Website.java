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
import javax.validation.Valid;

/**
 * Full detail view of a webhosting service including billing, service configuration, and panel access links.
 **/
import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
@Schema(description = "Full detail view of a webhosting service including billing, service configuration, and panel access links.")

public class Website   {

  private @Valid WebsiteServiceInfo serviceInfo = null;

  private @Valid List<WebsiteClientLink> clientLinks = new ArrayList<WebsiteClientLink>();

  private @Valid WebsiteBillingDetails billingDetails = null;

  private @Valid String custCurrency = null;

  private @Valid String custCurrencySymbol = null;

  private @Valid WebsiteServiceMaster serviceMaster = null;

  private @Valid String _package = null;

  private @Valid List<WebsiteServiceExtra> serviceExtra = new ArrayList<WebsiteServiceExtra>();

  private @Valid WebsiteExtraInfoTables extraInfoTables = null;

  /**
   **/
  public Website serviceInfo(WebsiteServiceInfo serviceInfo) {
    this.serviceInfo = serviceInfo;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("serviceInfo")
  @NotNull

  public WebsiteServiceInfo getServiceInfo() {
    return serviceInfo;
  }
  public void setServiceInfo(WebsiteServiceInfo serviceInfo) {
    this.serviceInfo = serviceInfo;
  }

  /**
   **/
  public Website clientLinks(List<WebsiteClientLink> clientLinks) {
    this.clientLinks = clientLinks;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("client_links")
  @NotNull

  public List<WebsiteClientLink> getClientLinks() {
    return clientLinks;
  }
  public void setClientLinks(List<WebsiteClientLink> clientLinks) {
    this.clientLinks = clientLinks;
  }

  /**
   **/
  public Website billingDetails(WebsiteBillingDetails billingDetails) {
    this.billingDetails = billingDetails;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("billingDetails")
  @NotNull

  public WebsiteBillingDetails getBillingDetails() {
    return billingDetails;
  }
  public void setBillingDetails(WebsiteBillingDetails billingDetails) {
    this.billingDetails = billingDetails;
  }

  /**
   * Customer&#x27;s currency
   **/
  public Website custCurrency(String custCurrency) {
    this.custCurrency = custCurrency;
    return this;
  }

  
  @ApiModelProperty(example = "USD", value = "Customer's currency")
  @JsonProperty("custCurrency")
  @NotNull

  public String getCustCurrency() {
    return custCurrency;
  }
  public void setCustCurrency(String custCurrency) {
    this.custCurrency = custCurrency;
  }

  /**
   * Customer currency symbol
   **/
  public Website custCurrencySymbol(String custCurrencySymbol) {
    this.custCurrencySymbol = custCurrencySymbol;
    return this;
  }

  
  @ApiModelProperty(example = "$", value = "Customer currency symbol")
  @JsonProperty("custCurrencySymbol")
  @NotNull

  public String getCustCurrencySymbol() {
    return custCurrencySymbol;
  }
  public void setCustCurrencySymbol(String custCurrencySymbol) {
    this.custCurrencySymbol = custCurrencySymbol;
  }

  /**
   **/
  public Website serviceMaster(WebsiteServiceMaster serviceMaster) {
    this.serviceMaster = serviceMaster;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("serviceMaster")
  @NotNull

  public WebsiteServiceMaster getServiceMaster() {
    return serviceMaster;
  }
  public void setServiceMaster(WebsiteServiceMaster serviceMaster) {
    this.serviceMaster = serviceMaster;
  }

  /**
   * Package information
   **/
  public Website _package(String _package) {
    this._package = _package;
    return this;
  }

  
  @ApiModelProperty(example = "Web Hosting Direct Admin", value = "Package information")
  @JsonProperty("package")
  @NotNull

  public String getPackage() {
    return _package;
  }
  public void setPackage(String _package) {
    this._package = _package;
  }

  /**
   **/
  public Website serviceExtra(List<WebsiteServiceExtra> serviceExtra) {
    this.serviceExtra = serviceExtra;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("serviceExtra")
  @NotNull

  public List<WebsiteServiceExtra> getServiceExtra() {
    return serviceExtra;
  }
  public void setServiceExtra(List<WebsiteServiceExtra> serviceExtra) {
    this.serviceExtra = serviceExtra;
  }

  /**
   **/
  public Website extraInfoTables(WebsiteExtraInfoTables extraInfoTables) {
    this.extraInfoTables = extraInfoTables;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("extraInfoTables")
  @NotNull

  public WebsiteExtraInfoTables getExtraInfoTables() {
    return extraInfoTables;
  }
  public void setExtraInfoTables(WebsiteExtraInfoTables extraInfoTables) {
    this.extraInfoTables = extraInfoTables;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    Website website = (Website) o;
    return Objects.equals(serviceInfo, website.serviceInfo) &&
        Objects.equals(clientLinks, website.clientLinks) &&
        Objects.equals(billingDetails, website.billingDetails) &&
        Objects.equals(custCurrency, website.custCurrency) &&
        Objects.equals(custCurrencySymbol, website.custCurrencySymbol) &&
        Objects.equals(serviceMaster, website.serviceMaster) &&
        Objects.equals(_package, website._package) &&
        Objects.equals(serviceExtra, website.serviceExtra) &&
        Objects.equals(extraInfoTables, website.extraInfoTables);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
