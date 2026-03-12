package org.openapitools.model;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import org.openapitools.model.LicenseBillingDetails;
import org.openapitools.model.LicenseClientLink;
import org.openapitools.model.LicenseExtraInfoTables;
import org.openapitools.model.LicenseServiceInfo;
import org.openapitools.model.LicenseServiceType;

import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class License  {
  
  @ApiModelProperty(required = true, value = "")

  private LicenseServiceInfo serviceInfo;

  @ApiModelProperty(required = true, value = "")

  private List<LicenseClientLink> clientLinks = new ArrayList<>();

  @ApiModelProperty(required = true, value = "")

  private LicenseBillingDetails billingDetails;

 /**
  * Customer's currency
  */
  @ApiModelProperty(example = "USD", required = true, value = "Customer's currency")

  private String custCurrency;

 /**
  * Currency symbol for customer
  */
  @ApiModelProperty(example = "$", required = true, value = "Currency symbol for customer")

  private String custCurrencySymbol;

 /**
  * Package name
  */
  @ApiModelProperty(example = "KernelCare License", required = true, value = "Package name")

  private String _package;

 /**
  * Extra service information
  */
  @ApiModelProperty(required = true, value = "Extra service information")

  private List<String> serviceExtra = new ArrayList<>();

  @ApiModelProperty(required = true, value = "")

  private LicenseExtraInfoTables extraInfoTables;

 /**
  * Extra service overview information
  */
  @ApiModelProperty(required = true, value = "Extra service overview information")

  private String serviceOverviewExtra;

  @ApiModelProperty(required = true, value = "")

  private LicenseServiceType serviceType;

 /**
  * License key
  */
  @ApiModelProperty(example = "", required = true, value = "License key")

  private String licenseKey;
 /**
   * Get serviceInfo
   * @return serviceInfo
  **/
  @JsonProperty("serviceInfo")
  public LicenseServiceInfo getServiceInfo() {
    return serviceInfo;
  }

  public void setServiceInfo(LicenseServiceInfo serviceInfo) {
    this.serviceInfo = serviceInfo;
  }

  public License serviceInfo(LicenseServiceInfo serviceInfo) {
    this.serviceInfo = serviceInfo;
    return this;
  }

 /**
   * Get clientLinks
   * @return clientLinks
  **/
  @JsonProperty("client_links")
  public List<LicenseClientLink> getClientLinks() {
    return clientLinks;
  }

  public void setClientLinks(List<LicenseClientLink> clientLinks) {
    this.clientLinks = clientLinks;
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
   * Get billingDetails
   * @return billingDetails
  **/
  @JsonProperty("billingDetails")
  public LicenseBillingDetails getBillingDetails() {
    return billingDetails;
  }

  public void setBillingDetails(LicenseBillingDetails billingDetails) {
    this.billingDetails = billingDetails;
  }

  public License billingDetails(LicenseBillingDetails billingDetails) {
    this.billingDetails = billingDetails;
    return this;
  }

 /**
   * Customer&#39;s currency
   * @return custCurrency
  **/
  @JsonProperty("custCurrency")
  public String getCustCurrency() {
    return custCurrency;
  }

  public void setCustCurrency(String custCurrency) {
    this.custCurrency = custCurrency;
  }

  public License custCurrency(String custCurrency) {
    this.custCurrency = custCurrency;
    return this;
  }

 /**
   * Currency symbol for customer
   * @return custCurrencySymbol
  **/
  @JsonProperty("custCurrencySymbol")
  public String getCustCurrencySymbol() {
    return custCurrencySymbol;
  }

  public void setCustCurrencySymbol(String custCurrencySymbol) {
    this.custCurrencySymbol = custCurrencySymbol;
  }

  public License custCurrencySymbol(String custCurrencySymbol) {
    this.custCurrencySymbol = custCurrencySymbol;
    return this;
  }

 /**
   * Package name
   * @return _package
  **/
  @JsonProperty("package")
  public String getPackage() {
    return _package;
  }

  public void setPackage(String _package) {
    this._package = _package;
  }

  public License _package(String _package) {
    this._package = _package;
    return this;
  }

 /**
   * Extra service information
   * @return serviceExtra
  **/
  @JsonProperty("serviceExtra")
  public List<String> getServiceExtra() {
    return serviceExtra;
  }

  public void setServiceExtra(List<String> serviceExtra) {
    this.serviceExtra = serviceExtra;
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
   * Get extraInfoTables
   * @return extraInfoTables
  **/
  @JsonProperty("extraInfoTables")
  public LicenseExtraInfoTables getExtraInfoTables() {
    return extraInfoTables;
  }

  public void setExtraInfoTables(LicenseExtraInfoTables extraInfoTables) {
    this.extraInfoTables = extraInfoTables;
  }

  public License extraInfoTables(LicenseExtraInfoTables extraInfoTables) {
    this.extraInfoTables = extraInfoTables;
    return this;
  }

 /**
   * Extra service overview information
   * @return serviceOverviewExtra
  **/
  @JsonProperty("service_overview_extra")
  public String getServiceOverviewExtra() {
    return serviceOverviewExtra;
  }

  public void setServiceOverviewExtra(String serviceOverviewExtra) {
    this.serviceOverviewExtra = serviceOverviewExtra;
  }

  public License serviceOverviewExtra(String serviceOverviewExtra) {
    this.serviceOverviewExtra = serviceOverviewExtra;
    return this;
  }

 /**
   * Get serviceType
   * @return serviceType
  **/
  @JsonProperty("serviceType")
  public LicenseServiceType getServiceType() {
    return serviceType;
  }

  public void setServiceType(LicenseServiceType serviceType) {
    this.serviceType = serviceType;
  }

  public License serviceType(LicenseServiceType serviceType) {
    this.serviceType = serviceType;
    return this;
  }

 /**
   * License key
   * @return licenseKey
  **/
  @JsonProperty("license_key")
  public String getLicenseKey() {
    return licenseKey;
  }

  public void setLicenseKey(String licenseKey) {
    this.licenseKey = licenseKey;
  }

  public License licenseKey(String licenseKey) {
    this.licenseKey = licenseKey;
    return this;
  }

  @Override
  public boolean equals(Object o) {
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
  private static String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

