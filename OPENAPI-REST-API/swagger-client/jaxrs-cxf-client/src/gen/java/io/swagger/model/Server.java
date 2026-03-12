package io.swagger.model;

import io.swagger.model.ServerBillingDetails;
import io.swagger.model.ServerClientLink;
import io.swagger.model.ServerExtraInfoTables;
import io.swagger.model.ServerLocations;
import io.swagger.model.ServerNetworkInfo;
import io.swagger.model.ServerServiceInfo;
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

public class Server   {
  
  @Schema(required = true, description = "")
  private Boolean ipmiAuth = null;
  
  @Schema(required = true, description = "")
  private List<ServerClientLink> clientLinks = new ArrayList<ServerClientLink>();
  
  @Schema(required = true, description = "")
  private ServerBillingDetails billingDetails = null;
  
  @Schema(required = true, description = "")
  private String custCurrency = null;
  
  @Schema(required = true, description = "")
  private String custCurrencySymbol = null;
  
  @Schema(required = true, description = "")
  private String _package = null;
  
  @Schema(required = true, description = "")
  private List<String> serviceExtra = new ArrayList<String>();
  
  @Schema(required = true, description = "")
  private ServerLocations locations = null;
  
  @Schema(required = true, description = "")
  private ServerNetworkInfo networkInfo = null;
  
  @Schema(required = true, description = "")
  private ServerExtraInfoTables extraInfoTables = null;
  
  @Schema(required = true, description = "")
  private ServerServiceInfo serviceInfo = null;
 /**
   * Get ipmiAuth
   * @return ipmiAuth
  **/
  @JsonProperty("ipmiAuth")
  public Boolean isIpmiAuth() {
    return ipmiAuth;
  }

  public void setIpmiAuth(Boolean ipmiAuth) {
    this.ipmiAuth = ipmiAuth;
  }

  public Server ipmiAuth(Boolean ipmiAuth) {
    this.ipmiAuth = ipmiAuth;
    return this;
  }

 /**
   * Get clientLinks
   * @return clientLinks
  **/
  @JsonProperty("client_links")
  public List<ServerClientLink> getClientLinks() {
    return clientLinks;
  }

  public void setClientLinks(List<ServerClientLink> clientLinks) {
    this.clientLinks = clientLinks;
  }

  public Server clientLinks(List<ServerClientLink> clientLinks) {
    this.clientLinks = clientLinks;
    return this;
  }

  public Server addClientLinksItem(ServerClientLink clientLinksItem) {
    this.clientLinks.add(clientLinksItem);
    return this;
  }

 /**
   * Get billingDetails
   * @return billingDetails
  **/
  @JsonProperty("billingDetails")
  public ServerBillingDetails getBillingDetails() {
    return billingDetails;
  }

  public void setBillingDetails(ServerBillingDetails billingDetails) {
    this.billingDetails = billingDetails;
  }

  public Server billingDetails(ServerBillingDetails billingDetails) {
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

  public Server custCurrency(String custCurrency) {
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

  public Server custCurrencySymbol(String custCurrencySymbol) {
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

  public Server _package(String _package) {
    this._package = _package;
    return this;
  }

 /**
   * Get serviceExtra
   * @return serviceExtra
  **/
  @JsonProperty("serviceExtra")
  public List<String> getServiceExtra() {
    return serviceExtra;
  }

  public void setServiceExtra(List<String> serviceExtra) {
    this.serviceExtra = serviceExtra;
  }

  public Server serviceExtra(List<String> serviceExtra) {
    this.serviceExtra = serviceExtra;
    return this;
  }

  public Server addServiceExtraItem(String serviceExtraItem) {
    this.serviceExtra.add(serviceExtraItem);
    return this;
  }

 /**
   * Get locations
   * @return locations
  **/
  @JsonProperty("locations")
  public ServerLocations getLocations() {
    return locations;
  }

  public void setLocations(ServerLocations locations) {
    this.locations = locations;
  }

  public Server locations(ServerLocations locations) {
    this.locations = locations;
    return this;
  }

 /**
   * Get networkInfo
   * @return networkInfo
  **/
  @JsonProperty("networkInfo")
  public ServerNetworkInfo getNetworkInfo() {
    return networkInfo;
  }

  public void setNetworkInfo(ServerNetworkInfo networkInfo) {
    this.networkInfo = networkInfo;
  }

  public Server networkInfo(ServerNetworkInfo networkInfo) {
    this.networkInfo = networkInfo;
    return this;
  }

 /**
   * Get extraInfoTables
   * @return extraInfoTables
  **/
  @JsonProperty("extraInfoTables")
  public ServerExtraInfoTables getExtraInfoTables() {
    return extraInfoTables;
  }

  public void setExtraInfoTables(ServerExtraInfoTables extraInfoTables) {
    this.extraInfoTables = extraInfoTables;
  }

  public Server extraInfoTables(ServerExtraInfoTables extraInfoTables) {
    this.extraInfoTables = extraInfoTables;
    return this;
  }

 /**
   * Get serviceInfo
   * @return serviceInfo
  **/
  @JsonProperty("serviceInfo")
  public ServerServiceInfo getServiceInfo() {
    return serviceInfo;
  }

  public void setServiceInfo(ServerServiceInfo serviceInfo) {
    this.serviceInfo = serviceInfo;
  }

  public Server serviceInfo(ServerServiceInfo serviceInfo) {
    this.serviceInfo = serviceInfo;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class Server {\n");
    
    sb.append("    ipmiAuth: ").append(toIndentedString(ipmiAuth)).append("\n");
    sb.append("    clientLinks: ").append(toIndentedString(clientLinks)).append("\n");
    sb.append("    billingDetails: ").append(toIndentedString(billingDetails)).append("\n");
    sb.append("    custCurrency: ").append(toIndentedString(custCurrency)).append("\n");
    sb.append("    custCurrencySymbol: ").append(toIndentedString(custCurrencySymbol)).append("\n");
    sb.append("    _package: ").append(toIndentedString(_package)).append("\n");
    sb.append("    serviceExtra: ").append(toIndentedString(serviceExtra)).append("\n");
    sb.append("    locations: ").append(toIndentedString(locations)).append("\n");
    sb.append("    networkInfo: ").append(toIndentedString(networkInfo)).append("\n");
    sb.append("    extraInfoTables: ").append(toIndentedString(extraInfoTables)).append("\n");
    sb.append("    serviceInfo: ").append(toIndentedString(serviceInfo)).append("\n");
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
