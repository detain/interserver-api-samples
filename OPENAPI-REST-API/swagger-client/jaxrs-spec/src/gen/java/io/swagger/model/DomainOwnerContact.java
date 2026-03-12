package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * Contact details for the registered domain owner.
 **/
import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
@Schema(description = "Contact details for the registered domain owner.")

public class DomainOwnerContact   {

  private @Valid String postalCode = null;

  private @Valid String orgName = null;

  private @Valid String country = null;

  private @Valid String status = null;

  private @Valid String state = null;

  private @Valid String firstName = null;

  private @Valid String lastName = null;

  private @Valid String address3 = null;

  private @Valid String fax = null;

  private @Valid String address2 = null;

  private @Valid String email = null;

  private @Valid String city = null;

  private @Valid String phone = null;

  private @Valid String address1 = null;

  /**
   **/
  public DomainOwnerContact postalCode(String postalCode) {
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
  public DomainOwnerContact orgName(String orgName) {
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
  public DomainOwnerContact country(String country) {
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
  public DomainOwnerContact status(String status) {
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
  public DomainOwnerContact state(String state) {
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
  public DomainOwnerContact firstName(String firstName) {
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
  public DomainOwnerContact lastName(String lastName) {
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

  /**
   **/
  public DomainOwnerContact address3(String address3) {
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
  public DomainOwnerContact fax(String fax) {
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
  public DomainOwnerContact address2(String address2) {
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
  public DomainOwnerContact email(String email) {
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
  public DomainOwnerContact city(String city) {
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
  public DomainOwnerContact phone(String phone) {
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
  public DomainOwnerContact address1(String address1) {
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


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    DomainOwnerContact domainOwnerContact = (DomainOwnerContact) o;
    return Objects.equals(postalCode, domainOwnerContact.postalCode) &&
        Objects.equals(orgName, domainOwnerContact.orgName) &&
        Objects.equals(country, domainOwnerContact.country) &&
        Objects.equals(status, domainOwnerContact.status) &&
        Objects.equals(state, domainOwnerContact.state) &&
        Objects.equals(firstName, domainOwnerContact.firstName) &&
        Objects.equals(lastName, domainOwnerContact.lastName) &&
        Objects.equals(address3, domainOwnerContact.address3) &&
        Objects.equals(fax, domainOwnerContact.fax) &&
        Objects.equals(address2, domainOwnerContact.address2) &&
        Objects.equals(email, domainOwnerContact.email) &&
        Objects.equals(city, domainOwnerContact.city) &&
        Objects.equals(phone, domainOwnerContact.phone) &&
        Objects.equals(address1, domainOwnerContact.address1);
  }

  @Override
  public int hashCode() {
    return Objects.hash(postalCode, orgName, country, status, state, firstName, lastName, address3, fax, address2, email, city, phone, address1);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class DomainOwnerContact {\n");
    
    sb.append("    postalCode: ").append(toIndentedString(postalCode)).append("\n");
    sb.append("    orgName: ").append(toIndentedString(orgName)).append("\n");
    sb.append("    country: ").append(toIndentedString(country)).append("\n");
    sb.append("    status: ").append(toIndentedString(status)).append("\n");
    sb.append("    state: ").append(toIndentedString(state)).append("\n");
    sb.append("    firstName: ").append(toIndentedString(firstName)).append("\n");
    sb.append("    lastName: ").append(toIndentedString(lastName)).append("\n");
    sb.append("    address3: ").append(toIndentedString(address3)).append("\n");
    sb.append("    fax: ").append(toIndentedString(fax)).append("\n");
    sb.append("    address2: ").append(toIndentedString(address2)).append("\n");
    sb.append("    email: ").append(toIndentedString(email)).append("\n");
    sb.append("    city: ").append(toIndentedString(city)).append("\n");
    sb.append("    phone: ").append(toIndentedString(phone)).append("\n");
    sb.append("    address1: ").append(toIndentedString(address1)).append("\n");
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
