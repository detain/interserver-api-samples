package io.swagger.server.api.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.server.api.model.DomainOrderResponse;
import io.swagger.server.api.model.DomainProvProcessPending;
import io.swagger.v3.oas.annotations.media.Schema;
import io.vertx.core.json.JsonObject;
import io.vertx.codegen.annotations.DataObject;
/**
 * Extended billing context for a domain including registrar order details and contact info.
 */




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

  public DomainBillingExtra order(DomainOrderResponse order) {
    this.order = order;
    return this;
  }

  /**
   * Get order
   * @return order
   **/
    public DomainOrderResponse getOrder() {
    return order;
  }

  public void setOrder(DomainOrderResponse order) {
    this.order = order;
  }

  public DomainBillingExtra orderId(String orderId) {
    this.orderId = orderId;
    return this;
  }

  /**
   * Get orderId
   * @return orderId
   **/
    public String getOrderId() {
    return orderId;
  }

  public void setOrderId(String orderId) {
    this.orderId = orderId;
  }

  public DomainBillingExtra domainId(String domainId) {
    this.domainId = domainId;
    return this;
  }

  /**
   * Get domainId
   * @return domainId
   **/
    public String getDomainId() {
    return domainId;
  }

  public void setDomainId(String domainId) {
    this.domainId = domainId;
  }

  public DomainBillingExtra provProcessPending(DomainProvProcessPending provProcessPending) {
    this.provProcessPending = provProcessPending;
    return this;
  }

  /**
   * Get provProcessPending
   * @return provProcessPending
   **/
    public DomainProvProcessPending getProvProcessPending() {
    return provProcessPending;
  }

  public void setProvProcessPending(DomainProvProcessPending provProcessPending) {
    this.provProcessPending = provProcessPending;
  }

  public DomainBillingExtra email(String email) {
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

  public DomainBillingExtra firstname(String firstname) {
    this.firstname = firstname;
    return this;
  }

  /**
   * Get firstname
   * @return firstname
   **/
    public String getFirstname() {
    return firstname;
  }

  public void setFirstname(String firstname) {
    this.firstname = firstname;
  }

  public DomainBillingExtra lastname(String lastname) {
    this.lastname = lastname;
    return this;
  }

  /**
   * Get lastname
   * @return lastname
   **/
    public String getLastname() {
    return lastname;
  }

  public void setLastname(String lastname) {
    this.lastname = lastname;
  }

  public DomainBillingExtra company(String company) {
    this.company = company;
    return this;
  }

  /**
   * Get company
   * @return company
   **/
    public String getCompany() {
    return company;
  }

  public void setCompany(String company) {
    this.company = company;
  }

  public DomainBillingExtra address(String address) {
    this.address = address;
    return this;
  }

  /**
   * Get address
   * @return address
   **/
    public String getAddress() {
    return address;
  }

  public void setAddress(String address) {
    this.address = address;
  }

  public DomainBillingExtra address2(String address2) {
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

  public DomainBillingExtra address3(String address3) {
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

  public DomainBillingExtra city(String city) {
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

  public DomainBillingExtra state(String state) {
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

  public DomainBillingExtra zip(String zip) {
    this.zip = zip;
    return this;
  }

  /**
   * Get zip
   * @return zip
   **/
    public String getZip() {
    return zip;
  }

  public void setZip(String zip) {
    this.zip = zip;
  }

  public DomainBillingExtra country(String country) {
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

  public DomainBillingExtra phone(String phone) {
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

  public DomainBillingExtra fax(String fax) {
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


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    DomainBillingExtra domainBillingExtra = (DomainBillingExtra) o;
    return Objects.equals(this.order, domainBillingExtra.order) &&
        Objects.equals(this.orderId, domainBillingExtra.orderId) &&
        Objects.equals(this.domainId, domainBillingExtra.domainId) &&
        Objects.equals(this.provProcessPending, domainBillingExtra.provProcessPending) &&
        Objects.equals(this.email, domainBillingExtra.email) &&
        Objects.equals(this.firstname, domainBillingExtra.firstname) &&
        Objects.equals(this.lastname, domainBillingExtra.lastname) &&
        Objects.equals(this.company, domainBillingExtra.company) &&
        Objects.equals(this.address, domainBillingExtra.address) &&
        Objects.equals(this.address2, domainBillingExtra.address2) &&
        Objects.equals(this.address3, domainBillingExtra.address3) &&
        Objects.equals(this.city, domainBillingExtra.city) &&
        Objects.equals(this.state, domainBillingExtra.state) &&
        Objects.equals(this.zip, domainBillingExtra.zip) &&
        Objects.equals(this.country, domainBillingExtra.country) &&
        Objects.equals(this.phone, domainBillingExtra.phone) &&
        Objects.equals(this.fax, domainBillingExtra.fax);
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
