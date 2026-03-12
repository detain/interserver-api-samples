package org.openapitools.model;


import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * Request to add a new creditcard into the system.
 */
@ApiModel(description="Request to add a new creditcard into the system.")

public class BillingAddCcRequest  {
  
  @ApiModelProperty(value = "")

  private String name;

  @ApiModelProperty(value = "")

  private String address;

  @ApiModelProperty(value = "")

  private String city;

  @ApiModelProperty(value = "")

  private String state;

  @ApiModelProperty(value = "")

  private String country;

  @ApiModelProperty(value = "")

  private String zip;

  @ApiModelProperty(value = "")

  private String cc;

  @ApiModelProperty(value = "")

  private String ccExp;

  @ApiModelProperty(value = "")

  private String ccCcv2;
 /**
   * Get name
   * @return name
  **/
  @JsonProperty("name")
  public String getName() {
    return name;
  }

  public void setName(String name) {
    this.name = name;
  }

  public BillingAddCcRequest name(String name) {
    this.name = name;
    return this;
  }

 /**
   * Get address
   * @return address
  **/
  @JsonProperty("address")
  public String getAddress() {
    return address;
  }

  public void setAddress(String address) {
    this.address = address;
  }

  public BillingAddCcRequest address(String address) {
    this.address = address;
    return this;
  }

 /**
   * Get city
   * @return city
  **/
  @JsonProperty("city")
  public String getCity() {
    return city;
  }

  public void setCity(String city) {
    this.city = city;
  }

  public BillingAddCcRequest city(String city) {
    this.city = city;
    return this;
  }

 /**
   * Get state
   * @return state
  **/
  @JsonProperty("state")
  public String getState() {
    return state;
  }

  public void setState(String state) {
    this.state = state;
  }

  public BillingAddCcRequest state(String state) {
    this.state = state;
    return this;
  }

 /**
   * Get country
   * @return country
  **/
  @JsonProperty("country")
  public String getCountry() {
    return country;
  }

  public void setCountry(String country) {
    this.country = country;
  }

  public BillingAddCcRequest country(String country) {
    this.country = country;
    return this;
  }

 /**
   * Get zip
   * @return zip
  **/
  @JsonProperty("zip")
  public String getZip() {
    return zip;
  }

  public void setZip(String zip) {
    this.zip = zip;
  }

  public BillingAddCcRequest zip(String zip) {
    this.zip = zip;
    return this;
  }

 /**
   * Get cc
   * @return cc
  **/
  @JsonProperty("cc")
  public String getCc() {
    return cc;
  }

  public void setCc(String cc) {
    this.cc = cc;
  }

  public BillingAddCcRequest cc(String cc) {
    this.cc = cc;
    return this;
  }

 /**
   * Get ccExp
   * @return ccExp
  **/
  @JsonProperty("cc_exp")
  public String getCcExp() {
    return ccExp;
  }

  public void setCcExp(String ccExp) {
    this.ccExp = ccExp;
  }

  public BillingAddCcRequest ccExp(String ccExp) {
    this.ccExp = ccExp;
    return this;
  }

 /**
   * Get ccCcv2
   * @return ccCcv2
  **/
  @JsonProperty("cc_ccv2")
  public String getCcCcv2() {
    return ccCcv2;
  }

  public void setCcCcv2(String ccCcv2) {
    this.ccCcv2 = ccCcv2;
  }

  public BillingAddCcRequest ccCcv2(String ccCcv2) {
    this.ccCcv2 = ccCcv2;
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
    BillingAddCcRequest billingAddCcRequest = (BillingAddCcRequest) o;
    return Objects.equals(this.name, billingAddCcRequest.name) &&
        Objects.equals(this.address, billingAddCcRequest.address) &&
        Objects.equals(this.city, billingAddCcRequest.city) &&
        Objects.equals(this.state, billingAddCcRequest.state) &&
        Objects.equals(this.country, billingAddCcRequest.country) &&
        Objects.equals(this.zip, billingAddCcRequest.zip) &&
        Objects.equals(this.cc, billingAddCcRequest.cc) &&
        Objects.equals(this.ccExp, billingAddCcRequest.ccExp) &&
        Objects.equals(this.ccCcv2, billingAddCcRequest.ccCcv2);
  }

  @Override
  public int hashCode() {
    return Objects.hash(name, address, city, state, country, zip, cc, ccExp, ccCcv2);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class BillingAddCcRequest {\n");
    
    sb.append("    name: ").append(toIndentedString(name)).append("\n");
    sb.append("    address: ").append(toIndentedString(address)).append("\n");
    sb.append("    city: ").append(toIndentedString(city)).append("\n");
    sb.append("    state: ").append(toIndentedString(state)).append("\n");
    sb.append("    country: ").append(toIndentedString(country)).append("\n");
    sb.append("    zip: ").append(toIndentedString(zip)).append("\n");
    sb.append("    cc: ").append(toIndentedString(cc)).append("\n");
    sb.append("    ccExp: ").append(toIndentedString(ccExp)).append("\n");
    sb.append("    ccCcv2: ").append(toIndentedString(ccCcv2)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private static String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

