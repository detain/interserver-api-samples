package io.swagger.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import io.micronaut.core.annotation.Introspected;
import io.micronaut.validation.Validated;
import javax.validation.Valid;
import javax.validation.constraints.*;

/**
 * Request payload for enabling or disabling Whois privacy.
 */
@Schema(description = "Request payload for enabling or disabling Whois privacy.")
@Validated
@Introspected

public class DomainWhoisPrivacyRequest   {
  @JsonProperty("func")
  private String func = null;

  @JsonProperty("csrf_token")
  private String csrfToken = null;

  @JsonProperty("domain_firstname")
  private String domainFirstname = null;

  @JsonProperty("domain_lastname")
  private String domainLastname = null;

  @JsonProperty("domain_email")
  private String domainEmail = null;

  @JsonProperty("domain_address")
  private String domainAddress = null;

  @JsonProperty("domain_address2")
  private String domainAddress2 = null;

  @JsonProperty("domain_address3")
  private String domainAddress3 = null;

  @JsonProperty("domain_city")
  private String domainCity = null;

  @JsonProperty("domain_state")
  private String domainState = null;

  @JsonProperty("domain_zip")
  private String domainZip = null;

  @JsonProperty("domain_country")
  private String domainCountry = null;

  @JsonProperty("domain_phone")
  private String domainPhone = null;

  @JsonProperty("domain_fax")
  private String domainFax = null;

  @JsonProperty("domain_company")
  private String domainCompany = null;

  @JsonProperty("domain_extra")
  private String domainExtra = null;

  public DomainWhoisPrivacyRequest func(String func) {
    this.func = func;
    return this;
  }

  /**
   * Action to perform (enable or disableCancel).
   * @return func
  **/
  @Schema(example = "enable", description = "Action to perform (enable or disableCancel).")
  @NotNull

  public String getFunc() {
    return func;
  }

  public void setFunc(String func) {
    this.func = func;
  }

  public DomainWhoisPrivacyRequest csrfToken(String csrfToken) {
    this.csrfToken = csrfToken;
    return this;
  }

  /**
   * CSRF token if the API requires it for the account.
   * @return csrfToken
  **/
  @Schema(description = "CSRF token if the API requires it for the account.")
  @NotNull

  public String getCsrfToken() {
    return csrfToken;
  }

  public void setCsrfToken(String csrfToken) {
    this.csrfToken = csrfToken;
  }

  public DomainWhoisPrivacyRequest domainFirstname(String domainFirstname) {
    this.domainFirstname = domainFirstname;
    return this;
  }

  /**
   * Get domainFirstname
   * @return domainFirstname
  **/
  @Schema(description = "")
  @NotNull

  public String getDomainFirstname() {
    return domainFirstname;
  }

  public void setDomainFirstname(String domainFirstname) {
    this.domainFirstname = domainFirstname;
  }

  public DomainWhoisPrivacyRequest domainLastname(String domainLastname) {
    this.domainLastname = domainLastname;
    return this;
  }

  /**
   * Get domainLastname
   * @return domainLastname
  **/
  @Schema(description = "")
  @NotNull

  public String getDomainLastname() {
    return domainLastname;
  }

  public void setDomainLastname(String domainLastname) {
    this.domainLastname = domainLastname;
  }

  public DomainWhoisPrivacyRequest domainEmail(String domainEmail) {
    this.domainEmail = domainEmail;
    return this;
  }

  /**
   * Get domainEmail
   * @return domainEmail
  **/
  @Schema(description = "")
  @NotNull

  public String getDomainEmail() {
    return domainEmail;
  }

  public void setDomainEmail(String domainEmail) {
    this.domainEmail = domainEmail;
  }

  public DomainWhoisPrivacyRequest domainAddress(String domainAddress) {
    this.domainAddress = domainAddress;
    return this;
  }

  /**
   * Get domainAddress
   * @return domainAddress
  **/
  @Schema(description = "")
  @NotNull

  public String getDomainAddress() {
    return domainAddress;
  }

  public void setDomainAddress(String domainAddress) {
    this.domainAddress = domainAddress;
  }

  public DomainWhoisPrivacyRequest domainAddress2(String domainAddress2) {
    this.domainAddress2 = domainAddress2;
    return this;
  }

  /**
   * Get domainAddress2
   * @return domainAddress2
  **/
  @Schema(description = "")
  @NotNull

  public String getDomainAddress2() {
    return domainAddress2;
  }

  public void setDomainAddress2(String domainAddress2) {
    this.domainAddress2 = domainAddress2;
  }

  public DomainWhoisPrivacyRequest domainAddress3(String domainAddress3) {
    this.domainAddress3 = domainAddress3;
    return this;
  }

  /**
   * Get domainAddress3
   * @return domainAddress3
  **/
  @Schema(description = "")
  @NotNull

  public String getDomainAddress3() {
    return domainAddress3;
  }

  public void setDomainAddress3(String domainAddress3) {
    this.domainAddress3 = domainAddress3;
  }

  public DomainWhoisPrivacyRequest domainCity(String domainCity) {
    this.domainCity = domainCity;
    return this;
  }

  /**
   * Get domainCity
   * @return domainCity
  **/
  @Schema(description = "")
  @NotNull

  public String getDomainCity() {
    return domainCity;
  }

  public void setDomainCity(String domainCity) {
    this.domainCity = domainCity;
  }

  public DomainWhoisPrivacyRequest domainState(String domainState) {
    this.domainState = domainState;
    return this;
  }

  /**
   * Get domainState
   * @return domainState
  **/
  @Schema(description = "")
  @NotNull

  public String getDomainState() {
    return domainState;
  }

  public void setDomainState(String domainState) {
    this.domainState = domainState;
  }

  public DomainWhoisPrivacyRequest domainZip(String domainZip) {
    this.domainZip = domainZip;
    return this;
  }

  /**
   * Get domainZip
   * @return domainZip
  **/
  @Schema(description = "")
  @NotNull

  public String getDomainZip() {
    return domainZip;
  }

  public void setDomainZip(String domainZip) {
    this.domainZip = domainZip;
  }

  public DomainWhoisPrivacyRequest domainCountry(String domainCountry) {
    this.domainCountry = domainCountry;
    return this;
  }

  /**
   * Get domainCountry
   * @return domainCountry
  **/
  @Schema(description = "")
  @NotNull

  public String getDomainCountry() {
    return domainCountry;
  }

  public void setDomainCountry(String domainCountry) {
    this.domainCountry = domainCountry;
  }

  public DomainWhoisPrivacyRequest domainPhone(String domainPhone) {
    this.domainPhone = domainPhone;
    return this;
  }

  /**
   * Get domainPhone
   * @return domainPhone
  **/
  @Schema(description = "")
  @NotNull

  public String getDomainPhone() {
    return domainPhone;
  }

  public void setDomainPhone(String domainPhone) {
    this.domainPhone = domainPhone;
  }

  public DomainWhoisPrivacyRequest domainFax(String domainFax) {
    this.domainFax = domainFax;
    return this;
  }

  /**
   * Get domainFax
   * @return domainFax
  **/
  @Schema(description = "")
  @NotNull

  public String getDomainFax() {
    return domainFax;
  }

  public void setDomainFax(String domainFax) {
    this.domainFax = domainFax;
  }

  public DomainWhoisPrivacyRequest domainCompany(String domainCompany) {
    this.domainCompany = domainCompany;
    return this;
  }

  /**
   * Get domainCompany
   * @return domainCompany
  **/
  @Schema(description = "")
  @NotNull

  public String getDomainCompany() {
    return domainCompany;
  }

  public void setDomainCompany(String domainCompany) {
    this.domainCompany = domainCompany;
  }

  public DomainWhoisPrivacyRequest domainExtra(String domainExtra) {
    this.domainExtra = domainExtra;
    return this;
  }

  /**
   * Get domainExtra
   * @return domainExtra
  **/
  @Schema(description = "")
  @NotNull

  public String getDomainExtra() {
    return domainExtra;
  }

  public void setDomainExtra(String domainExtra) {
    this.domainExtra = domainExtra;
  }


  @Override
  public boolean equals(java.lang.Object o) {
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
