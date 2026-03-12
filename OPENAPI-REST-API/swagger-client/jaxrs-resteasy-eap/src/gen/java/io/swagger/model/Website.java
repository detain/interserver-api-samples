package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.model.WebsiteBillingDetails;
import io.swagger.model.WebsiteClientLink;
import io.swagger.model.WebsiteExtraInfoTables;
import io.swagger.model.WebsiteServiceExtra;
import io.swagger.model.WebsiteServiceInfo;
import io.swagger.model.WebsiteServiceMaster;
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.List;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;

@Schema(description="Full detail view of a webhosting service including billing, service configuration, and panel access links.")

public class Website   {
  private WebsiteServiceInfo serviceInfo = null;
  private List<WebsiteClientLink> clientLinks = new ArrayList<WebsiteClientLink>();
  private WebsiteBillingDetails billingDetails = null;
  private String custCurrency = null;
  private String custCurrencySymbol = null;
  private WebsiteServiceMaster serviceMaster = null;
  private String _package = null;
  private List<WebsiteServiceExtra> serviceExtra = new ArrayList<WebsiteServiceExtra>();
  private WebsiteExtraInfoTables extraInfoTables = null;

  /**
   **/
  
  @Schema(description = "")
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
  
  @Schema(description = "")
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
  
  @Schema(description = "")
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
  
  @Schema(example = "USD", description = "Customer's currency")
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
  
  @Schema(example = "$", description = "Customer currency symbol")
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
  
  @Schema(description = "")
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
  
  @Schema(example = "Web Hosting Direct Admin", description = "Package information")
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
  
  @Schema(description = "")
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
  
  @Schema(description = "")
  @JsonProperty("extraInfoTables")
  @NotNull
  public WebsiteExtraInfoTables getExtraInfoTables() {
    return extraInfoTables;
  }
  public void setExtraInfoTables(WebsiteExtraInfoTables extraInfoTables) {
    this.extraInfoTables = extraInfoTables;
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
  private String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
