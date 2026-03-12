package org.openapitools.model;


import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * Request payload for enabling or disabling Whois privacy.
 */
@ApiModel(description="Request payload for enabling or disabling Whois privacy.")

public class DomainWhoisPrivacyRequest  {
  
 /**
  * Action to perform (enable or disableCancel).
  */
  @ApiModelProperty(example = "enable", value = "Action to perform (enable or disableCancel).")

  private String func;

 /**
  * CSRF token if the API requires it for the account.
  */
  @ApiModelProperty(value = "CSRF token if the API requires it for the account.")

  private String csrfToken;

  @ApiModelProperty(value = "")

  private String domainFirstname;

  @ApiModelProperty(value = "")

  private String domainLastname;

  @ApiModelProperty(value = "")

  private String domainEmail;

  @ApiModelProperty(value = "")

  private String domainAddress;

  @ApiModelProperty(value = "")

  private String domainAddress2;

  @ApiModelProperty(value = "")

  private String domainAddress3;

  @ApiModelProperty(value = "")

  private String domainCity;

  @ApiModelProperty(value = "")

  private String domainState;

  @ApiModelProperty(value = "")

  private String domainZip;

  @ApiModelProperty(value = "")

  private String domainCountry;

  @ApiModelProperty(value = "")

  private String domainPhone;

  @ApiModelProperty(value = "")

  private String domainFax;

  @ApiModelProperty(value = "")

  private String domainCompany;

  @ApiModelProperty(value = "")

  private String domainExtra;
 /**
   * Action to perform (enable or disableCancel).
   * @return func
  **/
  @JsonProperty("func")
  public String getFunc() {
    return func;
  }

  public void setFunc(String func) {
    this.func = func;
  }

  public DomainWhoisPrivacyRequest func(String func) {
    this.func = func;
    return this;
  }

 /**
   * CSRF token if the API requires it for the account.
   * @return csrfToken
  **/
  @JsonProperty("csrf_token")
  public String getCsrfToken() {
    return csrfToken;
  }

  public void setCsrfToken(String csrfToken) {
    this.csrfToken = csrfToken;
  }

  public DomainWhoisPrivacyRequest csrfToken(String csrfToken) {
    this.csrfToken = csrfToken;
    return this;
  }

 /**
   * Get domainFirstname
   * @return domainFirstname
  **/
  @JsonProperty("domain_firstname")
  public String getDomainFirstname() {
    return domainFirstname;
  }

  public void setDomainFirstname(String domainFirstname) {
    this.domainFirstname = domainFirstname;
  }

  public DomainWhoisPrivacyRequest domainFirstname(String domainFirstname) {
    this.domainFirstname = domainFirstname;
    return this;
  }

 /**
   * Get domainLastname
   * @return domainLastname
  **/
  @JsonProperty("domain_lastname")
  public String getDomainLastname() {
    return domainLastname;
  }

  public void setDomainLastname(String domainLastname) {
    this.domainLastname = domainLastname;
  }

  public DomainWhoisPrivacyRequest domainLastname(String domainLastname) {
    this.domainLastname = domainLastname;
    return this;
  }

 /**
   * Get domainEmail
   * @return domainEmail
  **/
  @JsonProperty("domain_email")
  public String getDomainEmail() {
    return domainEmail;
  }

  public void setDomainEmail(String domainEmail) {
    this.domainEmail = domainEmail;
  }

  public DomainWhoisPrivacyRequest domainEmail(String domainEmail) {
    this.domainEmail = domainEmail;
    return this;
  }

 /**
   * Get domainAddress
   * @return domainAddress
  **/
  @JsonProperty("domain_address")
  public String getDomainAddress() {
    return domainAddress;
  }

  public void setDomainAddress(String domainAddress) {
    this.domainAddress = domainAddress;
  }

  public DomainWhoisPrivacyRequest domainAddress(String domainAddress) {
    this.domainAddress = domainAddress;
    return this;
  }

 /**
   * Get domainAddress2
   * @return domainAddress2
  **/
  @JsonProperty("domain_address2")
  public String getDomainAddress2() {
    return domainAddress2;
  }

  public void setDomainAddress2(String domainAddress2) {
    this.domainAddress2 = domainAddress2;
  }

  public DomainWhoisPrivacyRequest domainAddress2(String domainAddress2) {
    this.domainAddress2 = domainAddress2;
    return this;
  }

 /**
   * Get domainAddress3
   * @return domainAddress3
  **/
  @JsonProperty("domain_address3")
  public String getDomainAddress3() {
    return domainAddress3;
  }

  public void setDomainAddress3(String domainAddress3) {
    this.domainAddress3 = domainAddress3;
  }

  public DomainWhoisPrivacyRequest domainAddress3(String domainAddress3) {
    this.domainAddress3 = domainAddress3;
    return this;
  }

 /**
   * Get domainCity
   * @return domainCity
  **/
  @JsonProperty("domain_city")
  public String getDomainCity() {
    return domainCity;
  }

  public void setDomainCity(String domainCity) {
    this.domainCity = domainCity;
  }

  public DomainWhoisPrivacyRequest domainCity(String domainCity) {
    this.domainCity = domainCity;
    return this;
  }

 /**
   * Get domainState
   * @return domainState
  **/
  @JsonProperty("domain_state")
  public String getDomainState() {
    return domainState;
  }

  public void setDomainState(String domainState) {
    this.domainState = domainState;
  }

  public DomainWhoisPrivacyRequest domainState(String domainState) {
    this.domainState = domainState;
    return this;
  }

 /**
   * Get domainZip
   * @return domainZip
  **/
  @JsonProperty("domain_zip")
  public String getDomainZip() {
    return domainZip;
  }

  public void setDomainZip(String domainZip) {
    this.domainZip = domainZip;
  }

  public DomainWhoisPrivacyRequest domainZip(String domainZip) {
    this.domainZip = domainZip;
    return this;
  }

 /**
   * Get domainCountry
   * @return domainCountry
  **/
  @JsonProperty("domain_country")
  public String getDomainCountry() {
    return domainCountry;
  }

  public void setDomainCountry(String domainCountry) {
    this.domainCountry = domainCountry;
  }

  public DomainWhoisPrivacyRequest domainCountry(String domainCountry) {
    this.domainCountry = domainCountry;
    return this;
  }

 /**
   * Get domainPhone
   * @return domainPhone
  **/
  @JsonProperty("domain_phone")
  public String getDomainPhone() {
    return domainPhone;
  }

  public void setDomainPhone(String domainPhone) {
    this.domainPhone = domainPhone;
  }

  public DomainWhoisPrivacyRequest domainPhone(String domainPhone) {
    this.domainPhone = domainPhone;
    return this;
  }

 /**
   * Get domainFax
   * @return domainFax
  **/
  @JsonProperty("domain_fax")
  public String getDomainFax() {
    return domainFax;
  }

  public void setDomainFax(String domainFax) {
    this.domainFax = domainFax;
  }

  public DomainWhoisPrivacyRequest domainFax(String domainFax) {
    this.domainFax = domainFax;
    return this;
  }

 /**
   * Get domainCompany
   * @return domainCompany
  **/
  @JsonProperty("domain_company")
  public String getDomainCompany() {
    return domainCompany;
  }

  public void setDomainCompany(String domainCompany) {
    this.domainCompany = domainCompany;
  }

  public DomainWhoisPrivacyRequest domainCompany(String domainCompany) {
    this.domainCompany = domainCompany;
    return this;
  }

 /**
   * Get domainExtra
   * @return domainExtra
  **/
  @JsonProperty("domain_extra")
  public String getDomainExtra() {
    return domainExtra;
  }

  public void setDomainExtra(String domainExtra) {
    this.domainExtra = domainExtra;
  }

  public DomainWhoisPrivacyRequest domainExtra(String domainExtra) {
    this.domainExtra = domainExtra;
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
    DomainWhoisPrivacyRequest domainWhoisPrivacyRequest = (DomainWhoisPrivacyRequest) o;
    return Objects.equals(this.func, domainWhoisPrivacyRequest.func) &&
        Objects.equals(this.csrfToken, domainWhoisPrivacyRequest.csrfToken) &&
        Objects.equals(this.domainFirstname, domainWhoisPrivacyRequest.domainFirstname) &&
        Objects.equals(this.domainLastname, domainWhoisPrivacyRequest.domainLastname) &&
        Objects.equals(this.domainEmail, domainWhoisPrivacyRequest.domainEmail) &&
        Objects.equals(this.domainAddress, domainWhoisPrivacyRequest.domainAddress) &&
        Objects.equals(this.domainAddress2, domainWhoisPrivacyRequest.domainAddress2) &&
        Objects.equals(this.domainAddress3, domainWhoisPrivacyRequest.domainAddress3) &&
        Objects.equals(this.domainCity, domainWhoisPrivacyRequest.domainCity) &&
        Objects.equals(this.domainState, domainWhoisPrivacyRequest.domainState) &&
        Objects.equals(this.domainZip, domainWhoisPrivacyRequest.domainZip) &&
        Objects.equals(this.domainCountry, domainWhoisPrivacyRequest.domainCountry) &&
        Objects.equals(this.domainPhone, domainWhoisPrivacyRequest.domainPhone) &&
        Objects.equals(this.domainFax, domainWhoisPrivacyRequest.domainFax) &&
        Objects.equals(this.domainCompany, domainWhoisPrivacyRequest.domainCompany) &&
        Objects.equals(this.domainExtra, domainWhoisPrivacyRequest.domainExtra);
  }

  @Override
  public int hashCode() {
    return Objects.hash(func, csrfToken, domainFirstname, domainLastname, domainEmail, domainAddress, domainAddress2, domainAddress3, domainCity, domainState, domainZip, domainCountry, domainPhone, domainFax, domainCompany, domainExtra);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class DomainWhoisPrivacyRequest {\n");
    
    sb.append("    func: ").append(toIndentedString(func)).append("\n");
    sb.append("    csrfToken: ").append(toIndentedString(csrfToken)).append("\n");
    sb.append("    domainFirstname: ").append(toIndentedString(domainFirstname)).append("\n");
    sb.append("    domainLastname: ").append(toIndentedString(domainLastname)).append("\n");
    sb.append("    domainEmail: ").append(toIndentedString(domainEmail)).append("\n");
    sb.append("    domainAddress: ").append(toIndentedString(domainAddress)).append("\n");
    sb.append("    domainAddress2: ").append(toIndentedString(domainAddress2)).append("\n");
    sb.append("    domainAddress3: ").append(toIndentedString(domainAddress3)).append("\n");
    sb.append("    domainCity: ").append(toIndentedString(domainCity)).append("\n");
    sb.append("    domainState: ").append(toIndentedString(domainState)).append("\n");
    sb.append("    domainZip: ").append(toIndentedString(domainZip)).append("\n");
    sb.append("    domainCountry: ").append(toIndentedString(domainCountry)).append("\n");
    sb.append("    domainPhone: ").append(toIndentedString(domainPhone)).append("\n");
    sb.append("    domainFax: ").append(toIndentedString(domainFax)).append("\n");
    sb.append("    domainCompany: ").append(toIndentedString(domainCompany)).append("\n");
    sb.append("    domainExtra: ").append(toIndentedString(domainExtra)).append("\n");
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

