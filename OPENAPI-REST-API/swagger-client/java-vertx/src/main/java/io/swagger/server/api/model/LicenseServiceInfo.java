package io.swagger.server.api.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import org.threeten.bp.OffsetDateTime;
import io.vertx.core.json.JsonObject;
import io.vertx.codegen.annotations.DataObject;
/**
 * LicenseServiceInfo
 */




public class LicenseServiceInfo   {
  private String licenseId = null;

  private String licenseType = null;

  private String licenseCurrency = null;

  private OffsetDateTime licenseOrderDate = null;

  private String licenseCustid = null;

  private String licenseIp = null;

  private String licenseStatus = null;

  private String licenseHostname = null;

  private String licenseKey = null;

  private String licenseInvoice = null;

  private String licenseCoupon = null;

  private String licenseExtra = null;

  public LicenseServiceInfo licenseId(String licenseId) {
    this.licenseId = licenseId;
    return this;
  }

  /**
   * License ID
   * @return licenseId
   **/
    public String getLicenseId() {
    return licenseId;
  }

  public void setLicenseId(String licenseId) {
    this.licenseId = licenseId;
  }

  public LicenseServiceInfo licenseType(String licenseType) {
    this.licenseType = licenseType;
    return this;
  }

  /**
   * License type
   * @return licenseType
   **/
    public String getLicenseType() {
    return licenseType;
  }

  public void setLicenseType(String licenseType) {
    this.licenseType = licenseType;
  }

  public LicenseServiceInfo licenseCurrency(String licenseCurrency) {
    this.licenseCurrency = licenseCurrency;
    return this;
  }

  /**
   * License currency
   * @return licenseCurrency
   **/
    public String getLicenseCurrency() {
    return licenseCurrency;
  }

  public void setLicenseCurrency(String licenseCurrency) {
    this.licenseCurrency = licenseCurrency;
  }

  public LicenseServiceInfo licenseOrderDate(OffsetDateTime licenseOrderDate) {
    this.licenseOrderDate = licenseOrderDate;
    return this;
  }

  /**
   * License order date
   * @return licenseOrderDate
   **/
    public OffsetDateTime getLicenseOrderDate() {
    return licenseOrderDate;
  }

  public void setLicenseOrderDate(OffsetDateTime licenseOrderDate) {
    this.licenseOrderDate = licenseOrderDate;
  }

  public LicenseServiceInfo licenseCustid(String licenseCustid) {
    this.licenseCustid = licenseCustid;
    return this;
  }

  /**
   * Customer ID
   * @return licenseCustid
   **/
    public String getLicenseCustid() {
    return licenseCustid;
  }

  public void setLicenseCustid(String licenseCustid) {
    this.licenseCustid = licenseCustid;
  }

  public LicenseServiceInfo licenseIp(String licenseIp) {
    this.licenseIp = licenseIp;
    return this;
  }

  /**
   * License IP
   * @return licenseIp
   **/
    public String getLicenseIp() {
    return licenseIp;
  }

  public void setLicenseIp(String licenseIp) {
    this.licenseIp = licenseIp;
  }

  public LicenseServiceInfo licenseStatus(String licenseStatus) {
    this.licenseStatus = licenseStatus;
    return this;
  }

  /**
   * License status
   * @return licenseStatus
   **/
    public String getLicenseStatus() {
    return licenseStatus;
  }

  public void setLicenseStatus(String licenseStatus) {
    this.licenseStatus = licenseStatus;
  }

  public LicenseServiceInfo licenseHostname(String licenseHostname) {
    this.licenseHostname = licenseHostname;
    return this;
  }

  /**
   * License hostname
   * @return licenseHostname
   **/
    public String getLicenseHostname() {
    return licenseHostname;
  }

  public void setLicenseHostname(String licenseHostname) {
    this.licenseHostname = licenseHostname;
  }

  public LicenseServiceInfo licenseKey(String licenseKey) {
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

  public LicenseServiceInfo licenseInvoice(String licenseInvoice) {
    this.licenseInvoice = licenseInvoice;
    return this;
  }

  /**
   * License invoice
   * @return licenseInvoice
   **/
    public String getLicenseInvoice() {
    return licenseInvoice;
  }

  public void setLicenseInvoice(String licenseInvoice) {
    this.licenseInvoice = licenseInvoice;
  }

  public LicenseServiceInfo licenseCoupon(String licenseCoupon) {
    this.licenseCoupon = licenseCoupon;
    return this;
  }

  /**
   * License coupon
   * @return licenseCoupon
   **/
    public String getLicenseCoupon() {
    return licenseCoupon;
  }

  public void setLicenseCoupon(String licenseCoupon) {
    this.licenseCoupon = licenseCoupon;
  }

  public LicenseServiceInfo licenseExtra(String licenseExtra) {
    this.licenseExtra = licenseExtra;
    return this;
  }

  /**
   * Additional license information
   * @return licenseExtra
   **/
    public String getLicenseExtra() {
    return licenseExtra;
  }

  public void setLicenseExtra(String licenseExtra) {
    this.licenseExtra = licenseExtra;
  }


  @Override
  public boolean equals(java.lang.Object o) {
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
        Objects.equals(this.licenseHostname, licenseServiceInfo.licenseHostname) &&
        Objects.equals(this.licenseKey, licenseServiceInfo.licenseKey) &&
        Objects.equals(this.licenseInvoice, licenseServiceInfo.licenseInvoice) &&
        Objects.equals(this.licenseCoupon, licenseServiceInfo.licenseCoupon) &&
        Objects.equals(this.licenseExtra, licenseServiceInfo.licenseExtra);
  }

  @Override
  public int hashCode() {
    return Objects.hash(licenseId, licenseType, licenseCurrency, licenseOrderDate, licenseCustid, licenseIp, licenseStatus, licenseHostname, licenseKey, licenseInvoice, licenseCoupon, licenseExtra);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
