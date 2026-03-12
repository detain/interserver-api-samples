package org.openapitools.model;

import java.util.Date;

import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class LicenseServiceInfo  {
  
 /**
  * License ID
  */
  @ApiModelProperty(example = "386522", required = true, value = "License ID")

  private String licenseId;

 /**
  * License type
  */
  @ApiModelProperty(example = "5034", required = true, value = "License type")

  private String licenseType;

 /**
  * License currency
  */
  @ApiModelProperty(example = "USD", required = true, value = "License currency")

  private String licenseCurrency;

 /**
  * License order date
  */
  @ApiModelProperty(example = "2020-01-14T10:48:14Z", required = true, value = "License order date")

  private Date licenseOrderDate;

 /**
  * Customer ID
  */
  @ApiModelProperty(example = "771282", required = true, value = "Customer ID")

  private String licenseCustid;

 /**
  * License IP
  */
  @ApiModelProperty(example = "1.2.3.4", required = true, value = "License IP")

  private String licenseIp;

 /**
  * License status
  */
  @ApiModelProperty(example = "active", required = true, value = "License status")

  private String licenseStatus;

 /**
  * License invoice
  */
  @ApiModelProperty(example = "18704419", required = true, value = "License invoice")

  private String licenseInvoice;

 /**
  * License coupon
  */
  @ApiModelProperty(example = "1836", required = true, value = "License coupon")

  private String licenseCoupon;

 /**
  * License hostname
  */
  @ApiModelProperty(example = "", value = "License hostname")

  private String licenseHostname;

 /**
  * License key
  */
  @ApiModelProperty(example = "", value = "License key")

  private String licenseKey;

 /**
  * Additional license information
  */
  @ApiModelProperty(example = "", value = "Additional license information")

  private String licenseExtra;
 /**
   * License ID
   * @return licenseId
  **/
  @JsonProperty("license_id")
  public String getLicenseId() {
    return licenseId;
  }

  public void setLicenseId(String licenseId) {
    this.licenseId = licenseId;
  }

  public LicenseServiceInfo licenseId(String licenseId) {
    this.licenseId = licenseId;
    return this;
  }

 /**
   * License type
   * @return licenseType
  **/
  @JsonProperty("license_type")
  public String getLicenseType() {
    return licenseType;
  }

  public void setLicenseType(String licenseType) {
    this.licenseType = licenseType;
  }

  public LicenseServiceInfo licenseType(String licenseType) {
    this.licenseType = licenseType;
    return this;
  }

 /**
   * License currency
   * @return licenseCurrency
  **/
  @JsonProperty("license_currency")
  public String getLicenseCurrency() {
    return licenseCurrency;
  }

  public void setLicenseCurrency(String licenseCurrency) {
    this.licenseCurrency = licenseCurrency;
  }

  public LicenseServiceInfo licenseCurrency(String licenseCurrency) {
    this.licenseCurrency = licenseCurrency;
    return this;
  }

 /**
   * License order date
   * @return licenseOrderDate
  **/
  @JsonProperty("license_order_date")
  public Date getLicenseOrderDate() {
    return licenseOrderDate;
  }

  public void setLicenseOrderDate(Date licenseOrderDate) {
    this.licenseOrderDate = licenseOrderDate;
  }

  public LicenseServiceInfo licenseOrderDate(Date licenseOrderDate) {
    this.licenseOrderDate = licenseOrderDate;
    return this;
  }

 /**
   * Customer ID
   * @return licenseCustid
  **/
  @JsonProperty("license_custid")
  public String getLicenseCustid() {
    return licenseCustid;
  }

  public void setLicenseCustid(String licenseCustid) {
    this.licenseCustid = licenseCustid;
  }

  public LicenseServiceInfo licenseCustid(String licenseCustid) {
    this.licenseCustid = licenseCustid;
    return this;
  }

 /**
   * License IP
   * @return licenseIp
  **/
  @JsonProperty("license_ip")
  public String getLicenseIp() {
    return licenseIp;
  }

  public void setLicenseIp(String licenseIp) {
    this.licenseIp = licenseIp;
  }

  public LicenseServiceInfo licenseIp(String licenseIp) {
    this.licenseIp = licenseIp;
    return this;
  }

 /**
   * License status
   * @return licenseStatus
  **/
  @JsonProperty("license_status")
  public String getLicenseStatus() {
    return licenseStatus;
  }

  public void setLicenseStatus(String licenseStatus) {
    this.licenseStatus = licenseStatus;
  }

  public LicenseServiceInfo licenseStatus(String licenseStatus) {
    this.licenseStatus = licenseStatus;
    return this;
  }

 /**
   * License invoice
   * @return licenseInvoice
  **/
  @JsonProperty("license_invoice")
  public String getLicenseInvoice() {
    return licenseInvoice;
  }

  public void setLicenseInvoice(String licenseInvoice) {
    this.licenseInvoice = licenseInvoice;
  }

  public LicenseServiceInfo licenseInvoice(String licenseInvoice) {
    this.licenseInvoice = licenseInvoice;
    return this;
  }

 /**
   * License coupon
   * @return licenseCoupon
  **/
  @JsonProperty("license_coupon")
  public String getLicenseCoupon() {
    return licenseCoupon;
  }

  public void setLicenseCoupon(String licenseCoupon) {
    this.licenseCoupon = licenseCoupon;
  }

  public LicenseServiceInfo licenseCoupon(String licenseCoupon) {
    this.licenseCoupon = licenseCoupon;
    return this;
  }

 /**
   * License hostname
   * @return licenseHostname
  **/
  @JsonProperty("license_hostname")
  public String getLicenseHostname() {
    return licenseHostname;
  }

  public void setLicenseHostname(String licenseHostname) {
    this.licenseHostname = licenseHostname;
  }

  public LicenseServiceInfo licenseHostname(String licenseHostname) {
    this.licenseHostname = licenseHostname;
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

  public LicenseServiceInfo licenseKey(String licenseKey) {
    this.licenseKey = licenseKey;
    return this;
  }

 /**
   * Additional license information
   * @return licenseExtra
  **/
  @JsonProperty("license_extra")
  public String getLicenseExtra() {
    return licenseExtra;
  }

  public void setLicenseExtra(String licenseExtra) {
    this.licenseExtra = licenseExtra;
  }

  public LicenseServiceInfo licenseExtra(String licenseExtra) {
    this.licenseExtra = licenseExtra;
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
    LicenseServiceInfo licenseServiceInfo = (LicenseServiceInfo) o;
    return Objects.equals(this.licenseId, licenseServiceInfo.licenseId) &&
        Objects.equals(this.licenseType, licenseServiceInfo.licenseType) &&
        Objects.equals(this.licenseCurrency, licenseServiceInfo.licenseCurrency) &&
        Objects.equals(this.licenseOrderDate, licenseServiceInfo.licenseOrderDate) &&
        Objects.equals(this.licenseCustid, licenseServiceInfo.licenseCustid) &&
        Objects.equals(this.licenseIp, licenseServiceInfo.licenseIp) &&
        Objects.equals(this.licenseStatus, licenseServiceInfo.licenseStatus) &&
        Objects.equals(this.licenseInvoice, licenseServiceInfo.licenseInvoice) &&
        Objects.equals(this.licenseCoupon, licenseServiceInfo.licenseCoupon) &&
        Objects.equals(this.licenseHostname, licenseServiceInfo.licenseHostname) &&
        Objects.equals(this.licenseKey, licenseServiceInfo.licenseKey) &&
        Objects.equals(this.licenseExtra, licenseServiceInfo.licenseExtra);
  }

  @Override
  public int hashCode() {
    return Objects.hash(licenseId, licenseType, licenseCurrency, licenseOrderDate, licenseCustid, licenseIp, licenseStatus, licenseInvoice, licenseCoupon, licenseHostname, licenseKey, licenseExtra);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class LicenseServiceInfo {\n");
    
    sb.append("    licenseId: ").append(toIndentedString(licenseId)).append("\n");
    sb.append("    licenseType: ").append(toIndentedString(licenseType)).append("\n");
    sb.append("    licenseCurrency: ").append(toIndentedString(licenseCurrency)).append("\n");
    sb.append("    licenseOrderDate: ").append(toIndentedString(licenseOrderDate)).append("\n");
    sb.append("    licenseCustid: ").append(toIndentedString(licenseCustid)).append("\n");
    sb.append("    licenseIp: ").append(toIndentedString(licenseIp)).append("\n");
    sb.append("    licenseStatus: ").append(toIndentedString(licenseStatus)).append("\n");
    sb.append("    licenseInvoice: ").append(toIndentedString(licenseInvoice)).append("\n");
    sb.append("    licenseCoupon: ").append(toIndentedString(licenseCoupon)).append("\n");
    sb.append("    licenseHostname: ").append(toIndentedString(licenseHostname)).append("\n");
    sb.append("    licenseKey: ").append(toIndentedString(licenseKey)).append("\n");
    sb.append("    licenseExtra: ").append(toIndentedString(licenseExtra)).append("\n");
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

