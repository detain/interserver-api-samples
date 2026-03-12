package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.model.DomainOrderResponse;
import io.swagger.model.DomainProvProcessPending;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;

@Schema(description="Extended billing context for a domain including registrar order details and contact info.")

public class DomainBillingExtra   {
  private DomainOrderResponse order = null;
  private String orderId = null;
  private String domainId = null;
  private DomainProvProcessPending provProcessPending = null;
  private String email = null;
  private String firstname = null;
  private String lastname = null;
  private String company = null;
  private String address = null;
  private String address2 = null;
  private String address3 = null;
  private String city = null;
  private String state = null;
  private String zip = null;
  private String country = null;
  private String phone = null;
  private String fax = null;

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("order")
  @NotNull
  public DomainOrderResponse getOrder() {
    return order;
  }
  public void setOrder(DomainOrderResponse order) {
    this.order = order;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("order_id")
  @NotNull
  public String getOrderId() {
    return orderId;
  }
  public void setOrderId(String orderId) {
    this.orderId = orderId;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("domain_id")
  @NotNull
  public String getDomainId() {
    return domainId;
  }
  public void setDomainId(String domainId) {
    this.domainId = domainId;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("provProcessPending")
  @NotNull
  public DomainProvProcessPending getProvProcessPending() {
    return provProcessPending;
  }
  public void setProvProcessPending(DomainProvProcessPending provProcessPending) {
    this.provProcessPending = provProcessPending;
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
  @JsonProperty("firstname")
  @NotNull
  public String getFirstname() {
    return firstname;
  }
  public void setFirstname(String firstname) {
    this.firstname = firstname;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("lastname")
  @NotNull
  public String getLastname() {
    return lastname;
  }
  public void setLastname(String lastname) {
    this.lastname = lastname;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("company")
  @NotNull
  public String getCompany() {
    return company;
  }
  public void setCompany(String company) {
    this.company = company;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("address")
  @NotNull
  public String getAddress() {
    return address;
  }
  public void setAddress(String address) {
    this.address = address;
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
  @JsonProperty("zip")
  @NotNull
  public String getZip() {
    return zip;
  }
  public void setZip(String zip) {
    this.zip = zip;
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
  @JsonProperty("fax")
  @NotNull
  public String getFax() {
    return fax;
  }
  public void setFax(String fax) {
    this.fax = fax;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    DomainBillingExtra domainBillingExtra = (DomainBillingExtra) o;
    return Objects.equals(order, domainBillingExtra.order) &&
        Objects.equals(orderId, domainBillingExtra.orderId) &&
        Objects.equals(domainId, domainBillingExtra.domainId) &&
        Objects.equals(provProcessPending, domainBillingExtra.provProcessPending) &&
        Objects.equals(email, domainBillingExtra.email) &&
        Objects.equals(firstname, domainBillingExtra.firstname) &&
        Objects.equals(lastname, domainBillingExtra.lastname) &&
        Objects.equals(company, domainBillingExtra.company) &&
        Objects.equals(address, domainBillingExtra.address) &&
        Objects.equals(address2, domainBillingExtra.address2) &&
        Objects.equals(address3, domainBillingExtra.address3) &&
        Objects.equals(city, domainBillingExtra.city) &&
        Objects.equals(state, domainBillingExtra.state) &&
        Objects.equals(zip, domainBillingExtra.zip) &&
        Objects.equals(country, domainBillingExtra.country) &&
        Objects.equals(phone, domainBillingExtra.phone) &&
        Objects.equals(fax, domainBillingExtra.fax);
  }

  @Override
  public int hashCode() {
    return Objects.hash(order, orderId, domainId, provProcessPending, email, firstname, lastname, company, address, address2, address3, city, state, zip, country, phone, fax);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class DomainBillingExtra {\n");
    
    sb.append("    order: ").append(toIndentedString(order)).append("\n");
    sb.append("    orderId: ").append(toIndentedString(orderId)).append("\n");
    sb.append("    domainId: ").append(toIndentedString(domainId)).append("\n");
    sb.append("    provProcessPending: ").append(toIndentedString(provProcessPending)).append("\n");
    sb.append("    email: ").append(toIndentedString(email)).append("\n");
    sb.append("    firstname: ").append(toIndentedString(firstname)).append("\n");
    sb.append("    lastname: ").append(toIndentedString(lastname)).append("\n");
    sb.append("    company: ").append(toIndentedString(company)).append("\n");
    sb.append("    address: ").append(toIndentedString(address)).append("\n");
    sb.append("    address2: ").append(toIndentedString(address2)).append("\n");
    sb.append("    address3: ").append(toIndentedString(address3)).append("\n");
    sb.append("    city: ").append(toIndentedString(city)).append("\n");
    sb.append("    state: ").append(toIndentedString(state)).append("\n");
    sb.append("    zip: ").append(toIndentedString(zip)).append("\n");
    sb.append("    country: ").append(toIndentedString(country)).append("\n");
    sb.append("    phone: ").append(toIndentedString(phone)).append("\n");
    sb.append("    fax: ").append(toIndentedString(fax)).append("\n");
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
