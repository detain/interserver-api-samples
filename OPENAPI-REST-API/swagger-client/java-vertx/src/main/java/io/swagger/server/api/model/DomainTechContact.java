package io.swagger.server.api.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import io.vertx.core.json.JsonObject;
import io.vertx.codegen.annotations.DataObject;
/**
 * Technical contact information for a domain registration.
 */




public class DomainTechContact   {
  private String state = null;

  private String status = null;

  private String orgName = null;

  private String country = null;

  private String postalCode = null;

  private String fax = null;

  private String email = null;

  private String address2 = null;

  private String address3 = null;

  private String address1 = null;

  private String city = null;

  private String phone = null;

  private String firstName = null;

  private String lastName = null;

  public DomainTechContact state(String state) {
    this.state = state;
    return this;
  }

  /**
   * Get state
   * @return state
   **/
    public String getState() {
    return state;
  }

  public void setState(String state) {
    this.state = state;
  }

  public DomainTechContact status(String status) {
    this.status = status;
    return this;
  }

  /**
   * Get status
   * @return status
   **/
    public String getStatus() {
    return status;
  }

  public void setStatus(String status) {
    this.status = status;
  }

  public DomainTechContact orgName(String orgName) {
    this.orgName = orgName;
    return this;
  }

  /**
   * Get orgName
   * @return orgName
   **/
    public String getOrgName() {
    return orgName;
  }

  public void setOrgName(String orgName) {
    this.orgName = orgName;
  }

  public DomainTechContact country(String country) {
    this.country = country;
    return this;
  }

  /**
   * Get country
   * @return country
   **/
    public String getCountry() {
    return country;
  }

  public void setCountry(String country) {
    this.country = country;
  }

  public DomainTechContact postalCode(String postalCode) {
    this.postalCode = postalCode;
    return this;
  }

  /**
   * Get postalCode
   * @return postalCode
   **/
    public String getPostalCode() {
    return postalCode;
  }

  public void setPostalCode(String postalCode) {
    this.postalCode = postalCode;
  }

  public DomainTechContact fax(String fax) {
    this.fax = fax;
    return this;
  }

  /**
   * Get fax
   * @return fax
   **/
    public String getFax() {
    return fax;
  }

  public void setFax(String fax) {
    this.fax = fax;
  }

  public DomainTechContact email(String email) {
    this.email = email;
    return this;
  }

  /**
   * Get email
   * @return email
   **/
    public String getEmail() {
    return email;
  }

  public void setEmail(String email) {
    this.email = email;
  }

  public DomainTechContact address2(String address2) {
    this.address2 = address2;
    return this;
  }

  /**
   * Get address2
   * @return address2
   **/
    public String getAddress2() {
    return address2;
  }

  public void setAddress2(String address2) {
    this.address2 = address2;
  }

  public DomainTechContact address3(String address3) {
    this.address3 = address3;
    return this;
  }

  /**
   * Get address3
   * @return address3
   **/
    public String getAddress3() {
    return address3;
  }

  public void setAddress3(String address3) {
    this.address3 = address3;
  }

  public DomainTechContact address1(String address1) {
    this.address1 = address1;
    return this;
  }

  /**
   * Get address1
   * @return address1
   **/
    public String getAddress1() {
    return address1;
  }

  public void setAddress1(String address1) {
    this.address1 = address1;
  }

  public DomainTechContact city(String city) {
    this.city = city;
    return this;
  }

  /**
   * Get city
   * @return city
   **/
    public String getCity() {
    return city;
  }

  public void setCity(String city) {
    this.city = city;
  }

  public DomainTechContact phone(String phone) {
    this.phone = phone;
    return this;
  }

  /**
   * Get phone
   * @return phone
   **/
    public String getPhone() {
    return phone;
  }

  public void setPhone(String phone) {
    this.phone = phone;
  }

  public DomainTechContact firstName(String firstName) {
    this.firstName = firstName;
    return this;
  }

  /**
   * Get firstName
   * @return firstName
   **/
    public String getFirstName() {
    return firstName;
  }

  public void setFirstName(String firstName) {
    this.firstName = firstName;
  }

  public DomainTechContact lastName(String lastName) {
    this.lastName = lastName;
    return this;
  }

  /**
   * Get lastName
   * @return lastName
   **/
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
    DomainTechContact domainTechContact = (DomainTechContact) o;
    return Objects.equals(this.state, domainTechContact.state) &&
        Objects.equals(this.status, domainTechContact.status) &&
        Objects.equals(this.orgName, domainTechContact.orgName) &&
        Objects.equals(this.country, domainTechContact.country) &&
        Objects.equals(this.postalCode, domainTechContact.postalCode) &&
        Objects.equals(this.fax, domainTechContact.fax) &&
        Objects.equals(this.email, domainTechContact.email) &&
        Objects.equals(this.address2, domainTechContact.address2) &&
        Objects.equals(this.address3, domainTechContact.address3) &&
        Objects.equals(this.address1, domainTechContact.address1) &&
        Objects.equals(this.city, domainTechContact.city) &&
        Objects.equals(this.phone, domainTechContact.phone) &&
        Objects.equals(this.firstName, domainTechContact.firstName) &&
        Objects.equals(this.lastName, domainTechContact.lastName);
  }

  @Override
  public int hashCode() {
    return Objects.hash(state, status, orgName, country, postalCode, fax, email, address2, address3, address1, city, phone, firstName, lastName);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class DomainTechContact {\n");
    
    sb.append("    state: ").append(toIndentedString(state)).append("\n");
    sb.append("    status: ").append(toIndentedString(status)).append("\n");
    sb.append("    orgName: ").append(toIndentedString(orgName)).append("\n");
    sb.append("    country: ").append(toIndentedString(country)).append("\n");
    sb.append("    postalCode: ").append(toIndentedString(postalCode)).append("\n");
    sb.append("    fax: ").append(toIndentedString(fax)).append("\n");
    sb.append("    email: ").append(toIndentedString(email)).append("\n");
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
