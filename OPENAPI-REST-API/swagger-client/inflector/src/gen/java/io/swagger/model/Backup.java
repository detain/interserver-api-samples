package io.swagger.model;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.model.BackupBillingDetails;
import io.swagger.model.BackupClientLink;
import io.swagger.model.BackupExtraInfoTables;
import io.swagger.model.BackupServiceInfo;
import io.swagger.model.BackupServiceMaster;
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.ArrayList;
import java.util.List;


/**
 * Full detail view of a backup service including billing, service info, and configuration.
 **/
@Schema(description = "Full detail view of a backup service including billing, service info, and configuration.")


public class Backup   {
  @JsonProperty("serviceInfo")
  private BackupServiceInfo serviceInfo = null;
  @JsonProperty("client_links")
  private List<BackupClientLink> clientLinks = null;
  @JsonProperty("billingDetails")
  private BackupBillingDetails billingDetails = null;
  @JsonProperty("custCurrency")
  private String custCurrency = null;
  @JsonProperty("custCurrencySymbol")
  private String custCurrencySymbol = null;
  @JsonProperty("serviceMaster")
  private BackupServiceMaster serviceMaster = null;
  @JsonProperty("package")
  private String _package = null;
  @JsonProperty("serviceExtra")
  private String serviceExtra = null;
  @JsonProperty("extraInfoTables")
  private BackupExtraInfoTables extraInfoTables = null;
  /**
   **/
  public Backup serviceInfo(BackupServiceInfo serviceInfo) {
    this.serviceInfo = serviceInfo;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("serviceInfo")
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

  
  @Schema(description = "")
  @JsonProperty("client_links")
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

  
  @Schema(description = "")
  @JsonProperty("billingDetails")
  public BackupBillingDetails getBillingDetails() {
    return billingDetails;
  }
  public void setBillingDetails(BackupBillingDetails billingDetails) {
    this.billingDetails = billingDetails;
  }

  /**
   * Customer's currency.
   **/
  public Backup custCurrency(String custCurrency) {
    this.custCurrency = custCurrency;
    return this;
  }

  
  @Schema(example = "USD", description = "Customer's currency.")
  @JsonProperty("custCurrency")
  public String getCustCurrency() {
    return custCurrency;
  }
  public void setCustCurrency(String custCurrency) {
    this.custCurrency = custCurrency;
  }

  /**
   * Customer's currency symbol.
   **/
  public Backup custCurrencySymbol(String custCurrencySymbol) {
    this.custCurrencySymbol = custCurrencySymbol;
    return this;
  }

  
  @Schema(example = "$", description = "Customer's currency symbol.")
  @JsonProperty("custCurrencySymbol")
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

  
  @Schema(description = "")
  @JsonProperty("serviceMaster")
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

  
  @Schema(description = "Package information.")
  @JsonProperty("package")
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

  
  @Schema(description = "")
  @JsonProperty("serviceExtra")
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

  
  @Schema(description = "")
  @JsonProperty("extraInfoTables")
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
