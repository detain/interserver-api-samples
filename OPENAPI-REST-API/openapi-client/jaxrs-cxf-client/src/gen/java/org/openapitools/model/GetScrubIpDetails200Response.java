package org.openapitools.model;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import org.openapitools.model.GetScrubIpDetails200ResponseBillingDetails;
import org.openapitools.model.GetScrubIpDetails200ResponseClientLinksInner;
import org.openapitools.model.GetScrubIpDetails200ResponseExtraInfoTables;
import org.openapitools.model.GetScrubIpDetails200ResponseFilterFirewall;
import org.openapitools.model.GetScrubIpDetails200ResponseServiceInfo;

import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class GetScrubIpDetails200Response  {
  
  @ApiModelProperty(value = "")

  private GetScrubIpDetails200ResponseServiceInfo serviceInfo;

  @ApiModelProperty(value = "")

  private List<GetScrubIpDetails200ResponseClientLinksInner> clientLinks = new ArrayList<>();

  @ApiModelProperty(value = "")

  private GetScrubIpDetails200ResponseBillingDetails billingDetails;

  @ApiModelProperty(value = "")

  private String custCurrency;

  @ApiModelProperty(value = "")

  private String custCurrencySymbol;

  @ApiModelProperty(value = "")

  private String _package;

  @ApiModelProperty(value = "")

  private GetScrubIpDetails200ResponseExtraInfoTables extraInfoTables;

  @ApiModelProperty(value = "")

  private GetScrubIpDetails200ResponseFilterFirewall filterFirewall;
 /**
   * Get serviceInfo
   * @return serviceInfo
  **/
  @JsonProperty("serviceInfo")
  public GetScrubIpDetails200ResponseServiceInfo getServiceInfo() {
    return serviceInfo;
  }

  public void setServiceInfo(GetScrubIpDetails200ResponseServiceInfo serviceInfo) {
    this.serviceInfo = serviceInfo;
  }

  public GetScrubIpDetails200Response serviceInfo(GetScrubIpDetails200ResponseServiceInfo serviceInfo) {
    this.serviceInfo = serviceInfo;
    return this;
  }

 /**
   * Get clientLinks
   * @return clientLinks
  **/
  @JsonProperty("client_links")
  public List<GetScrubIpDetails200ResponseClientLinksInner> getClientLinks() {
    return clientLinks;
  }

  public void setClientLinks(List<GetScrubIpDetails200ResponseClientLinksInner> clientLinks) {
    this.clientLinks = clientLinks;
  }

  public GetScrubIpDetails200Response clientLinks(List<GetScrubIpDetails200ResponseClientLinksInner> clientLinks) {
    this.clientLinks = clientLinks;
    return this;
  }

  public GetScrubIpDetails200Response addClientLinksItem(GetScrubIpDetails200ResponseClientLinksInner clientLinksItem) {
    this.clientLinks.add(clientLinksItem);
    return this;
  }

 /**
   * Get billingDetails
   * @return billingDetails
  **/
  @JsonProperty("billingDetails")
  public GetScrubIpDetails200ResponseBillingDetails getBillingDetails() {
    return billingDetails;
  }

  public void setBillingDetails(GetScrubIpDetails200ResponseBillingDetails billingDetails) {
    this.billingDetails = billingDetails;
  }

  public GetScrubIpDetails200Response billingDetails(GetScrubIpDetails200ResponseBillingDetails billingDetails) {
    this.billingDetails = billingDetails;
    return this;
  }

 /**
   * Get custCurrency
   * @return custCurrency
  **/
  @JsonProperty("custCurrency")
  public String getCustCurrency() {
    return custCurrency;
  }

  public void setCustCurrency(String custCurrency) {
    this.custCurrency = custCurrency;
  }

  public GetScrubIpDetails200Response custCurrency(String custCurrency) {
    this.custCurrency = custCurrency;
    return this;
  }

 /**
   * Get custCurrencySymbol
   * @return custCurrencySymbol
  **/
  @JsonProperty("custCurrencySymbol")
  public String getCustCurrencySymbol() {
    return custCurrencySymbol;
  }

  public void setCustCurrencySymbol(String custCurrencySymbol) {
    this.custCurrencySymbol = custCurrencySymbol;
  }

  public GetScrubIpDetails200Response custCurrencySymbol(String custCurrencySymbol) {
    this.custCurrencySymbol = custCurrencySymbol;
    return this;
  }

 /**
   * Get _package
   * @return _package
  **/
  @JsonProperty("package")
  public String getPackage() {
    return _package;
  }

  public void setPackage(String _package) {
    this._package = _package;
  }

  public GetScrubIpDetails200Response _package(String _package) {
    this._package = _package;
    return this;
  }

 /**
   * Get extraInfoTables
   * @return extraInfoTables
  **/
  @JsonProperty("extraInfoTables")
  public GetScrubIpDetails200ResponseExtraInfoTables getExtraInfoTables() {
    return extraInfoTables;
  }

  public void setExtraInfoTables(GetScrubIpDetails200ResponseExtraInfoTables extraInfoTables) {
    this.extraInfoTables = extraInfoTables;
  }

  public GetScrubIpDetails200Response extraInfoTables(GetScrubIpDetails200ResponseExtraInfoTables extraInfoTables) {
    this.extraInfoTables = extraInfoTables;
    return this;
  }

 /**
   * Get filterFirewall
   * @return filterFirewall
  **/
  @JsonProperty("filter_firewall")
  public GetScrubIpDetails200ResponseFilterFirewall getFilterFirewall() {
    return filterFirewall;
  }

  public void setFilterFirewall(GetScrubIpDetails200ResponseFilterFirewall filterFirewall) {
    this.filterFirewall = filterFirewall;
  }

  public GetScrubIpDetails200Response filterFirewall(GetScrubIpDetails200ResponseFilterFirewall filterFirewall) {
    this.filterFirewall = filterFirewall;
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
    GetScrubIpDetails200Response getScrubIpDetails200Response = (GetScrubIpDetails200Response) o;
    return Objects.equals(this.serviceInfo, getScrubIpDetails200Response.serviceInfo) &&
        Objects.equals(this.clientLinks, getScrubIpDetails200Response.clientLinks) &&
        Objects.equals(this.billingDetails, getScrubIpDetails200Response.billingDetails) &&
        Objects.equals(this.custCurrency, getScrubIpDetails200Response.custCurrency) &&
        Objects.equals(this.custCurrencySymbol, getScrubIpDetails200Response.custCurrencySymbol) &&
        Objects.equals(this._package, getScrubIpDetails200Response._package) &&
        Objects.equals(this.extraInfoTables, getScrubIpDetails200Response.extraInfoTables) &&
        Objects.equals(this.filterFirewall, getScrubIpDetails200Response.filterFirewall);
  }

  @Override
  public int hashCode() {
    return Objects.hash(serviceInfo, clientLinks, billingDetails, custCurrency, custCurrencySymbol, _package, extraInfoTables, filterFirewall);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class GetScrubIpDetails200Response {\n");
    
    sb.append("    serviceInfo: ").append(toIndentedString(serviceInfo)).append("\n");
    sb.append("    clientLinks: ").append(toIndentedString(clientLinks)).append("\n");
    sb.append("    billingDetails: ").append(toIndentedString(billingDetails)).append("\n");
    sb.append("    custCurrency: ").append(toIndentedString(custCurrency)).append("\n");
    sb.append("    custCurrencySymbol: ").append(toIndentedString(custCurrencySymbol)).append("\n");
    sb.append("    _package: ").append(toIndentedString(_package)).append("\n");
    sb.append("    extraInfoTables: ").append(toIndentedString(extraInfoTables)).append("\n");
    sb.append("    filterFirewall: ").append(toIndentedString(filterFirewall)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private static String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

