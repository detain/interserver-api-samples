package org.openapitools.model;


import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * Contact details used for domain registrant/admin/technical/billing records.
 */
@ApiModel(description="Contact details used for domain registrant/admin/technical/billing records.")

public class DomainContactDetails  {
  
 /**
  * Contact status reported by the registrar.
  */
  @ApiModelProperty(value = "Contact status reported by the registrar.")

  private String status;

 /**
  * State or region for the contact address.
  */
  @ApiModelProperty(value = "State or region for the contact address.")

  private String state;

 /**
  * Organization name for the contact.
  */
  @ApiModelProperty(value = "Organization name for the contact.")

  private String orgName;

 /**
  * Two-letter country code for the contact.
  */
  @ApiModelProperty(value = "Two-letter country code for the contact.")

  private String country;

 /**
  * Postal or ZIP code for the contact address.
  */
  @ApiModelProperty(value = "Postal or ZIP code for the contact address.")

  private String postalCode;

 /**
  * Email address for the contact.
  */
  @ApiModelProperty(value = "Email address for the contact.")

  private String email;

 /**
  * Fax number for the contact, if available.
  */
  @ApiModelProperty(value = "Fax number for the contact, if available.")

  private String fax;

 /**
  * Secondary street address line.
  */
  @ApiModelProperty(value = "Secondary street address line.")

  private String address2;

 /**
  * Tertiary street address line.
  */
  @ApiModelProperty(value = "Tertiary street address line.")

  private String address3;

 /**
  * Primary street address line.
  */
  @ApiModelProperty(value = "Primary street address line.")

  private String address1;

 /**
  * City for the contact address.
  */
  @ApiModelProperty(value = "City for the contact address.")

  private String city;

 /**
  * Phone number for the contact.
  */
  @ApiModelProperty(value = "Phone number for the contact.")

  private String phone;

 /**
  * First name for the contact.
  */
  @ApiModelProperty(value = "First name for the contact.")

  private String firstName;

 /**
  * Last name for the contact.
  */
  @ApiModelProperty(value = "Last name for the contact.")

  private String lastName;
 /**
   * Contact status reported by the registrar.
   * @return status
  **/
  @JsonProperty("status")
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
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    DomainContactDetails domainContactDetails = (DomainContactDetails) o;
    return Objects.equals(this.status, domainContactDetails.status) &&
        Objects.equals(this.state, domainContactDetails.state) &&
        Objects.equals(this.orgName, domainContactDetails.orgName) &&
        Objects.equals(this.country, domainContactDetails.country) &&
        Objects.equals(this.postalCode, domainContactDetails.postalCode) &&
        Objects.equals(this.email, domainContactDetails.email) &&
        Objects.equals(this.fax, domainContactDetails.fax) &&
        Objects.equals(this.address2, domainContactDetails.address2) &&
        Objects.equals(this.address3, domainContactDetails.address3) &&
        Objects.equals(this.address1, domainContactDetails.address1) &&
        Objects.equals(this.city, domainContactDetails.city) &&
        Objects.equals(this.phone, domainContactDetails.phone) &&
        Objects.equals(this.firstName, domainContactDetails.firstName) &&
        Objects.equals(this.lastName, domainContactDetails.lastName);
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
  private static String toIndentedString(Object o) {
    return o == null ? "null" : o.toString().replace("\n", "\n    ");
  }
}

