package io.swagger.model;

import io.swagger.model.BackupBillingDetails;
import io.swagger.model.BackupClientLink;
import io.swagger.model.BackupExtraInfoTables;
import io.swagger.model.BackupServiceInfo;
import io.swagger.model.BackupServiceMaster;
import io.swagger.v3.oas.annotations.media.Schema;
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

/**
  * Full detail view of a backup service including billing, service info, and configuration.
 **/
@Schema(description="Full detail view of a backup service including billing, service info, and configuration.")
public class Backup   {
  
  @Schema(description = "")
  private BackupServiceInfo serviceInfo = null;
  
  @Schema(description = "")
  private List<BackupClientLink> clientLinks = null;
  
  @Schema(description = "")
  private BackupBillingDetails billingDetails = null;
  
  @Schema(example = "USD", description = "Customer's currency.")
 /**
   * Customer's currency.  
  **/
  private String custCurrency = null;
  
  @Schema(example = "$", description = "Customer's currency symbol.")
 /**
   * Customer's currency symbol.  
  **/
  private String custCurrencySymbol = null;
  
  @Schema(description = "")
  private BackupServiceMaster serviceMaster = null;
  
  @Schema(description = "Package information.")
 /**
   * Package information.  
  **/
  private String _package = null;
  
  @Schema(description = "")
  private String serviceExtra = null;
  
  @Schema(description = "")
  private BackupExtraInfoTables extraInfoTables = null;
 /**
   * Get serviceInfo
   * @return serviceInfo
  **/
  @JsonProperty("serviceInfo")
  public BackupServiceInfo getServiceInfo() {
    return serviceInfo;
  }

  public void setServiceInfo(BackupServiceInfo serviceInfo) {
    this.serviceInfo = serviceInfo;
  }

  public Backup serviceInfo(BackupServiceInfo serviceInfo) {
    this.serviceInfo = serviceInfo;
    return this;
  }

 /**
   * Get clientLinks
   * @return clientLinks
  **/
  @JsonProperty("client_links")
  public List<BackupClientLink> getClientLinks() {
    return clientLinks;
  }

  public void setClientLinks(List<BackupClientLink> clientLinks) {
    this.clientLinks = clientLinks;
  }

  public Backup clientLinks(List<BackupClientLink> clientLinks) {
    this.clientLinks = clientLinks;
    return this;
  }

  public Backup addClientLinksItem(BackupClientLink clientLinksItem) {
    this.clientLinks.add(clientLinksItem);
    return this;
  }

 /**
   * Get billingDetails
   * @return billingDetails
  **/
  @JsonProperty("billingDetails")
  public BackupBillingDetails getBillingDetails() {
    return billingDetails;
  }

  public void setBillingDetails(BackupBillingDetails billingDetails) {
    this.billingDetails = billingDetails;
  }

  public Backup billingDetails(BackupBillingDetails billingDetails) {
    this.billingDetails = billingDetails;
    return this;
  }

 /**
   * Customer&#x27;s currency.
   * @return custCurrency
  **/
  @JsonProperty("custCurrency")
  public String getCustCurrency() {
    return custCurrency;
  }

  public void setCustCurrency(String custCurrency) {
    this.custCurrency = custCurrency;
  }

  public Backup custCurrency(String custCurrency) {
    this.custCurrency = custCurrency;
    return this;
  }

 /**
   * Customer&#x27;s currency symbol.
   * @return custCurrencySymbol
  **/
  @JsonProperty("custCurrencySymbol")
  public String getCustCurrencySymbol() {
    return custCurrencySymbol;
  }

  public void setCustCurrencySymbol(String custCurrencySymbol) {
    this.custCurrencySymbol = custCurrencySymbol;
  }

  public Backup custCurrencySymbol(String custCurrencySymbol) {
    this.custCurrencySymbol = custCurrencySymbol;
    return this;
  }

 /**
   * Get serviceMaster
   * @return serviceMaster
  **/
  @JsonProperty("serviceMaster")
  public BackupServiceMaster getServiceMaster() {
    return serviceMaster;
  }

  public void setServiceMaster(BackupServiceMaster serviceMaster) {
    this.serviceMaster = serviceMaster;
  }

  public Backup serviceMaster(BackupServiceMaster serviceMaster) {
    this.serviceMaster = serviceMaster;
    return this;
  }

 /**
   * Package information.
   * @return _package
  **/
  @JsonProperty("package")
  public String getPackage() {
    return _package;
  }

  public void setPackage(String _package) {
    this._package = _package;
  }

  public Backup _package(String _package) {
    this._package = _package;
    return this;
  }

 /**
   * Get serviceExtra
   * @return serviceExtra
  **/
  @JsonProperty("serviceExtra")
  public String getServiceExtra() {
    return serviceExtra;
  }

  public void setServiceExtra(String serviceExtra) {
    this.serviceExtra = serviceExtra;
  }

  public Backup serviceExtra(String serviceExtra) {
    this.serviceExtra = serviceExtra;
    return this;
  }

 /**
   * Get extraInfoTables
   * @return extraInfoTables
  **/
  @JsonProperty("extraInfoTables")
  public BackupExtraInfoTables getExtraInfoTables() {
    return extraInfoTables;
  }

  public void setExtraInfoTables(BackupExtraInfoTables extraInfoTables) {
    this.extraInfoTables = extraInfoTables;
  }

  public Backup extraInfoTables(BackupExtraInfoTables extraInfoTables) {
    this.extraInfoTables = extraInfoTables;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class Backup {\n");
    
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
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
