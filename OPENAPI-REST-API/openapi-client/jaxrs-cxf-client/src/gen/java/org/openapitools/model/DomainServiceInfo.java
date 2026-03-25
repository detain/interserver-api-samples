package org.openapitools.model;


import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * Detailed domain service record for a domain order.
 */
@ApiModel(description="Detailed domain service record for a domain order.")

public class DomainServiceInfo  {
  
  @ApiModelProperty(value = "")

  private String domainId;

  @ApiModelProperty(value = "")

  private String domainHostname;

  @ApiModelProperty(value = "")

  private String domainUsername;

  @ApiModelProperty(value = "")

  private String domainPassword;

  @ApiModelProperty(value = "")

  private String domainType;

  @ApiModelProperty(value = "")

  private String domainCurrency;

  @ApiModelProperty(value = "")

  private String domainExpireDate;

  @ApiModelProperty(value = "")

  private String domainOrderDate;

  @ApiModelProperty(value = "")

  private String domainCustid;

  @ApiModelProperty(value = "")

  private String domainStatus;

  @ApiModelProperty(value = "")

  private String domainInvoice;

  @ApiModelProperty(value = "")

  private String domainCoupon;
 /**
   * Get domainId
   * @return domainId
  **/
  @JsonProperty("domain_id")
  public String getDomainId() {
    return domainId;
  }

  public void setDomainId(String domainId) {
    this.domainId = domainId;
  }

  public DomainServiceInfo domainId(String domainId) {
    this.domainId = domainId;
    return this;
  }

 /**
   * Get domainHostname
   * @return domainHostname
  **/
  @JsonProperty("domain_hostname")
  public String getDomainHostname() {
    return domainHostname;
  }

  public void setDomainHostname(String domainHostname) {
    this.domainHostname = domainHostname;
  }

  public DomainServiceInfo domainHostname(String domainHostname) {
    this.domainHostname = domainHostname;
    return this;
  }

 /**
   * Get domainUsername
   * @return domainUsername
  **/
  @JsonProperty("domain_username")
  public String getDomainUsername() {
    return domainUsername;
  }

  public void setDomainUsername(String domainUsername) {
    this.domainUsername = domainUsername;
  }

  public DomainServiceInfo domainUsername(String domainUsername) {
    this.domainUsername = domainUsername;
    return this;
  }

 /**
   * Get domainPassword
   * @return domainPassword
  **/
  @JsonProperty("domain_password")
  public String getDomainPassword() {
    return domainPassword;
  }

  public void setDomainPassword(String domainPassword) {
    this.domainPassword = domainPassword;
  }

  public DomainServiceInfo domainPassword(String domainPassword) {
    this.domainPassword = domainPassword;
    return this;
  }

 /**
   * Get domainType
   * @return domainType
  **/
  @JsonProperty("domain_type")
  public String getDomainType() {
    return domainType;
  }

  public void setDomainType(String domainType) {
    this.domainType = domainType;
  }

  public DomainServiceInfo domainType(String domainType) {
    this.domainType = domainType;
    return this;
  }

 /**
   * Get domainCurrency
   * @return domainCurrency
  **/
  @JsonProperty("domain_currency")
  public String getDomainCurrency() {
    return domainCurrency;
  }

  public void setDomainCurrency(String domainCurrency) {
    this.domainCurrency = domainCurrency;
  }

  public DomainServiceInfo domainCurrency(String domainCurrency) {
    this.domainCurrency = domainCurrency;
    return this;
  }

 /**
   * Get domainExpireDate
   * @return domainExpireDate
  **/
  @JsonProperty("domain_expire_date")
  public String getDomainExpireDate() {
    return domainExpireDate;
  }

  public void setDomainExpireDate(String domainExpireDate) {
    this.domainExpireDate = domainExpireDate;
  }

  public DomainServiceInfo domainExpireDate(String domainExpireDate) {
    this.domainExpireDate = domainExpireDate;
    return this;
  }

 /**
   * Get domainOrderDate
   * @return domainOrderDate
  **/
  @JsonProperty("domain_order_date")
  public String getDomainOrderDate() {
    return domainOrderDate;
  }

  public void setDomainOrderDate(String domainOrderDate) {
    this.domainOrderDate = domainOrderDate;
  }

  public DomainServiceInfo domainOrderDate(String domainOrderDate) {
    this.domainOrderDate = domainOrderDate;
    return this;
  }

 /**
   * Get domainCustid
   * @return domainCustid
  **/
  @JsonProperty("domain_custid")
  public String getDomainCustid() {
    return domainCustid;
  }

  public void setDomainCustid(String domainCustid) {
    this.domainCustid = domainCustid;
  }

  public DomainServiceInfo domainCustid(String domainCustid) {
    this.domainCustid = domainCustid;
    return this;
  }

 /**
   * Get domainStatus
   * @return domainStatus
  **/
  @JsonProperty("domain_status")
  public String getDomainStatus() {
    return domainStatus;
  }

  public void setDomainStatus(String domainStatus) {
    this.domainStatus = domainStatus;
  }

  public DomainServiceInfo domainStatus(String domainStatus) {
    this.domainStatus = domainStatus;
    return this;
  }

 /**
   * Get domainInvoice
   * @return domainInvoice
  **/
  @JsonProperty("domain_invoice")
  public String getDomainInvoice() {
    return domainInvoice;
  }

  public void setDomainInvoice(String domainInvoice) {
    this.domainInvoice = domainInvoice;
  }

  public DomainServiceInfo domainInvoice(String domainInvoice) {
    this.domainInvoice = domainInvoice;
    return this;
  }

 /**
   * Get domainCoupon
   * @return domainCoupon
  **/
  @JsonProperty("domain_coupon")
  public String getDomainCoupon() {
    return domainCoupon;
  }

  public void setDomainCoupon(String domainCoupon) {
    this.domainCoupon = domainCoupon;
  }

  public DomainServiceInfo domainCoupon(String domainCoupon) {
    this.domainCoupon = domainCoupon;
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
    DomainServiceInfo domainServiceInfo = (DomainServiceInfo) o;
    return Objects.equals(this.domainId, domainServiceInfo.domainId) &&
        Objects.equals(this.domainHostname, domainServiceInfo.domainHostname) &&
        Objects.equals(this.domainUsername, domainServiceInfo.domainUsername) &&
        Objects.equals(this.domainPassword, domainServiceInfo.domainPassword) &&
        Objects.equals(this.domainType, domainServiceInfo.domainType) &&
        Objects.equals(this.domainCurrency, domainServiceInfo.domainCurrency) &&
        Objects.equals(this.domainExpireDate, domainServiceInfo.domainExpireDate) &&
        Objects.equals(this.domainOrderDate, domainServiceInfo.domainOrderDate) &&
        Objects.equals(this.domainCustid, domainServiceInfo.domainCustid) &&
        Objects.equals(this.domainStatus, domainServiceInfo.domainStatus) &&
        Objects.equals(this.domainInvoice, domainServiceInfo.domainInvoice) &&
        Objects.equals(this.domainCoupon, domainServiceInfo.domainCoupon);
  }

  @Override
  public int hashCode() {
    return Objects.hash(domainId, domainHostname, domainUsername, domainPassword, domainType, domainCurrency, domainExpireDate, domainOrderDate, domainCustid, domainStatus, domainInvoice, domainCoupon);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class DomainServiceInfo {\n");
    
    sb.append("    domainId: ").append(toIndentedString(domainId)).append("\n");
    sb.append("    domainHostname: ").append(toIndentedString(domainHostname)).append("\n");
    sb.append("    domainUsername: ").append(toIndentedString(domainUsername)).append("\n");
    sb.append("    domainPassword: ").append(toIndentedString(domainPassword)).append("\n");
    sb.append("    domainType: ").append(toIndentedString(domainType)).append("\n");
    sb.append("    domainCurrency: ").append(toIndentedString(domainCurrency)).append("\n");
    sb.append("    domainExpireDate: ").append(toIndentedString(domainExpireDate)).append("\n");
    sb.append("    domainOrderDate: ").append(toIndentedString(domainOrderDate)).append("\n");
    sb.append("    domainCustid: ").append(toIndentedString(domainCustid)).append("\n");
    sb.append("    domainStatus: ").append(toIndentedString(domainStatus)).append("\n");
    sb.append("    domainInvoice: ").append(toIndentedString(domainInvoice)).append("\n");
    sb.append("    domainCoupon: ").append(toIndentedString(domainCoupon)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private static String toIndentedString(Object o) {
    return o == null ? "null" : o.toString().replace("\n", "\n    ");
  }
}

