package io.swagger.model;

import io.swagger.model.DomainOrderResponse;
import io.swagger.model.DomainProvProcessPending;
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
  * Extended billing context for a domain including registrar order details and contact info.
 **/
@Schema(description="Extended billing context for a domain including registrar order details and contact info.")
public class DomainBillingExtra   {
  
  @Schema(description = "")
  private DomainOrderResponse order = null;
  
  @Schema(description = "")
  private String orderId = null;
  
  @Schema(description = "")
  private String domainId = null;
  
  @Schema(description = "")
  private DomainProvProcessPending provProcessPending = null;
  
  @Schema(description = "")
  private String email = null;
  
  @Schema(description = "")
  private String firstname = null;
  
  @Schema(description = "")
  private String lastname = null;
  
  @Schema(description = "")
  private String company = null;
  
  @Schema(description = "")
  private String address = null;
  
  @Schema(description = "")
  private String address2 = null;
  
  @Schema(description = "")
  private String address3 = null;
  
  @Schema(description = "")
  private String city = null;
  
  @Schema(description = "")
  private String state = null;
  
  @Schema(description = "")
  private String zip = null;
  
  @Schema(description = "")
  private String country = null;
  
  @Schema(description = "")
  private String phone = null;
  
  @Schema(description = "")
  private String fax = null;
 /**
   * Get order
   * @return order
  **/
  @JsonProperty("order")
  @NotNull
  public DomainOrderResponse getOrder() {
    return order;
  }

  public void setOrder(DomainOrderResponse order) {
    this.order = order;
  }

  public DomainBillingExtra order(DomainOrderResponse order) {
    this.order = order;
    return this;
  }

 /**
   * Get orderId
   * @return orderId
  **/
  @JsonProperty("order_id")
  @NotNull
  public String getOrderId() {
    return orderId;
  }

  public void setOrderId(String orderId) {
    this.orderId = orderId;
  }

  public DomainBillingExtra orderId(String orderId) {
    this.orderId = orderId;
    return this;
  }

 /**
   * Get domainId
   * @return domainId
  **/
  @JsonProperty("domain_id")
  @NotNull
  public String getDomainId() {
    return domainId;
  }

  public void setDomainId(String domainId) {
    this.domainId = domainId;
  }

  public DomainBillingExtra domainId(String domainId) {
    this.domainId = domainId;
    return this;
  }

 /**
   * Get provProcessPending
   * @return provProcessPending
  **/
  @JsonProperty("provProcessPending")
  @NotNull
  public DomainProvProcessPending getProvProcessPending() {
    return provProcessPending;
  }

  public void setProvProcessPending(DomainProvProcessPending provProcessPending) {
    this.provProcessPending = provProcessPending;
  }

  public DomainBillingExtra provProcessPending(DomainProvProcessPending provProcessPending) {
    this.provProcessPending = provProcessPending;
    return this;
  }

 /**
   * Get email
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

  public DomainBillingExtra email(String email) {
    this.email = email;
    return this;
  }

 /**
   * Get firstname
   * @return firstname
  **/
  @JsonProperty("firstname")
  @NotNull
  public String getFirstname() {
    return firstname;
  }

  public void setFirstname(String firstname) {
    this.firstname = firstname;
  }

  public DomainBillingExtra firstname(String firstname) {
    this.firstname = firstname;
    return this;
  }

 /**
   * Get lastname
   * @return lastname
  **/
  @JsonProperty("lastname")
  @NotNull
  public String getLastname() {
    return lastname;
  }

  public void setLastname(String lastname) {
    this.lastname = lastname;
  }

  public DomainBillingExtra lastname(String lastname) {
    this.lastname = lastname;
    return this;
  }

 /**
   * Get company
   * @return company
  **/
  @JsonProperty("company")
  @NotNull
  public String getCompany() {
    return company;
  }

  public void setCompany(String company) {
    this.company = company;
  }

  public DomainBillingExtra company(String company) {
    this.company = company;
    return this;
  }

 /**
   * Get address
   * @return address
  **/
  @JsonProperty("address")
  @NotNull
  public String getAddress() {
    return address;
  }

  public void setAddress(String address) {
    this.address = address;
  }

  public DomainBillingExtra address(String address) {
    this.address = address;
    return this;
  }

 /**
   * Get address2
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

  public DomainBillingExtra address2(String address2) {
    this.address2 = address2;
    return this;
  }

 /**
   * Get address3
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

  public DomainBillingExtra address3(String address3) {
    this.address3 = address3;
    return this;
  }

 /**
   * Get city
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

  public DomainBillingExtra city(String city) {
    this.city = city;
    return this;
  }

 /**
   * Get state
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

  public DomainBillingExtra state(String state) {
    this.state = state;
    return this;
  }

 /**
   * Get zip
   * @return zip
  **/
  @JsonProperty("zip")
  @NotNull
  public String getZip() {
    return zip;
  }

  public void setZip(String zip) {
    this.zip = zip;
  }

  public DomainBillingExtra zip(String zip) {
    this.zip = zip;
    return this;
  }

 /**
   * Get country
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

  public DomainBillingExtra country(String country) {
    this.country = country;
    return this;
  }

 /**
   * Get phone
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

  public DomainBillingExtra phone(String phone) {
    this.phone = phone;
    return this;
  }

 /**
   * Get fax
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

  public DomainBillingExtra fax(String fax) {
    this.fax = fax;
    return this;
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
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
