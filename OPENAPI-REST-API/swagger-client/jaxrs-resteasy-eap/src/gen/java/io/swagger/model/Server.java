package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.model.ServerBillingDetails;
import io.swagger.model.ServerClientLink;
import io.swagger.model.ServerExtraInfoTables;
import io.swagger.model.ServerLocations;
import io.swagger.model.ServerNetworkInfo;
import io.swagger.model.ServerServiceInfo;
import java.util.List;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;



public class Server   {
  private Boolean ipmiAuth = null;
  private List<ServerClientLink> clientLinks = new ArrayList<ServerClientLink>();
  private ServerBillingDetails billingDetails = null;
  private String custCurrency = null;
  private String custCurrencySymbol = null;
  private String _package = null;
  private List<String> serviceExtra = new ArrayList<String>();
  private ServerLocations locations = null;
  private ServerNetworkInfo networkInfo = null;
  private ServerExtraInfoTables extraInfoTables = null;
  private ServerServiceInfo serviceInfo = null;

  /**
   **/
  
  @Schema(required = true, description = "")
  @JsonProperty("ipmiAuth")
  @NotNull
  public Boolean isIpmiAuth() {
    return ipmiAuth;
  }
  public void setIpmiAuth(Boolean ipmiAuth) {
    this.ipmiAuth = ipmiAuth;
  }

  /**
   **/
  
  @Schema(required = true, description = "")
  @JsonProperty("client_links")
  @NotNull
  public List<ServerClientLink> getClientLinks() {
    return clientLinks;
  }
  public void setClientLinks(List<ServerClientLink> clientLinks) {
    this.clientLinks = clientLinks;
  }

  /**
   **/
  
  @Schema(required = true, description = "")
  @JsonProperty("billingDetails")
  @NotNull
  public ServerBillingDetails getBillingDetails() {
    return billingDetails;
  }
  public void setBillingDetails(ServerBillingDetails billingDetails) {
    this.billingDetails = billingDetails;
  }

  /**
   **/
  
  @Schema(required = true, description = "")
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
  
  @Schema(required = true, description = "")
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
  
  @Schema(required = true, description = "")
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
  
  @Schema(required = true, description = "")
  @JsonProperty("serviceExtra")
  @NotNull
  public List<String> getServiceExtra() {
    return serviceExtra;
  }
  public void setServiceExtra(List<String> serviceExtra) {
    this.serviceExtra = serviceExtra;
  }

  /**
   **/
  
  @Schema(required = true, description = "")
  @JsonProperty("locations")
  @NotNull
  public ServerLocations getLocations() {
    return locations;
  }
  public void setLocations(ServerLocations locations) {
    this.locations = locations;
  }

  /**
   **/
  
  @Schema(required = true, description = "")
  @JsonProperty("networkInfo")
  @NotNull
  public ServerNetworkInfo getNetworkInfo() {
    return networkInfo;
  }
  public void setNetworkInfo(ServerNetworkInfo networkInfo) {
    this.networkInfo = networkInfo;
  }

  /**
   **/
  
  @Schema(required = true, description = "")
  @JsonProperty("extraInfoTables")
  @NotNull
  public ServerExtraInfoTables getExtraInfoTables() {
    return extraInfoTables;
  }
  public void setExtraInfoTables(ServerExtraInfoTables extraInfoTables) {
    this.extraInfoTables = extraInfoTables;
  }

  /**
   **/
  
  @Schema(required = true, description = "")
  @JsonProperty("serviceInfo")
  @NotNull
  public ServerServiceInfo getServiceInfo() {
    return serviceInfo;
  }
  public void setServiceInfo(ServerServiceInfo serviceInfo) {
    this.serviceInfo = serviceInfo;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    Server server = (Server) o;
    return Objects.equals(ipmiAuth, server.ipmiAuth) &&
        Objects.equals(clientLinks, server.clientLinks) &&
        Objects.equals(billingDetails, server.billingDetails) &&
        Objects.equals(custCurrency, server.custCurrency) &&
        Objects.equals(custCurrencySymbol, server.custCurrencySymbol) &&
        Objects.equals(_package, server._package) &&
        Objects.equals(serviceExtra, server.serviceExtra) &&
        Objects.equals(locations, server.locations) &&
        Objects.equals(networkInfo, server.networkInfo) &&
        Objects.equals(extraInfoTables, server.extraInfoTables) &&
        Objects.equals(serviceInfo, server.serviceInfo);
  }

  @Override
  public int hashCode() {
    return Objects.hash(ipmiAuth, clientLinks, billingDetails, custCurrency, custCurrencySymbol, _package, serviceExtra, locations, networkInfo, extraInfoTables, serviceInfo);
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
  private String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
