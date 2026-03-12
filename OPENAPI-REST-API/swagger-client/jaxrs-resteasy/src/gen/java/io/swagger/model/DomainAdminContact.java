package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;

@Schema(description="Administrative contact information for a domain registration.")

public class DomainAdminContact   {
  private String status = null;  private String state = null;  private String orgName = null;  private String country = null;  private String postalCode = null;  private String email = null;  private String fax = null;  private String address2 = null;  private String address3 = null;  private String address1 = null;  private String city = null;  private String phone = null;  private String firstName = null;  private String lastName = null;

  /**
   **/
  
  @Schema(description = "")
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
  
  @Schema(description = "")
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
  
  @Schema(description = "")
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
  
  @Schema(description = "")
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
  
  @Schema(description = "")
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
  
  @Schema(description = "")
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
  
  @Schema(description = "")
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
  
  @Schema(description = "")
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
  
  @Schema(description = "")
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
  
  @Schema(description = "")
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
  
  @Schema(description = "")
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
  
  @Schema(description = "")
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
  
  @Schema(description = "")
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
  
  @Schema(description = "")
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
    DomainAdminContact domainAdminContact = (DomainAdminContact) o;
    return Objects.equals(status, domainAdminContact.status) &&
        Objects.equals(state, domainAdminContact.state) &&
        Objects.equals(orgName, domainAdminContact.orgName) &&
        Objects.equals(country, domainAdminContact.country) &&
        Objects.equals(postalCode, domainAdminContact.postalCode) &&
        Objects.equals(email, domainAdminContact.email) &&
        Objects.equals(fax, domainAdminContact.fax) &&
        Objects.equals(address2, domainAdminContact.address2) &&
        Objects.equals(address3, domainAdminContact.address3) &&
        Objects.equals(address1, domainAdminContact.address1) &&
        Objects.equals(city, domainAdminContact.city) &&
        Objects.equals(phone, domainAdminContact.phone) &&
        Objects.equals(firstName, domainAdminContact.firstName) &&
        Objects.equals(lastName, domainAdminContact.lastName);
  }

  @Override
  public int hashCode() {
    return Objects.hash(status, state, orgName, country, postalCode, email, fax, address2, address3, address1, city, phone, firstName, lastName);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class DomainAdminContact {\n");
    
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
