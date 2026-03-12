package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;

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

/**
  * Contact details used for domain registrant/admin/technical/billing records.
 **/
@Schema(description="Contact details used for domain registrant/admin/technical/billing records.")
public class DomainContactDetails   {
  
  @Schema(description = "Contact status reported by the registrar.")
 /**
   * Contact status reported by the registrar.  
  **/
  private String status = null;
  
  @Schema(description = "State or region for the contact address.")
 /**
   * State or region for the contact address.  
  **/
  private String state = null;
  
  @Schema(description = "Organization name for the contact.")
 /**
   * Organization name for the contact.  
  **/
  private String orgName = null;
  
  @Schema(description = "Two-letter country code for the contact.")
 /**
   * Two-letter country code for the contact.  
  **/
  private String country = null;
  
  @Schema(description = "Postal or ZIP code for the contact address.")
 /**
   * Postal or ZIP code for the contact address.  
  **/
  private String postalCode = null;
  
  @Schema(description = "Email address for the contact.")
 /**
   * Email address for the contact.  
  **/
  private String email = null;
  
  @Schema(description = "Fax number for the contact, if available.")
 /**
   * Fax number for the contact, if available.  
  **/
  private String fax = null;
  
  @Schema(description = "Secondary street address line.")
 /**
   * Secondary street address line.  
  **/
  private String address2 = null;
  
  @Schema(description = "Tertiary street address line.")
 /**
   * Tertiary street address line.  
  **/
  private String address3 = null;
  
  @Schema(description = "Primary street address line.")
 /**
   * Primary street address line.  
  **/
  private String address1 = null;
  
  @Schema(description = "City for the contact address.")
 /**
   * City for the contact address.  
  **/
  private String city = null;
  
  @Schema(description = "Phone number for the contact.")
 /**
   * Phone number for the contact.  
  **/
  private String phone = null;
  
  @Schema(description = "First name for the contact.")
 /**
   * First name for the contact.  
  **/
  private String firstName = null;
  
  @Schema(description = "Last name for the contact.")
 /**
   * Last name for the contact.  
  **/
  private String lastName = null;
 /**
   * Contact status reported by the registrar.
   * @return status
  **/
  @JsonProperty("status")
  @NotNull
  public String getStatus() {
    return status;
  }

  public void setStatus(String status) {
    this.status = status;
  }

  public DomainContactDetails status(String status) {
    this.status = status;
    return this;
  }

 /**
   * State or region for the contact address.
   * @return state
  **/
  @JsonProperty("state")
  @NotNull
  public String getState() {
    return state;
  }

  public void setState(String state) {
    this.state = state;
  }

  public DomainContactDetails state(String state) {
    this.state = state;
    return this;
  }

 /**
   * Organization name for the contact.
   * @return orgName
  **/
  @JsonProperty("org_name")
  @NotNull
  public String getOrgName() {
    return orgName;
  }

  public void setOrgName(String orgName) {
    this.orgName = orgName;
  }

  public DomainContactDetails orgName(String orgName) {
    this.orgName = orgName;
    return this;
  }

 /**
   * Two-letter country code for the contact.
   * @return country
  **/
  @JsonProperty("country")
  @NotNull
  public String getCountry() {
    return country;
  }

  public void setCountry(String country) {
    this.country = country;
  }

  public DomainContactDetails country(String country) {
    this.country = country;
    return this;
  }

 /**
   * Postal or ZIP code for the contact address.
   * @return postalCode
  **/
  @JsonProperty("postal_code")
  @NotNull
  public String getPostalCode() {
    return postalCode;
  }

  public void setPostalCode(String postalCode) {
    this.postalCode = postalCode;
  }

  public DomainContactDetails postalCode(String postalCode) {
    this.postalCode = postalCode;
    return this;
  }

 /**
   * Email address for the contact.
   * @return email
  **/
  @JsonProperty("email")
  @NotNull
  public String getEmail() {
    return email;
  }

  public void setEmail(String email) {
    this.email = email;
  }

  public DomainContactDetails email(String email) {
    this.email = email;
    return this;
  }

 /**
   * Fax number for the contact, if available.
   * @return fax
  **/
  @JsonProperty("fax")
  @NotNull
  public String getFax() {
    return fax;
  }

  public void setFax(String fax) {
    this.fax = fax;
  }

  public DomainContactDetails fax(String fax) {
    this.fax = fax;
    return this;
  }

 /**
   * Secondary street address line.
   * @return address2
  **/
  @JsonProperty("address2")
  @NotNull
  public String getAddress2() {
    return address2;
  }

  public void setAddress2(String address2) {
    this.address2 = address2;
  }

  public DomainContactDetails address2(String address2) {
    this.address2 = address2;
    return this;
  }

 /**
   * Tertiary street address line.
   * @return address3
  **/
  @JsonProperty("address3")
  @NotNull
  public String getAddress3() {
    return address3;
  }

  public void setAddress3(String address3) {
    this.address3 = address3;
  }

  public DomainContactDetails address3(String address3) {
    this.address3 = address3;
    return this;
  }

 /**
   * Primary street address line.
   * @return address1
  **/
  @JsonProperty("address1")
  @NotNull
  public String getAddress1() {
    return address1;
  }

  public void setAddress1(String address1) {
    this.address1 = address1;
  }

  public DomainContactDetails address1(String address1) {
    this.address1 = address1;
    return this;
  }

 /**
   * City for the contact address.
   * @return city
  **/
  @JsonProperty("city")
  @NotNull
  public String getCity() {
    return city;
  }

  public void setCity(String city) {
    this.city = city;
  }

  public DomainContactDetails city(String city) {
    this.city = city;
    return this;
  }

 /**
   * Phone number for the contact.
   * @return phone
  **/
  @JsonProperty("phone")
  @NotNull
  public String getPhone() {
    return phone;
  }

  public void setPhone(String phone) {
    this.phone = phone;
  }

  public DomainContactDetails phone(String phone) {
    this.phone = phone;
    return this;
  }

 /**
   * First name for the contact.
   * @return firstName
  **/
  @JsonProperty("first_name")
  @NotNull
  public String getFirstName() {
    return firstName;
  }

  public void setFirstName(String firstName) {
    this.firstName = firstName;
  }

  public DomainContactDetails firstName(String firstName) {
    this.firstName = firstName;
    return this;
  }

 /**
   * Last name for the contact.
   * @return lastName
  **/
  @JsonProperty("last_name")
  @NotNull
  public String getLastName() {
    return lastName;
  }

  public void setLastName(String lastName) {
    this.lastName = lastName;
  }

  public DomainContactDetails lastName(String lastName) {
    this.lastName = lastName;
    return this;
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
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
