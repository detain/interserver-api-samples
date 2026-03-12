package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;

@Schema(description="Request to update account information.")

public class AccountInfoPost   {
  private String name = null;
  private String company = null;
  private String address = null;
  private String address2 = null;
  private String city = null;
  private String state = null;
  private String zip = null;
  private String country = null;
  private String phone = null;
  private String locale = null;
  private String emailInvoices = null;
  private String emailAbuse = null;
  private Boolean disableReset = null;
  private Boolean disableReinstall = null;
  private Boolean disableServerNotifications = null;
  private Boolean disableEmailNotifications = null;
  private String gstin = null;

  /**
   * Your name.
   **/
  
  @Schema(example = "John Doe", required = true, description = "Your name.")
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
  
  @Schema(example = "My Company", description = "Your company name.")
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
  
  @Schema(example = "124 My St", required = true, description = "Your address.")
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
  
  @Schema(description = "Additional address information.")
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
  
  @Schema(example = "My Town", required = true, description = "Your city.")
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
  
  @Schema(example = "PA", required = true, description = "Your state.")
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
  
  @Schema(example = "17522", required = true, description = "Your ZIP code.")
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
  
  @Schema(example = "US", required = true, description = "Your country.")
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
  
  @Schema(example = "8675309", required = true, description = "Your phone number.")
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
  
  @Schema(description = "Your preferred locale.")
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
  
  @Schema(description = "Your email for invoice notifications.")
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
  
  @Schema(description = "Your email for abuse notifications.")
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
  
  @Schema(description = "Set to `true` to disable account resets, or `false` to enable them.")
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
  
  @Schema(description = "Set to `true` to disable server reinstalls, or `false` to enable them.")
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
  
  @Schema(description = "Set to `true` to disable server notifications, or `false` to enable them.")
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
  
  @Schema(description = "Set to `true` to disable email notifications, or `false` to enable them.")
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
  
  @Schema(description = "Your GST identification number (if applicable).")
  @JsonProperty("gstin")
  @NotNull
  public String getGstin() {
    return gstin;
  }
  public void setGstin(String gstin) {
    this.gstin = gstin;
  }


  @Override
  public boolean equals(Object o) {
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
  private String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
