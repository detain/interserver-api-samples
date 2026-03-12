package io.swagger.model;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;


/**
 * Contact details used for domain registrant/admin/technical/billing records.
 **/
@Schema(description = "Contact details used for domain registrant/admin/technical/billing records.")


public class DomainContactDetails   {
  @JsonProperty("status")
  private String status = null;
  @JsonProperty("state")
  private String state = null;
  @JsonProperty("org_name")
  private String orgName = null;
  @JsonProperty("country")
  private String country = null;
  @JsonProperty("postal_code")
  private String postalCode = null;
  @JsonProperty("email")
  private String email = null;
  @JsonProperty("fax")
  private String fax = null;
  @JsonProperty("address2")
  private String address2 = null;
  @JsonProperty("address3")
  private String address3 = null;
  @JsonProperty("address1")
  private String address1 = null;
  @JsonProperty("city")
  private String city = null;
  @JsonProperty("phone")
  private String phone = null;
  @JsonProperty("first_name")
  private String firstName = null;
  @JsonProperty("last_name")
  private String lastName = null;
  /**
   * Contact status reported by the registrar.
   **/
  public DomainContactDetails status(String status) {
    this.status = status;
    return this;
  }

  
  @Schema(description = "Contact status reported by the registrar.")
  @JsonProperty("status")
  public String getStatus() {
    return status;
  }
  public void setStatus(String status) {
    this.status = status;
  }

  /**
   * State or region for the contact address.
   **/
  public DomainContactDetails state(String state) {
    this.state = state;
    return this;
  }

  
  @Schema(description = "State or region for the contact address.")
  @JsonProperty("state")
  public String getState() {
    return state;
  }
  public void setState(String state) {
    this.state = state;
  }

  /**
   * Organization name for the contact.
   **/
  public DomainContactDetails orgName(String orgName) {
    this.orgName = orgName;
    return this;
  }

  
  @Schema(description = "Organization name for the contact.")
  @JsonProperty("org_name")
  public String getOrgName() {
    return orgName;
  }
  public void setOrgName(String orgName) {
    this.orgName = orgName;
  }

  /**
   * Two-letter country code for the contact.
   **/
  public DomainContactDetails country(String country) {
    this.country = country;
    return this;
  }

  
  @Schema(description = "Two-letter country code for the contact.")
  @JsonProperty("country")
  public String getCountry() {
    return country;
  }
  public void setCountry(String country) {
    this.country = country;
  }

  /**
   * Postal or ZIP code for the contact address.
   **/
  public DomainContactDetails postalCode(String postalCode) {
    this.postalCode = postalCode;
    return this;
  }

  
  @Schema(description = "Postal or ZIP code for the contact address.")
  @JsonProperty("postal_code")
  public String getPostalCode() {
    return postalCode;
  }
  public void setPostalCode(String postalCode) {
    this.postalCode = postalCode;
  }

  /**
   * Email address for the contact.
   **/
  public DomainContactDetails email(String email) {
    this.email = email;
    return this;
  }

  
  @Schema(description = "Email address for the contact.")
  @JsonProperty("email")
  public String getEmail() {
    return email;
  }
  public void setEmail(String email) {
    this.email = email;
  }

  /**
   * Fax number for the contact, if available.
   **/
  public DomainContactDetails fax(String fax) {
    this.fax = fax;
    return this;
  }

  
  @Schema(description = "Fax number for the contact, if available.")
  @JsonProperty("fax")
  public String getFax() {
    return fax;
  }
  public void setFax(String fax) {
    this.fax = fax;
  }

  /**
   * Secondary street address line.
   **/
  public DomainContactDetails address2(String address2) {
    this.address2 = address2;
    return this;
  }

  
  @Schema(description = "Secondary street address line.")
  @JsonProperty("address2")
  public String getAddress2() {
    return address2;
  }
  public void setAddress2(String address2) {
    this.address2 = address2;
  }

  /**
   * Tertiary street address line.
   **/
  public DomainContactDetails address3(String address3) {
    this.address3 = address3;
    return this;
  }

  
  @Schema(description = "Tertiary street address line.")
  @JsonProperty("address3")
  public String getAddress3() {
    return address3;
  }
  public void setAddress3(String address3) {
    this.address3 = address3;
  }

  /**
   * Primary street address line.
   **/
  public DomainContactDetails address1(String address1) {
    this.address1 = address1;
    return this;
  }

  
  @Schema(description = "Primary street address line.")
  @JsonProperty("address1")
  public String getAddress1() {
    return address1;
  }
  public void setAddress1(String address1) {
    this.address1 = address1;
  }

  /**
   * City for the contact address.
   **/
  public DomainContactDetails city(String city) {
    this.city = city;
    return this;
  }

  
  @Schema(description = "City for the contact address.")
  @JsonProperty("city")
  public String getCity() {
    return city;
  }
  public void setCity(String city) {
    this.city = city;
  }

  /**
   * Phone number for the contact.
   **/
  public DomainContactDetails phone(String phone) {
    this.phone = phone;
    return this;
  }

  
  @Schema(description = "Phone number for the contact.")
  @JsonProperty("phone")
  public String getPhone() {
    return phone;
  }
  public void setPhone(String phone) {
    this.phone = phone;
  }

  /**
   * First name for the contact.
   **/
  public DomainContactDetails firstName(String firstName) {
    this.firstName = firstName;
    return this;
  }

  
  @Schema(description = "First name for the contact.")
  @JsonProperty("first_name")
  public String getFirstName() {
    return firstName;
  }
  public void setFirstName(String firstName) {
    this.firstName = firstName;
  }

  /**
   * Last name for the contact.
   **/
  public DomainContactDetails lastName(String lastName) {
    this.lastName = lastName;
    return this;
  }

  
  @Schema(description = "Last name for the contact.")
  @JsonProperty("last_name")
  public String getLastName() {
    return lastName;
  }
  public void setLastName(String lastName) {
    this.lastName = lastName;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    DomainContactDetails domainContactDetails = (DomainContactDetails) o;
    return Objects.equals(status, domainContactDetails.status) &&
        Objects.equals(state, domainContactDetails.state) &&
        Objects.equals(orgName, domainContactDetails.orgName) &&
        Objects.equals(country, domainContactDetails.country) &&
        Objects.equals(postalCode, domainContactDetails.postalCode) &&
        Objects.equals(email, domainContactDetails.email) &&
        Objects.equals(fax, domainContactDetails.fax) &&
        Objects.equals(address2, domainContactDetails.address2) &&
        Objects.equals(address3, domainContactDetails.address3) &&
        Objects.equals(address1, domainContactDetails.address1) &&
        Objects.equals(city, domainContactDetails.city) &&
        Objects.equals(phone, domainContactDetails.phone) &&
        Objects.equals(firstName, domainContactDetails.firstName) &&
        Objects.equals(lastName, domainContactDetails.lastName);
  }

  @Override
  public int hashCode() {
    return Objects.hash(status, state, orgName, country, postalCode, email, fax, address2, address3, address1, city, phone, firstName, lastName);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class DomainContactDetails {\n");
    sb.append("    status: ").append(toIndentedString(status)).append("\n");
    sb.append("    state: ").append(toIndentedString(state)).append("\n");
    sb.append("    orgName: ").append(toIndentedString(orgName)).append("\n");
    sb.append("    country: ").append(toIndentedString(country)).append("\n");
    sb.append("    postalCode: ").append(toIndentedString(postalCode)).append("\n");
    sb.append("    email: ").append(toIndentedString(email)).append("\n");
    sb.append("    fax: ").append(toIndentedString(fax)).append("\n");
    sb.append("    address2: ").append(toIndentedString(address2)).append("\n");
    sb.append("    address3: ").append(toIndentedString(address3)).append("\n");
    sb.append("    address1: ").append(toIndentedString(address1)).append("\n");
    sb.append("    city: ").append(toIndentedString(city)).append("\n");
    sb.append("    phone: ").append(toIndentedString(phone)).append("\n");
    sb.append("    firstName: ").append(toIndentedString(firstName)).append("\n");
    sb.append("    lastName: ").append(toIndentedString(lastName)).append("\n");
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
