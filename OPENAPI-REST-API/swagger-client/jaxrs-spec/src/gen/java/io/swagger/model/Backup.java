package io.swagger.model;

import io.swagger.model.BackupBillingDetails;
import io.swagger.model.BackupClientLink;
import io.swagger.model.BackupExtraInfoTables;
import io.swagger.model.BackupServiceInfo;
import io.swagger.model.BackupServiceMaster;
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.ArrayList;
import java.util.List;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * Full detail view of a backup service including billing, service info, and configuration.
 **/
import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
@Schema(description = "Full detail view of a backup service including billing, service info, and configuration.")

public class Backup   {

  private @Valid BackupServiceInfo serviceInfo = null;

  private @Valid List<BackupClientLink> clientLinks = new ArrayList<BackupClientLink>();

  private @Valid BackupBillingDetails billingDetails = null;

  private @Valid String custCurrency = null;

  private @Valid String custCurrencySymbol = null;

  private @Valid BackupServiceMaster serviceMaster = null;

  private @Valid String _package = null;

  private @Valid String serviceExtra = null;

  private @Valid BackupExtraInfoTables extraInfoTables = null;

  /**
   **/
  public Backup serviceInfo(BackupServiceInfo serviceInfo) {
    this.serviceInfo = serviceInfo;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("serviceInfo")
  @NotNull

  public BackupServiceInfo getServiceInfo() {
    return serviceInfo;
  }
  public void setServiceInfo(BackupServiceInfo serviceInfo) {
    this.serviceInfo = serviceInfo;
  }

  /**
   **/
  public Backup clientLinks(List<BackupClientLink> clientLinks) {
    this.clientLinks = clientLinks;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("client_links")
  @NotNull

  public List<BackupClientLink> getClientLinks() {
    return clientLinks;
  }
  public void setClientLinks(List<BackupClientLink> clientLinks) {
    this.clientLinks = clientLinks;
  }

  /**
   **/
  public Backup billingDetails(BackupBillingDetails billingDetails) {
    this.billingDetails = billingDetails;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("billingDetails")
  @NotNull

  public BackupBillingDetails getBillingDetails() {
    return billingDetails;
  }
  public void setBillingDetails(BackupBillingDetails billingDetails) {
    this.billingDetails = billingDetails;
  }

  /**
   * Customer&#x27;s currency.
   **/
  public Backup custCurrency(String custCurrency) {
    this.custCurrency = custCurrency;
    return this;
  }

  
  @ApiModelProperty(example = "USD", value = "Customer's currency.")
  @JsonProperty("custCurrency")
  @NotNull

  public String getCustCurrency() {
    return custCurrency;
  }
  public void setCustCurrency(String custCurrency) {
    this.custCurrency = custCurrency;
  }

  /**
   * Customer&#x27;s currency symbol.
   **/
  public Backup custCurrencySymbol(String custCurrencySymbol) {
    this.custCurrencySymbol = custCurrencySymbol;
    return this;
  }

  
  @ApiModelProperty(example = "$", value = "Customer's currency symbol.")
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
  public Backup serviceMaster(BackupServiceMaster serviceMaster) {
    this.serviceMaster = serviceMaster;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("serviceMaster")
  @NotNull

  public BackupServiceMaster getServiceMaster() {
    return serviceMaster;
  }
  public void setServiceMaster(BackupServiceMaster serviceMaster) {
    this.serviceMaster = serviceMaster;
  }

  /**
   * Package information.
   **/
  public Backup _package(String _package) {
    this._package = _package;
    return this;
  }

  
  @ApiModelProperty(value = "Package information.")
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
  public Backup serviceExtra(String serviceExtra) {
    this.serviceExtra = serviceExtra;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("serviceExtra")
  @NotNull

  public String getServiceExtra() {
    return serviceExtra;
  }
  public void setServiceExtra(String serviceExtra) {
    this.serviceExtra = serviceExtra;
  }

  /**
   **/
  public Backup extraInfoTables(BackupExtraInfoTables extraInfoTables) {
    this.extraInfoTables = extraInfoTables;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("extraInfoTables")
  @NotNull

  public BackupExtraInfoTables getExtraInfoTables() {
    return extraInfoTables;
  }
  public void setExtraInfoTables(BackupExtraInfoTables extraInfoTables) {
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
    Backup backup = (Backup) o;
    return Objects.equals(serviceInfo, backup.serviceInfo) &&
        Objects.equals(clientLinks, backup.clientLinks) &&
        Objects.equals(billingDetails, backup.billingDetails) &&
        Objects.equals(custCurrency, backup.custCurrency) &&
        Objects.equals(custCurrencySymbol, backup.custCurrencySymbol) &&
        Objects.equals(serviceMaster, backup.serviceMaster) &&
        Objects.equals(_package, backup._package) &&
        Objects.equals(serviceExtra, backup.serviceExtra) &&
        Objects.equals(extraInfoTables, backup.extraInfoTables);
  }

  @Override
  public int hashCode() {
    return Objects.hash(serviceInfo, clientLinks, billingDetails, custCurrency, custCurrencySymbol, serviceMaster, _package, serviceExtra, extraInfoTables);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
