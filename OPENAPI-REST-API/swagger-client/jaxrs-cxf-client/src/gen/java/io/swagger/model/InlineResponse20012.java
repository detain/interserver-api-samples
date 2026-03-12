package io.swagger.model;

import io.swagger.model.InlineResponse20012BillingDetails;
import io.swagger.model.InlineResponse20012ClientLinks;
import io.swagger.model.InlineResponse20012ExtraInfoTables;
import io.swagger.model.InlineResponse20012FilterFirewall;
import io.swagger.model.InlineResponse20012ServiceInfo;
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

public class InlineResponse20012   {
  
  @Schema(description = "")
  private InlineResponse20012ServiceInfo serviceInfo = null;
  
  @Schema(description = "")
  private List<InlineResponse20012ClientLinks> clientLinks = null;
  
  @Schema(description = "")
  private InlineResponse20012BillingDetails billingDetails = null;
  
  @Schema(description = "")
  private String custCurrency = null;
  
  @Schema(description = "")
  private String custCurrencySymbol = null;
  
  @Schema(description = "")
  private String _package = null;
  
  @Schema(description = "")
  private InlineResponse20012ExtraInfoTables extraInfoTables = null;
  
  @Schema(description = "")
  private InlineResponse20012FilterFirewall filterFirewall = null;
 /**
   * Get serviceInfo
   * @return serviceInfo
  **/
  @JsonProperty("serviceInfo")
  public InlineResponse20012ServiceInfo getServiceInfo() {
    return serviceInfo;
  }

  public void setServiceInfo(InlineResponse20012ServiceInfo serviceInfo) {
    this.serviceInfo = serviceInfo;
  }

  public InlineResponse20012 serviceInfo(InlineResponse20012ServiceInfo serviceInfo) {
    this.serviceInfo = serviceInfo;
    return this;
  }

 /**
   * Get clientLinks
   * @return clientLinks
  **/
  @JsonProperty("client_links")
  public List<InlineResponse20012ClientLinks> getClientLinks() {
    return clientLinks;
  }

  public void setClientLinks(List<InlineResponse20012ClientLinks> clientLinks) {
    this.clientLinks = clientLinks;
  }

  public InlineResponse20012 clientLinks(List<InlineResponse20012ClientLinks> clientLinks) {
    this.clientLinks = clientLinks;
    return this;
  }

  public InlineResponse20012 addClientLinksItem(InlineResponse20012ClientLinks clientLinksItem) {
    this.clientLinks.add(clientLinksItem);
    return this;
  }

 /**
   * Get billingDetails
   * @return billingDetails
  **/
  @JsonProperty("billingDetails")
  public InlineResponse20012BillingDetails getBillingDetails() {
    return billingDetails;
  }

  public void setBillingDetails(InlineResponse20012BillingDetails billingDetails) {
    this.billingDetails = billingDetails;
  }

  public InlineResponse20012 billingDetails(InlineResponse20012BillingDetails billingDetails) {
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

  public InlineResponse20012 custCurrency(String custCurrency) {
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

  public InlineResponse20012 custCurrencySymbol(String custCurrencySymbol) {
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

  public InlineResponse20012 _package(String _package) {
    this._package = _package;
    return this;
  }

 /**
   * Get extraInfoTables
   * @return extraInfoTables
  **/
  @JsonProperty("extraInfoTables")
  public InlineResponse20012ExtraInfoTables getExtraInfoTables() {
    return extraInfoTables;
  }

  public void setExtraInfoTables(InlineResponse20012ExtraInfoTables extraInfoTables) {
    this.extraInfoTables = extraInfoTables;
  }

  public InlineResponse20012 extraInfoTables(InlineResponse20012ExtraInfoTables extraInfoTables) {
    this.extraInfoTables = extraInfoTables;
    return this;
  }

 /**
   * Get filterFirewall
   * @return filterFirewall
  **/
  @JsonProperty("filter_firewall")
  public InlineResponse20012FilterFirewall getFilterFirewall() {
    return filterFirewall;
  }

  public void setFilterFirewall(InlineResponse20012FilterFirewall filterFirewall) {
    this.filterFirewall = filterFirewall;
  }

  public InlineResponse20012 filterFirewall(InlineResponse20012FilterFirewall filterFirewall) {
    this.filterFirewall = filterFirewall;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class InlineResponse20012 {\n");
    
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
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
