package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * Request to update account information.
 **/
import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
@Schema(description = "Request to update account information.")

public class AccountInfoPost   {

  private @Valid String name = null;

  private @Valid String company = null;

  private @Valid String address = null;

  private @Valid String address2 = null;

  private @Valid String city = null;

  private @Valid String state = null;

  private @Valid String zip = null;

  private @Valid String country = null;

  private @Valid String phone = null;

  private @Valid String locale = null;

  private @Valid String emailInvoices = null;

  private @Valid String emailAbuse = null;

  private @Valid Boolean disableReset = null;

  private @Valid Boolean disableReinstall = null;

  private @Valid Boolean disableServerNotifications = null;

  private @Valid Boolean disableEmailNotifications = null;

  private @Valid String gstin = null;

  /**
   * Your name.
   **/
  public AccountInfoPost name(String name) {
    this.name = name;
    return this;
  }

  
  @ApiModelProperty(example = "John Doe", required = true, value = "Your name.")
  @JsonProperty("name")
  @NotNull

  public String getName() {
    return name;
  }
  public void setName(String name) {
    this.name = name;
  }

  /**
   * Your company name.
   **/
  public AccountInfoPost company(String company) {
    this.company = company;
    return this;
  }

  
  @ApiModelProperty(example = "My Company", value = "Your company name.")
  @JsonProperty("company")
  @NotNull

  public String getCompany() {
    return company;
  }
  public void setCompany(String company) {
    this.company = company;
  }

  /**
   * Your address.
   **/
  public AccountInfoPost address(String address) {
    this.address = address;
    return this;
  }

  
  @ApiModelProperty(example = "124 My St", required = true, value = "Your address.")
  @JsonProperty("address")
  @NotNull

  public String getAddress() {
    return address;
  }
  public void setAddress(String address) {
    this.address = address;
  }

  /**
   * Additional address information.
   **/
  public AccountInfoPost address2(String address2) {
    this.address2 = address2;
    return this;
  }

  
  @ApiModelProperty(value = "Additional address information.")
  @JsonProperty("address2")
  @NotNull

  public String getAddress2() {
    return address2;
  }
  public void setAddress2(String address2) {
    this.address2 = address2;
  }

  /**
   * Your city.
   **/
  public AccountInfoPost city(String city) {
    this.city = city;
    return this;
  }

  
  @ApiModelProperty(example = "My Town", required = true, value = "Your city.")
  @JsonProperty("city")
  @NotNull

  public String getCity() {
    return city;
  }
  public void setCity(String city) {
    this.city = city;
  }

  /**
   * Your state.
   **/
  public AccountInfoPost state(String state) {
    this.state = state;
    return this;
  }

  
  @ApiModelProperty(example = "PA", required = true, value = "Your state.")
  @JsonProperty("state")
  @NotNull

  public String getState() {
    return state;
  }
  public void setState(String state) {
    this.state = state;
  }

  /**
   * Your ZIP code.
   **/
  public AccountInfoPost zip(String zip) {
    this.zip = zip;
    return this;
  }

  
  @ApiModelProperty(example = "17522", required = true, value = "Your ZIP code.")
  @JsonProperty("zip")
  @NotNull

  public String getZip() {
    return zip;
  }
  public void setZip(String zip) {
    this.zip = zip;
  }

  /**
   * Your country.
   **/
  public AccountInfoPost country(String country) {
    this.country = country;
    return this;
  }

  
  @ApiModelProperty(example = "US", required = true, value = "Your country.")
  @JsonProperty("country")
  @NotNull

  public String getCountry() {
    return country;
  }
  public void setCountry(String country) {
    this.country = country;
  }

  /**
   * Your phone number.
   **/
  public AccountInfoPost phone(String phone) {
    this.phone = phone;
    return this;
  }

  
  @ApiModelProperty(example = "8675309", required = true, value = "Your phone number.")
  @JsonProperty("phone")
  @NotNull

  public String getPhone() {
    return phone;
  }
  public void setPhone(String phone) {
    this.phone = phone;
  }

  /**
   * Your preferred locale.
   **/
  public AccountInfoPost locale(String locale) {
    this.locale = locale;
    return this;
  }

  
  @ApiModelProperty(value = "Your preferred locale.")
  @JsonProperty("locale")
  @NotNull

  public String getLocale() {
    return locale;
  }
  public void setLocale(String locale) {
    this.locale = locale;
  }

  /**
   * Your email for invoice notifications.
   **/
  public AccountInfoPost emailInvoices(String emailInvoices) {
    this.emailInvoices = emailInvoices;
    return this;
  }

  
  @ApiModelProperty(value = "Your email for invoice notifications.")
  @JsonProperty("email_invoices")
  @NotNull

  public String getEmailInvoices() {
    return emailInvoices;
  }
  public void setEmailInvoices(String emailInvoices) {
    this.emailInvoices = emailInvoices;
  }

  /**
   * Your email for abuse notifications.
   **/
  public AccountInfoPost emailAbuse(String emailAbuse) {
    this.emailAbuse = emailAbuse;
    return this;
  }

  
  @ApiModelProperty(value = "Your email for abuse notifications.")
  @JsonProperty("email_abuse")
  @NotNull

  public String getEmailAbuse() {
    return emailAbuse;
  }
  public void setEmailAbuse(String emailAbuse) {
    this.emailAbuse = emailAbuse;
  }

  /**
   * Set to &#x60;true&#x60; to disable account resets, or &#x60;false&#x60; to enable them.
   **/
  public AccountInfoPost disableReset(Boolean disableReset) {
    this.disableReset = disableReset;
    return this;
  }

  
  @ApiModelProperty(value = "Set to `true` to disable account resets, or `false` to enable them.")
  @JsonProperty("disable_reset")
  @NotNull

  public Boolean isDisableReset() {
    return disableReset;
  }
  public void setDisableReset(Boolean disableReset) {
    this.disableReset = disableReset;
  }

  /**
   * Set to &#x60;true&#x60; to disable server reinstalls, or &#x60;false&#x60; to enable them.
   **/
  public AccountInfoPost disableReinstall(Boolean disableReinstall) {
    this.disableReinstall = disableReinstall;
    return this;
  }

  
  @ApiModelProperty(value = "Set to `true` to disable server reinstalls, or `false` to enable them.")
  @JsonProperty("disable_reinstall")
  @NotNull

  public Boolean isDisableReinstall() {
    return disableReinstall;
  }
  public void setDisableReinstall(Boolean disableReinstall) {
    this.disableReinstall = disableReinstall;
  }

  /**
   * Set to &#x60;true&#x60; to disable server notifications, or &#x60;false&#x60; to enable them.
   **/
  public AccountInfoPost disableServerNotifications(Boolean disableServerNotifications) {
    this.disableServerNotifications = disableServerNotifications;
    return this;
  }

  
  @ApiModelProperty(value = "Set to `true` to disable server notifications, or `false` to enable them.")
  @JsonProperty("disable_server_notifications")
  @NotNull

  public Boolean isDisableServerNotifications() {
    return disableServerNotifications;
  }
  public void setDisableServerNotifications(Boolean disableServerNotifications) {
    this.disableServerNotifications = disableServerNotifications;
  }

  /**
   * Set to &#x60;true&#x60; to disable email notifications, or &#x60;false&#x60; to enable them.
   **/
  public AccountInfoPost disableEmailNotifications(Boolean disableEmailNotifications) {
    this.disableEmailNotifications = disableEmailNotifications;
    return this;
  }

  
  @ApiModelProperty(value = "Set to `true` to disable email notifications, or `false` to enable them.")
  @JsonProperty("disable_email_notifications")
  @NotNull

  public Boolean isDisableEmailNotifications() {
    return disableEmailNotifications;
  }
  public void setDisableEmailNotifications(Boolean disableEmailNotifications) {
    this.disableEmailNotifications = disableEmailNotifications;
  }

  /**
   * Your GST identification number (if applicable).
   **/
  public AccountInfoPost gstin(String gstin) {
    this.gstin = gstin;
    return this;
  }

  
  @ApiModelProperty(value = "Your GST identification number (if applicable).")
  @JsonProperty("gstin")
  @NotNull

  public String getGstin() {
    return gstin;
  }
  public void setGstin(String gstin) {
    this.gstin = gstin;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    AccountInfoPost accountInfoPost = (AccountInfoPost) o;
    return Objects.equals(name, accountInfoPost.name) &&
        Objects.equals(company, accountInfoPost.company) &&
        Objects.equals(address, accountInfoPost.address) &&
        Objects.equals(address2, accountInfoPost.address2) &&
        Objects.equals(city, accountInfoPost.city) &&
        Objects.equals(state, accountInfoPost.state) &&
        Objects.equals(zip, accountInfoPost.zip) &&
        Objects.equals(country, accountInfoPost.country) &&
        Objects.equals(phone, accountInfoPost.phone) &&
        Objects.equals(locale, accountInfoPost.locale) &&
        Objects.equals(emailInvoices, accountInfoPost.emailInvoices) &&
        Objects.equals(emailAbuse, accountInfoPost.emailAbuse) &&
        Objects.equals(disableReset, accountInfoPost.disableReset) &&
        Objects.equals(disableReinstall, accountInfoPost.disableReinstall) &&
        Objects.equals(disableServerNotifications, accountInfoPost.disableServerNotifications) &&
        Objects.equals(disableEmailNotifications, accountInfoPost.disableEmailNotifications) &&
        Objects.equals(gstin, accountInfoPost.gstin);
  }

  @Override
  public int hashCode() {
    return Objects.hash(name, company, address, address2, city, state, zip, country, phone, locale, emailInvoices, emailAbuse, disableReset, disableReinstall, disableServerNotifications, disableEmailNotifications, gstin);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class AccountInfoPost {\n");
    
    sb.append("    name: ").append(toIndentedString(name)).append("\n");
    sb.append("    company: ").append(toIndentedString(company)).append("\n");
    sb.append("    address: ").append(toIndentedString(address)).append("\n");
    sb.append("    address2: ").append(toIndentedString(address2)).append("\n");
    sb.append("    city: ").append(toIndentedString(city)).append("\n");
    sb.append("    state: ").append(toIndentedString(state)).append("\n");
    sb.append("    zip: ").append(toIndentedString(zip)).append("\n");
    sb.append("    country: ").append(toIndentedString(country)).append("\n");
    sb.append("    phone: ").append(toIndentedString(phone)).append("\n");
    sb.append("    locale: ").append(toIndentedString(locale)).append("\n");
    sb.append("    emailInvoices: ").append(toIndentedString(emailInvoices)).append("\n");
    sb.append("    emailAbuse: ").append(toIndentedString(emailAbuse)).append("\n");
    sb.append("    disableReset: ").append(toIndentedString(disableReset)).append("\n");
    sb.append("    disableReinstall: ").append(toIndentedString(disableReinstall)).append("\n");
    sb.append("    disableServerNotifications: ").append(toIndentedString(disableServerNotifications)).append("\n");
    sb.append("    disableEmailNotifications: ").append(toIndentedString(disableEmailNotifications)).append("\n");
    sb.append("    gstin: ").append(toIndentedString(gstin)).append("\n");
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
