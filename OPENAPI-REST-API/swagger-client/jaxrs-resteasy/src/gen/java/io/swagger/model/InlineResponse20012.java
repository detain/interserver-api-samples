package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.model.InlineResponse20012BillingDetails;
import io.swagger.model.InlineResponse20012ClientLinks;
import io.swagger.model.InlineResponse20012ExtraInfoTables;
import io.swagger.model.InlineResponse20012FilterFirewall;
import io.swagger.model.InlineResponse20012ServiceInfo;
import java.util.List;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;



public class InlineResponse20012   {
  private InlineResponse20012ServiceInfo serviceInfo = null;  private List<InlineResponse20012ClientLinks> clientLinks = new ArrayList<InlineResponse20012ClientLinks>();  private InlineResponse20012BillingDetails billingDetails = null;  private String custCurrency = null;  private String custCurrencySymbol = null;  private String _package = null;  private InlineResponse20012ExtraInfoTables extraInfoTables = null;  private InlineResponse20012FilterFirewall filterFirewall = null;

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("serviceInfo")
  @NotNull
  public InlineResponse20012ServiceInfo getServiceInfo() {
    return serviceInfo;
  }
  public void setServiceInfo(InlineResponse20012ServiceInfo serviceInfo) {
    this.serviceInfo = serviceInfo;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("client_links")
  @NotNull
  public List<InlineResponse20012ClientLinks> getClientLinks() {
    return clientLinks;
  }
  public void setClientLinks(List<InlineResponse20012ClientLinks> clientLinks) {
    this.clientLinks = clientLinks;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("billingDetails")
  @NotNull
  public InlineResponse20012BillingDetails getBillingDetails() {
    return billingDetails;
  }
  public void setBillingDetails(InlineResponse20012BillingDetails billingDetails) {
    this.billingDetails = billingDetails;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("custCurrency")
  @NotNull
  public String getCustCurrency() {
    return custCurrency;
  }
  public void setCustCurrency(String custCurrency) {
    this.custCurrency = custCurrency;
  }

  /**
   **/
  
  @Schema(description = "")
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
  @JsonProperty("extraInfoTables")
  @NotNull
  public InlineResponse20012ExtraInfoTables getExtraInfoTables() {
    return extraInfoTables;
  }
  public void setExtraInfoTables(InlineResponse20012ExtraInfoTables extraInfoTables) {
    this.extraInfoTables = extraInfoTables;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("filter_firewall")
  @NotNull
  public InlineResponse20012FilterFirewall getFilterFirewall() {
    return filterFirewall;
  }
  public void setFilterFirewall(InlineResponse20012FilterFirewall filterFirewall) {
    this.filterFirewall = filterFirewall;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    InlineResponse20012 inlineResponse20012 = (InlineResponse20012) o;
    return Objects.equals(serviceInfo, inlineResponse20012.serviceInfo) &&
        Objects.equals(clientLinks, inlineResponse20012.clientLinks) &&
        Objects.equals(billingDetails, inlineResponse20012.billingDetails) &&
        Objects.equals(custCurrency, inlineResponse20012.custCurrency) &&
        Objects.equals(custCurrencySymbol, inlineResponse20012.custCurrencySymbol) &&
        Objects.equals(_package, inlineResponse20012._package) &&
        Objects.equals(extraInfoTables, inlineResponse20012.extraInfoTables) &&
        Objects.equals(filterFirewall, inlineResponse20012.filterFirewall);
  }

  @Override
  public int hashCode() {
    return Objects.hash(serviceInfo, clientLinks, billingDetails, custCurrency, custCurrencySymbol, _package, extraInfoTables, filterFirewall);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
