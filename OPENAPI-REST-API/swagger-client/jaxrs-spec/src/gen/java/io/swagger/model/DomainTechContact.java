package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * Technical contact information for a domain registration.
 **/
import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
@Schema(description = "Technical contact information for a domain registration.")

public class DomainTechContact   {

  private @Valid String state = null;

  private @Valid String status = null;

  private @Valid String orgName = null;

  private @Valid String country = null;

  private @Valid String postalCode = null;

  private @Valid String fax = null;

  private @Valid String email = null;

  private @Valid String address2 = null;

  private @Valid String address3 = null;

  private @Valid String address1 = null;

  private @Valid String city = null;

  private @Valid String phone = null;

  private @Valid String firstName = null;

  private @Valid String lastName = null;

  /**
   **/
  public DomainTechContact state(String state) {
    this.state = state;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("state")
  @NotNull

  public String getState() {
    return state;
  }
  public void setState(String state) {
    this.state = state;
  }

  /**
   **/
  public DomainTechContact status(String status) {
    this.status = status;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("status")
  @NotNull

  public String getStatus() {
    return status;
  }
  public void setStatus(String status) {
    this.status = status;
  }

  /**
   **/
  public DomainTechContact orgName(String orgName) {
    this.orgName = orgName;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("org_name")
  @NotNull

  public String getOrgName() {
    return orgName;
  }
  public void setOrgName(String orgName) {
    this.orgName = orgName;
  }

  /**
   **/
  public DomainTechContact country(String country) {
    this.country = country;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("country")
  @NotNull

  public String getCountry() {
    return country;
  }
  public void setCountry(String country) {
    this.country = country;
  }

  /**
   **/
  public DomainTechContact postalCode(String postalCode) {
    this.postalCode = postalCode;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("postal_code")
  @NotNull

  public String getPostalCode() {
    return postalCode;
  }
  public void setPostalCode(String postalCode) {
    this.postalCode = postalCode;
  }

  /**
   **/
  public DomainTechContact fax(String fax) {
    this.fax = fax;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("fax")
  @NotNull

  public String getFax() {
    return fax;
  }
  public void setFax(String fax) {
    this.fax = fax;
  }

  /**
   **/
  public DomainTechContact email(String email) {
    this.email = email;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("email")
  @NotNull

  public String getEmail() {
    return email;
  }
  public void setEmail(String email) {
    this.email = email;
  }

  /**
   **/
  public DomainTechContact address2(String address2) {
    this.address2 = address2;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("address2")
  @NotNull

  public String getAddress2() {
    return address2;
  }
  public void setAddress2(String address2) {
    this.address2 = address2;
  }

  /**
   **/
  public DomainTechContact address3(String address3) {
    this.address3 = address3;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("address3")
  @NotNull

  public String getAddress3() {
    return address3;
  }
  public void setAddress3(String address3) {
    this.address3 = address3;
  }

  /**
   **/
  public DomainTechContact address1(String address1) {
    this.address1 = address1;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("address1")
  @NotNull

  public String getAddress1() {
    return address1;
  }
  public void setAddress1(String address1) {
    this.address1 = address1;
  }

  /**
   **/
  public DomainTechContact city(String city) {
    this.city = city;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("city")
  @NotNull

  public String getCity() {
    return city;
  }
  public void setCity(String city) {
    this.city = city;
  }

  /**
   **/
  public DomainTechContact phone(String phone) {
    this.phone = phone;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("phone")
  @NotNull

  public String getPhone() {
    return phone;
  }
  public void setPhone(String phone) {
    this.phone = phone;
  }

  /**
   **/
  public DomainTechContact firstName(String firstName) {
    this.firstName = firstName;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("first_name")
  @NotNull

  public String getFirstName() {
    return firstName;
  }
  public void setFirstName(String firstName) {
    this.firstName = firstName;
  }

  /**
   **/
  public DomainTechContact lastName(String lastName) {
    this.lastName = lastName;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("last_name")
  @NotNull

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
    return Objects.equals(state, domainTechContact.state) &&
        Objects.equals(status, domainTechContact.status) &&
        Objects.equals(orgName, domainTechContact.orgName) &&
        Objects.equals(country, domainTechContact.country) &&
        Objects.equals(postalCode, domainTechContact.postalCode) &&
        Objects.equals(fax, domainTechContact.fax) &&
        Objects.equals(email, domainTechContact.email) &&
        Objects.equals(address2, domainTechContact.address2) &&
        Objects.equals(address3, domainTechContact.address3) &&
        Objects.equals(address1, domainTechContact.address1) &&
        Objects.equals(city, domainTechContact.city) &&
        Objects.equals(phone, domainTechContact.phone) &&
        Objects.equals(firstName, domainTechContact.firstName) &&
        Objects.equals(lastName, domainTechContact.lastName);
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
