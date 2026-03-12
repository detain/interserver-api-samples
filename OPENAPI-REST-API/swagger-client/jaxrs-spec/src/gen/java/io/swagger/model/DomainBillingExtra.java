package io.swagger.model;

import io.swagger.model.DomainOrderResponse;
import io.swagger.model.DomainProvProcessPending;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * Extended billing context for a domain including registrar order details and contact info.
 **/
import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
@Schema(description = "Extended billing context for a domain including registrar order details and contact info.")

public class DomainBillingExtra   {

  private @Valid DomainOrderResponse order = null;

  private @Valid String orderId = null;

  private @Valid String domainId = null;

  private @Valid DomainProvProcessPending provProcessPending = null;

  private @Valid String email = null;

  private @Valid String firstname = null;

  private @Valid String lastname = null;

  private @Valid String company = null;

  private @Valid String address = null;

  private @Valid String address2 = null;

  private @Valid String address3 = null;

  private @Valid String city = null;

  private @Valid String state = null;

  private @Valid String zip = null;

  private @Valid String country = null;

  private @Valid String phone = null;

  private @Valid String fax = null;

  /**
   **/
  public DomainBillingExtra order(DomainOrderResponse order) {
    this.order = order;
    return this;
  }

  
  @ApiModelProperty(value = "")
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
  public DomainBillingExtra orderId(String orderId) {
    this.orderId = orderId;
    return this;
  }

  
  @ApiModelProperty(value = "")
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
  public DomainBillingExtra domainId(String domainId) {
    this.domainId = domainId;
    return this;
  }

  
  @ApiModelProperty(value = "")
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
  public DomainBillingExtra provProcessPending(DomainProvProcessPending provProcessPending) {
    this.provProcessPending = provProcessPending;
    return this;
  }

  
  @ApiModelProperty(value = "")
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
  public DomainBillingExtra email(String email) {
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
  public DomainBillingExtra firstname(String firstname) {
    this.firstname = firstname;
    return this;
  }

  
  @ApiModelProperty(value = "")
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
  public DomainBillingExtra lastname(String lastname) {
    this.lastname = lastname;
    return this;
  }

  
  @ApiModelProperty(value = "")
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
  public DomainBillingExtra company(String company) {
    this.company = company;
    return this;
  }

  
  @ApiModelProperty(value = "")
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
  public DomainBillingExtra address(String address) {
    this.address = address;
    return this;
  }

  
  @ApiModelProperty(value = "")
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
  public DomainBillingExtra address2(String address2) {
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
  public DomainBillingExtra address3(String address3) {
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
  public DomainBillingExtra city(String city) {
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
  public DomainBillingExtra state(String state) {
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
  public DomainBillingExtra zip(String zip) {
    this.zip = zip;
    return this;
  }

  
  @ApiModelProperty(value = "")
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
  public DomainBillingExtra country(String country) {
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
  public DomainBillingExtra phone(String phone) {
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
  public DomainBillingExtra fax(String fax) {
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


  @Override
  public boolean equals(java.lang.Object o) {
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
