package io.swagger.model;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.model.WebsiteBillingDetails;
import io.swagger.model.WebsiteClientLink;
import io.swagger.model.WebsiteExtraInfoTables;
import io.swagger.model.WebsiteServiceExtra;
import io.swagger.model.WebsiteServiceInfo;
import io.swagger.model.WebsiteServiceMaster;
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.ArrayList;
import java.util.List;


/**
 * Full detail view of a webhosting service including billing, service configuration, and panel access links.
 **/
@Schema(description = "Full detail view of a webhosting service including billing, service configuration, and panel access links.")


public class Website   {
  @JsonProperty("serviceInfo")
  private WebsiteServiceInfo serviceInfo = null;
  @JsonProperty("client_links")
  private List<WebsiteClientLink> clientLinks = null;
  @JsonProperty("billingDetails")
  private WebsiteBillingDetails billingDetails = null;
  @JsonProperty("custCurrency")
  private String custCurrency = null;
  @JsonProperty("custCurrencySymbol")
  private String custCurrencySymbol = null;
  @JsonProperty("serviceMaster")
  private WebsiteServiceMaster serviceMaster = null;
  @JsonProperty("package")
  private String _package = null;
  @JsonProperty("serviceExtra")
  private List<WebsiteServiceExtra> serviceExtra = null;
  @JsonProperty("extraInfoTables")
  private WebsiteExtraInfoTables extraInfoTables = null;
  /**
   **/
  public Website serviceInfo(WebsiteServiceInfo serviceInfo) {
    this.serviceInfo = serviceInfo;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("serviceInfo")
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

  
  @Schema(description = "")
  @JsonProperty("client_links")
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

  
  @Schema(description = "")
  @JsonProperty("billingDetails")
  public WebsiteBillingDetails getBillingDetails() {
    return billingDetails;
  }
  public void setBillingDetails(WebsiteBillingDetails billingDetails) {
    this.billingDetails = billingDetails;
  }

  /**
   * Customer's currency
   **/
  public Website custCurrency(String custCurrency) {
    this.custCurrency = custCurrency;
    return this;
  }

  
  @Schema(example = "USD", description = "Customer's currency")
  @JsonProperty("custCurrency")
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

  
  @Schema(example = "$", description = "Customer currency symbol")
  @JsonProperty("custCurrencySymbol")
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

  
  @Schema(description = "")
  @JsonProperty("serviceMaster")
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

  
  @Schema(example = "Web Hosting Direct Admin", description = "Package information")
  @JsonProperty("package")
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

  
  @Schema(description = "")
  @JsonProperty("serviceExtra")
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

  
  @Schema(description = "")
  @JsonProperty("extraInfoTables")
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
