package io.swagger.server.api.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.server.api.model.LicenseBillingDetails;
import io.swagger.server.api.model.LicenseClientLink;
import io.swagger.server.api.model.LicenseExtraInfoTables;
import io.swagger.server.api.model.LicenseServiceInfo;
import io.swagger.server.api.model.LicenseServiceType;
import java.util.ArrayList;
import java.util.List;
import io.vertx.core.json.JsonObject;
import io.vertx.codegen.annotations.DataObject;
/**
 * License
 */




public class License   {
  private LicenseServiceInfo serviceInfo = null;

  
  private List<LicenseClientLink> clientLinks = new ArrayList<LicenseClientLink>();

  private LicenseBillingDetails billingDetails = null;

  private String custCurrency = null;

  private String custCurrencySymbol = null;

  private String _package = null;

  
  private List<String> serviceExtra = new ArrayList<String>();

  private LicenseExtraInfoTables extraInfoTables = null;

  private String serviceOverviewExtra = null;

  private LicenseServiceType serviceType = null;

  private String licenseKey = null;

  public License serviceInfo(LicenseServiceInfo serviceInfo) {
    this.serviceInfo = serviceInfo;
    return this;
  }

  /**
   * Get serviceInfo
   * @return serviceInfo
   **/
    public LicenseServiceInfo getServiceInfo() {
    return serviceInfo;
  }

  public void setServiceInfo(LicenseServiceInfo serviceInfo) {
    this.serviceInfo = serviceInfo;
  }

  public License clientLinks(List<LicenseClientLink> clientLinks) {
    this.clientLinks = clientLinks;
    return this;
  }

  public License addClientLinksItem(LicenseClientLink clientLinksItem) {
    this.clientLinks.add(clientLinksItem);
    return this;
  }

  /**
   * Get clientLinks
   * @return clientLinks
   **/
    public List<LicenseClientLink> getClientLinks() {
    return clientLinks;
  }

  public void setClientLinks(List<LicenseClientLink> clientLinks) {
    this.clientLinks = clientLinks;
  }

  public License billingDetails(LicenseBillingDetails billingDetails) {
    this.billingDetails = billingDetails;
    return this;
  }

  /**
   * Get billingDetails
   * @return billingDetails
   **/
    public LicenseBillingDetails getBillingDetails() {
    return billingDetails;
  }

  public void setBillingDetails(LicenseBillingDetails billingDetails) {
    this.billingDetails = billingDetails;
  }

  public License custCurrency(String custCurrency) {
    this.custCurrency = custCurrency;
    return this;
  }

  /**
   * Customer's currency
   * @return custCurrency
   **/
    public String getCustCurrency() {
    return custCurrency;
  }

  public void setCustCurrency(String custCurrency) {
    this.custCurrency = custCurrency;
  }

  public License custCurrencySymbol(String custCurrencySymbol) {
    this.custCurrencySymbol = custCurrencySymbol;
    return this;
  }

  /**
   * Currency symbol for customer
   * @return custCurrencySymbol
   **/
    public String getCustCurrencySymbol() {
    return custCurrencySymbol;
  }

  public void setCustCurrencySymbol(String custCurrencySymbol) {
    this.custCurrencySymbol = custCurrencySymbol;
  }

  public License _package(String _package) {
    this._package = _package;
    return this;
  }

  /**
   * Package name
   * @return _package
   **/
    public String getPackage() {
    return _package;
  }

  public void setPackage(String _package) {
    this._package = _package;
  }

  public License serviceExtra(List<String> serviceExtra) {
    this.serviceExtra = serviceExtra;
    return this;
  }

  public License addServiceExtraItem(String serviceExtraItem) {
    this.serviceExtra.add(serviceExtraItem);
    return this;
  }

  /**
   * Extra service information
   * @return serviceExtra
   **/
    public List<String> getServiceExtra() {
    return serviceExtra;
  }

  public void setServiceExtra(List<String> serviceExtra) {
    this.serviceExtra = serviceExtra;
  }

  public License extraInfoTables(LicenseExtraInfoTables extraInfoTables) {
    this.extraInfoTables = extraInfoTables;
    return this;
  }

  /**
   * Get extraInfoTables
   * @return extraInfoTables
   **/
    public LicenseExtraInfoTables getExtraInfoTables() {
    return extraInfoTables;
  }

  public void setExtraInfoTables(LicenseExtraInfoTables extraInfoTables) {
    this.extraInfoTables = extraInfoTables;
  }

  public License serviceOverviewExtra(String serviceOverviewExtra) {
    this.serviceOverviewExtra = serviceOverviewExtra;
    return this;
  }

  /**
   * Extra service overview information
   * @return serviceOverviewExtra
   **/
    public String getServiceOverviewExtra() {
    return serviceOverviewExtra;
  }

  public void setServiceOverviewExtra(String serviceOverviewExtra) {
    this.serviceOverviewExtra = serviceOverviewExtra;
  }

  public License serviceType(LicenseServiceType serviceType) {
    this.serviceType = serviceType;
    return this;
  }

  /**
   * Get serviceType
   * @return serviceType
   **/
    public LicenseServiceType getServiceType() {
    return serviceType;
  }

  public void setServiceType(LicenseServiceType serviceType) {
    this.serviceType = serviceType;
  }

  public License licenseKey(String licenseKey) {
    this.licenseKey = licenseKey;
    return this;
  }

  /**
   * License key
   * @return licenseKey
   **/
    public String getLicenseKey() {
    return licenseKey;
  }

  public void setLicenseKey(String licenseKey) {
    this.licenseKey = licenseKey;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    License license = (License) o;
    return Objects.equals(this.serviceInfo, license.serviceInfo) &&
        Objects.equals(this.clientLinks, license.clientLinks) &&
        Objects.equals(this.billingDetails, license.billingDetails) &&
        Objects.equals(this.custCurrency, license.custCurrency) &&
        Objects.equals(this.custCurrencySymbol, license.custCurrencySymbol) &&
        Objects.equals(this._package, license._package) &&
        Objects.equals(this.serviceExtra, license.serviceExtra) &&
        Objects.equals(this.extraInfoTables, license.extraInfoTables) &&
        Objects.equals(this.serviceOverviewExtra, license.serviceOverviewExtra) &&
        Objects.equals(this.serviceType, license.serviceType) &&
        Objects.equals(this.licenseKey, license.licenseKey);
  }

  @Override
  public int hashCode() {
    return Objects.hash(serviceInfo, clientLinks, billingDetails, custCurrency, custCurrencySymbol, _package, serviceExtra, extraInfoTables, serviceOverviewExtra, serviceType, licenseKey);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class License {\n");
    
    sb.append("    serviceInfo: ").append(toIndentedString(serviceInfo)).append("\n");
    sb.append("    clientLinks: ").append(toIndentedString(clientLinks)).append("\n");
    sb.append("    billingDetails: ").append(toIndentedString(billingDetails)).append("\n");
    sb.append("    custCurrency: ").append(toIndentedString(custCurrency)).append("\n");
    sb.append("    custCurrencySymbol: ").append(toIndentedString(custCurrencySymbol)).append("\n");
    sb.append("    _package: ").append(toIndentedString(_package)).append("\n");
    sb.append("    serviceExtra: ").append(toIndentedString(serviceExtra)).append("\n");
    sb.append("    extraInfoTables: ").append(toIndentedString(extraInfoTables)).append("\n");
    sb.append("    serviceOverviewExtra: ").append(toIndentedString(serviceOverviewExtra)).append("\n");
    sb.append("    serviceType: ").append(toIndentedString(serviceType)).append("\n");
    sb.append("    licenseKey: ").append(toIndentedString(licenseKey)).append("\n");
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
