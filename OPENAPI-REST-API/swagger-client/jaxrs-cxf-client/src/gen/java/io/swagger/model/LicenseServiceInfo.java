package io.swagger.model;

import java.util.Date;

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

public class LicenseServiceInfo   {
  
  @Schema(example = "386522", required = true, description = "License ID")
 /**
   * License ID  
  **/
  private String licenseId = null;
  
  @Schema(example = "5034", required = true, description = "License type")
 /**
   * License type  
  **/
  private String licenseType = null;
  
  @Schema(example = "USD", required = true, description = "License currency")
 /**
   * License currency  
  **/
  private String licenseCurrency = null;
  
  @Schema(example = "2020-01-14T10:48:14Z", required = true, description = "License order date")
 /**
   * License order date  
  **/
  private Date licenseOrderDate = null;
  
  @Schema(example = "771282", required = true, description = "Customer ID")
 /**
   * Customer ID  
  **/
  private String licenseCustid = null;
  
  @Schema(example = "1.2.3.4", required = true, description = "License IP")
 /**
   * License IP  
  **/
  private String licenseIp = null;
  
  @Schema(example = "active", required = true, description = "License status")
 /**
   * License status  
  **/
  private String licenseStatus = null;
  
  @Schema(description = "License hostname")
 /**
   * License hostname  
  **/
  private String licenseHostname = null;
  
  @Schema(description = "License key")
 /**
   * License key  
  **/
  private String licenseKey = null;
  
  @Schema(example = "18704419", required = true, description = "License invoice")
 /**
   * License invoice  
  **/
  private String licenseInvoice = null;
  
  @Schema(example = "1836", required = true, description = "License coupon")
 /**
   * License coupon  
  **/
  private String licenseCoupon = null;
  
  @Schema(description = "Additional license information")
 /**
   * Additional license information  
  **/
  private String licenseExtra = null;
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
    sb.append("    licenseHostname: ").append(toIndentedString(licenseHostname)).append("\n");
    sb.append("    licenseKey: ").append(toIndentedString(licenseKey)).append("\n");
    sb.append("    licenseInvoice: ").append(toIndentedString(licenseInvoice)).append("\n");
    sb.append("    licenseCoupon: ").append(toIndentedString(licenseCoupon)).append("\n");
    sb.append("    licenseExtra: ").append(toIndentedString(licenseExtra)).append("\n");
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
