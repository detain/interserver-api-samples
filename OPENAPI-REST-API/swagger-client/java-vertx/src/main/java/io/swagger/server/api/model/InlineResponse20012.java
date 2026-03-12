package io.swagger.server.api.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.server.api.model.InlineResponse20012BillingDetails;
import io.swagger.server.api.model.InlineResponse20012ClientLinks;
import io.swagger.server.api.model.InlineResponse20012ExtraInfoTables;
import io.swagger.server.api.model.InlineResponse20012FilterFirewall;
import io.swagger.server.api.model.InlineResponse20012ServiceInfo;
import java.util.ArrayList;
import java.util.List;
import io.vertx.core.json.JsonObject;
import io.vertx.codegen.annotations.DataObject;
/**
 * InlineResponse20012
 */




public class InlineResponse20012   {
  private InlineResponse20012ServiceInfo serviceInfo = null;

  
  private List<InlineResponse20012ClientLinks> clientLinks = null;

  private InlineResponse20012BillingDetails billingDetails = null;

  private String custCurrency = null;

  private String custCurrencySymbol = null;

  private String _package = null;

  private InlineResponse20012ExtraInfoTables extraInfoTables = null;

  private InlineResponse20012FilterFirewall filterFirewall = null;

  public InlineResponse20012 serviceInfo(InlineResponse20012ServiceInfo serviceInfo) {
    this.serviceInfo = serviceInfo;
    return this;
  }

  /**
   * Get serviceInfo
   * @return serviceInfo
   **/
    public InlineResponse20012ServiceInfo getServiceInfo() {
    return serviceInfo;
  }

  public void setServiceInfo(InlineResponse20012ServiceInfo serviceInfo) {
    this.serviceInfo = serviceInfo;
  }

  public InlineResponse20012 clientLinks(List<InlineResponse20012ClientLinks> clientLinks) {
    this.clientLinks = clientLinks;
    return this;
  }

  public InlineResponse20012 addClientLinksItem(InlineResponse20012ClientLinks clientLinksItem) {
    if (this.clientLinks == null) {
      this.clientLinks = new ArrayList<InlineResponse20012ClientLinks>();
    }
    this.clientLinks.add(clientLinksItem);
    return this;
  }

  /**
   * Get clientLinks
   * @return clientLinks
   **/
    public List<InlineResponse20012ClientLinks> getClientLinks() {
    return clientLinks;
  }

  public void setClientLinks(List<InlineResponse20012ClientLinks> clientLinks) {
    this.clientLinks = clientLinks;
  }

  public InlineResponse20012 billingDetails(InlineResponse20012BillingDetails billingDetails) {
    this.billingDetails = billingDetails;
    return this;
  }

  /**
   * Get billingDetails
   * @return billingDetails
   **/
    public InlineResponse20012BillingDetails getBillingDetails() {
    return billingDetails;
  }

  public void setBillingDetails(InlineResponse20012BillingDetails billingDetails) {
    this.billingDetails = billingDetails;
  }

  public InlineResponse20012 custCurrency(String custCurrency) {
    this.custCurrency = custCurrency;
    return this;
  }

  /**
   * Get custCurrency
   * @return custCurrency
   **/
    public String getCustCurrency() {
    return custCurrency;
  }

  public void setCustCurrency(String custCurrency) {
    this.custCurrency = custCurrency;
  }

  public InlineResponse20012 custCurrencySymbol(String custCurrencySymbol) {
    this.custCurrencySymbol = custCurrencySymbol;
    return this;
  }

  /**
   * Get custCurrencySymbol
   * @return custCurrencySymbol
   **/
    public String getCustCurrencySymbol() {
    return custCurrencySymbol;
  }

  public void setCustCurrencySymbol(String custCurrencySymbol) {
    this.custCurrencySymbol = custCurrencySymbol;
  }

  public InlineResponse20012 _package(String _package) {
    this._package = _package;
    return this;
  }

  /**
   * Get _package
   * @return _package
   **/
    public String getPackage() {
    return _package;
  }

  public void setPackage(String _package) {
    this._package = _package;
  }

  public InlineResponse20012 extraInfoTables(InlineResponse20012ExtraInfoTables extraInfoTables) {
    this.extraInfoTables = extraInfoTables;
    return this;
  }

  /**
   * Get extraInfoTables
   * @return extraInfoTables
   **/
    public InlineResponse20012ExtraInfoTables getExtraInfoTables() {
    return extraInfoTables;
  }

  public void setExtraInfoTables(InlineResponse20012ExtraInfoTables extraInfoTables) {
    this.extraInfoTables = extraInfoTables;
  }

  public InlineResponse20012 filterFirewall(InlineResponse20012FilterFirewall filterFirewall) {
    this.filterFirewall = filterFirewall;
    return this;
  }

  /**
   * Get filterFirewall
   * @return filterFirewall
   **/
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
    return Objects.equals(this.serviceInfo, inlineResponse20012.serviceInfo) &&
        Objects.equals(this.clientLinks, inlineResponse20012.clientLinks) &&
        Objects.equals(this.billingDetails, inlineResponse20012.billingDetails) &&
        Objects.equals(this.custCurrency, inlineResponse20012.custCurrency) &&
        Objects.equals(this.custCurrencySymbol, inlineResponse20012.custCurrencySymbol) &&
        Objects.equals(this._package, inlineResponse20012._package) &&
        Objects.equals(this.extraInfoTables, inlineResponse20012.extraInfoTables) &&
        Objects.equals(this.filterFirewall, inlineResponse20012.filterFirewall);
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
