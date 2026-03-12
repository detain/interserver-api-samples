package io.swagger.server.api.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.server.api.model.BackupBillingDetails;
import io.swagger.server.api.model.BackupClientLink;
import io.swagger.server.api.model.BackupExtraInfoTables;
import io.swagger.server.api.model.BackupServiceInfo;
import io.swagger.server.api.model.BackupServiceMaster;
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.ArrayList;
import java.util.List;
import io.vertx.core.json.JsonObject;
import io.vertx.codegen.annotations.DataObject;
/**
 * Full detail view of a backup service including billing, service info, and configuration.
 */




public class Backup   {
  private BackupServiceInfo serviceInfo = null;

  
  private List<BackupClientLink> clientLinks = null;

  private BackupBillingDetails billingDetails = null;

  private String custCurrency = null;

  private String custCurrencySymbol = null;

  private BackupServiceMaster serviceMaster = null;

  private String _package = null;

  private String serviceExtra = null;

  private BackupExtraInfoTables extraInfoTables = null;

  public Backup serviceInfo(BackupServiceInfo serviceInfo) {
    this.serviceInfo = serviceInfo;
    return this;
  }

  /**
   * Get serviceInfo
   * @return serviceInfo
   **/
    public BackupServiceInfo getServiceInfo() {
    return serviceInfo;
  }

  public void setServiceInfo(BackupServiceInfo serviceInfo) {
    this.serviceInfo = serviceInfo;
  }

  public Backup clientLinks(List<BackupClientLink> clientLinks) {
    this.clientLinks = clientLinks;
    return this;
  }

  public Backup addClientLinksItem(BackupClientLink clientLinksItem) {
    if (this.clientLinks == null) {
      this.clientLinks = new ArrayList<BackupClientLink>();
    }
    this.clientLinks.add(clientLinksItem);
    return this;
  }

  /**
   * Get clientLinks
   * @return clientLinks
   **/
    public List<BackupClientLink> getClientLinks() {
    return clientLinks;
  }

  public void setClientLinks(List<BackupClientLink> clientLinks) {
    this.clientLinks = clientLinks;
  }

  public Backup billingDetails(BackupBillingDetails billingDetails) {
    this.billingDetails = billingDetails;
    return this;
  }

  /**
   * Get billingDetails
   * @return billingDetails
   **/
    public BackupBillingDetails getBillingDetails() {
    return billingDetails;
  }

  public void setBillingDetails(BackupBillingDetails billingDetails) {
    this.billingDetails = billingDetails;
  }

  public Backup custCurrency(String custCurrency) {
    this.custCurrency = custCurrency;
    return this;
  }

  /**
   * Customer's currency.
   * @return custCurrency
   **/
    public String getCustCurrency() {
    return custCurrency;
  }

  public void setCustCurrency(String custCurrency) {
    this.custCurrency = custCurrency;
  }

  public Backup custCurrencySymbol(String custCurrencySymbol) {
    this.custCurrencySymbol = custCurrencySymbol;
    return this;
  }

  /**
   * Customer's currency symbol.
   * @return custCurrencySymbol
   **/
    public String getCustCurrencySymbol() {
    return custCurrencySymbol;
  }

  public void setCustCurrencySymbol(String custCurrencySymbol) {
    this.custCurrencySymbol = custCurrencySymbol;
  }

  public Backup serviceMaster(BackupServiceMaster serviceMaster) {
    this.serviceMaster = serviceMaster;
    return this;
  }

  /**
   * Get serviceMaster
   * @return serviceMaster
   **/
    public BackupServiceMaster getServiceMaster() {
    return serviceMaster;
  }

  public void setServiceMaster(BackupServiceMaster serviceMaster) {
    this.serviceMaster = serviceMaster;
  }

  public Backup _package(String _package) {
    this._package = _package;
    return this;
  }

  /**
   * Package information.
   * @return _package
   **/
    public String getPackage() {
    return _package;
  }

  public void setPackage(String _package) {
    this._package = _package;
  }

  public Backup serviceExtra(String serviceExtra) {
    this.serviceExtra = serviceExtra;
    return this;
  }

  /**
   * Get serviceExtra
   * @return serviceExtra
   **/
    public String getServiceExtra() {
    return serviceExtra;
  }

  public void setServiceExtra(String serviceExtra) {
    this.serviceExtra = serviceExtra;
  }

  public Backup extraInfoTables(BackupExtraInfoTables extraInfoTables) {
    this.extraInfoTables = extraInfoTables;
    return this;
  }

  /**
   * Get extraInfoTables
   * @return extraInfoTables
   **/
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
    return Objects.equals(this.serviceInfo, backup.serviceInfo) &&
        Objects.equals(this.clientLinks, backup.clientLinks) &&
        Objects.equals(this.billingDetails, backup.billingDetails) &&
        Objects.equals(this.custCurrency, backup.custCurrency) &&
        Objects.equals(this.custCurrencySymbol, backup.custCurrencySymbol) &&
        Objects.equals(this.serviceMaster, backup.serviceMaster) &&
        Objects.equals(this._package, backup._package) &&
        Objects.equals(this.serviceExtra, backup.serviceExtra) &&
        Objects.equals(this.extraInfoTables, backup.extraInfoTables);
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
