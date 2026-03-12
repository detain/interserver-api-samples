package io.swagger.server.api.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import io.vertx.core.json.JsonObject;
import io.vertx.codegen.annotations.DataObject;
/**
 * Request to update account information.
 */




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

  public AccountInfoPost name(String name) {
    this.name = name;
    return this;
  }

  /**
   * Your name.
   * @return name
   **/
    public String getName() {
    return name;
  }

  public void setName(String name) {
    this.name = name;
  }

  public AccountInfoPost company(String company) {
    this.company = company;
    return this;
  }

  /**
   * Your company name.
   * @return company
   **/
    public String getCompany() {
    return company;
  }

  public void setCompany(String company) {
    this.company = company;
  }

  public AccountInfoPost address(String address) {
    this.address = address;
    return this;
  }

  /**
   * Your address.
   * @return address
   **/
    public String getAddress() {
    return address;
  }

  public void setAddress(String address) {
    this.address = address;
  }

  public AccountInfoPost address2(String address2) {
    this.address2 = address2;
    return this;
  }

  /**
   * Additional address information.
   * @return address2
   **/
    public String getAddress2() {
    return address2;
  }

  public void setAddress2(String address2) {
    this.address2 = address2;
  }

  public AccountInfoPost city(String city) {
    this.city = city;
    return this;
  }

  /**
   * Your city.
   * @return city
   **/
    public String getCity() {
    return city;
  }

  public void setCity(String city) {
    this.city = city;
  }

  public AccountInfoPost state(String state) {
    this.state = state;
    return this;
  }

  /**
   * Your state.
   * @return state
   **/
    public String getState() {
    return state;
  }

  public void setState(String state) {
    this.state = state;
  }

  public AccountInfoPost zip(String zip) {
    this.zip = zip;
    return this;
  }

  /**
   * Your ZIP code.
   * @return zip
   **/
    public String getZip() {
    return zip;
  }

  public void setZip(String zip) {
    this.zip = zip;
  }

  public AccountInfoPost country(String country) {
    this.country = country;
    return this;
  }

  /**
   * Your country.
   * @return country
   **/
    public String getCountry() {
    return country;
  }

  public void setCountry(String country) {
    this.country = country;
  }

  public AccountInfoPost phone(String phone) {
    this.phone = phone;
    return this;
  }

  /**
   * Your phone number.
   * @return phone
   **/
    public String getPhone() {
    return phone;
  }

  public void setPhone(String phone) {
    this.phone = phone;
  }

  public AccountInfoPost locale(String locale) {
    this.locale = locale;
    return this;
  }

  /**
   * Your preferred locale.
   * @return locale
   **/
    public String getLocale() {
    return locale;
  }

  public void setLocale(String locale) {
    this.locale = locale;
  }

  public AccountInfoPost emailInvoices(String emailInvoices) {
    this.emailInvoices = emailInvoices;
    return this;
  }

  /**
   * Your email for invoice notifications.
   * @return emailInvoices
   **/
    public String getEmailInvoices() {
    return emailInvoices;
  }

  public void setEmailInvoices(String emailInvoices) {
    this.emailInvoices = emailInvoices;
  }

  public AccountInfoPost emailAbuse(String emailAbuse) {
    this.emailAbuse = emailAbuse;
    return this;
  }

  /**
   * Your email for abuse notifications.
   * @return emailAbuse
   **/
    public String getEmailAbuse() {
    return emailAbuse;
  }

  public void setEmailAbuse(String emailAbuse) {
    this.emailAbuse = emailAbuse;
  }

  public AccountInfoPost disableReset(Boolean disableReset) {
    this.disableReset = disableReset;
    return this;
  }

  /**
   * Set to `true` to disable account resets, or `false` to enable them.
   * @return disableReset
   **/
    public Boolean isDisableReset() {
    return disableReset;
  }

  public void setDisableReset(Boolean disableReset) {
    this.disableReset = disableReset;
  }

  public AccountInfoPost disableReinstall(Boolean disableReinstall) {
    this.disableReinstall = disableReinstall;
    return this;
  }

  /**
   * Set to `true` to disable server reinstalls, or `false` to enable them.
   * @return disableReinstall
   **/
    public Boolean isDisableReinstall() {
    return disableReinstall;
  }

  public void setDisableReinstall(Boolean disableReinstall) {
    this.disableReinstall = disableReinstall;
  }

  public AccountInfoPost disableServerNotifications(Boolean disableServerNotifications) {
    this.disableServerNotifications = disableServerNotifications;
    return this;
  }

  /**
   * Set to `true` to disable server notifications, or `false` to enable them.
   * @return disableServerNotifications
   **/
    public Boolean isDisableServerNotifications() {
    return disableServerNotifications;
  }

  public void setDisableServerNotifications(Boolean disableServerNotifications) {
    this.disableServerNotifications = disableServerNotifications;
  }

  public AccountInfoPost disableEmailNotifications(Boolean disableEmailNotifications) {
    this.disableEmailNotifications = disableEmailNotifications;
    return this;
  }

  /**
   * Set to `true` to disable email notifications, or `false` to enable them.
   * @return disableEmailNotifications
   **/
    public Boolean isDisableEmailNotifications() {
    return disableEmailNotifications;
  }

  public void setDisableEmailNotifications(Boolean disableEmailNotifications) {
    this.disableEmailNotifications = disableEmailNotifications;
  }

  public AccountInfoPost gstin(String gstin) {
    this.gstin = gstin;
    return this;
  }

  /**
   * Your GST identification number (if applicable).
   * @return gstin
   **/
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
    return Objects.equals(this.name, accountInfoPost.name) &&
        Objects.equals(this.company, accountInfoPost.company) &&
        Objects.equals(this.address, accountInfoPost.address) &&
        Objects.equals(this.address2, accountInfoPost.address2) &&
        Objects.equals(this.city, accountInfoPost.city) &&
        Objects.equals(this.state, accountInfoPost.state) &&
        Objects.equals(this.zip, accountInfoPost.zip) &&
        Objects.equals(this.country, accountInfoPost.country) &&
        Objects.equals(this.phone, accountInfoPost.phone) &&
        Objects.equals(this.locale, accountInfoPost.locale) &&
        Objects.equals(this.emailInvoices, accountInfoPost.emailInvoices) &&
        Objects.equals(this.emailAbuse, accountInfoPost.emailAbuse) &&
        Objects.equals(this.disableReset, accountInfoPost.disableReset) &&
        Objects.equals(this.disableReinstall, accountInfoPost.disableReinstall) &&
        Objects.equals(this.disableServerNotifications, accountInfoPost.disableServerNotifications) &&
        Objects.equals(this.disableEmailNotifications, accountInfoPost.disableEmailNotifications) &&
        Objects.equals(this.gstin, accountInfoPost.gstin);
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
