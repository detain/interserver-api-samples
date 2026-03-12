package io.swagger.model;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;


/**
 * Request to add a new creditcard into the system.
 **/
@Schema(description = "Request to add a new creditcard into the system.")


public class BillingAddCcRequest   {
  @JsonProperty("name")
  private String name = null;
  @JsonProperty("address")
  private String address = null;
  @JsonProperty("city")
  private String city = null;
  @JsonProperty("state")
  private String state = null;
  @JsonProperty("country")
  private String country = null;
  @JsonProperty("zip")
  private String zip = null;
  @JsonProperty("cc")
  private String cc = null;
  @JsonProperty("cc_exp")
  private String ccExp = null;
  @JsonProperty("cc_ccv2")
  private String ccCcv2 = null;
  /**
   **/
  public BillingAddCcRequest name(String name) {
    this.name = name;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("name")
  public String getName() {
    return name;
  }
  public void setName(String name) {
    this.name = name;
  }

  /**
   **/
  public BillingAddCcRequest address(String address) {
    this.address = address;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("address")
  public String getAddress() {
    return address;
  }
  public void setAddress(String address) {
    this.address = address;
  }

  /**
   **/
  public BillingAddCcRequest city(String city) {
    this.city = city;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("city")
  public String getCity() {
    return city;
  }
  public void setCity(String city) {
    this.city = city;
  }

  /**
   **/
  public BillingAddCcRequest state(String state) {
    this.state = state;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("state")
  public String getState() {
    return state;
  }
  public void setState(String state) {
    this.state = state;
  }

  /**
   **/
  public BillingAddCcRequest country(String country) {
    this.country = country;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("country")
  public String getCountry() {
    return country;
  }
  public void setCountry(String country) {
    this.country = country;
  }

  /**
   **/
  public BillingAddCcRequest zip(String zip) {
    this.zip = zip;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("zip")
  public String getZip() {
    return zip;
  }
  public void setZip(String zip) {
    this.zip = zip;
  }

  /**
   **/
  public BillingAddCcRequest cc(String cc) {
    this.cc = cc;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("cc")
  public String getCc() {
    return cc;
  }
  public void setCc(String cc) {
    this.cc = cc;
  }

  /**
   **/
  public BillingAddCcRequest ccExp(String ccExp) {
    this.ccExp = ccExp;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("cc_exp")
  public String getCcExp() {
    return ccExp;
  }
  public void setCcExp(String ccExp) {
    this.ccExp = ccExp;
  }

  /**
   **/
  public BillingAddCcRequest ccCcv2(String ccCcv2) {
    this.ccCcv2 = ccCcv2;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("cc_ccv2")
  public String getCcCcv2() {
    return ccCcv2;
  }
  public void setCcCcv2(String ccCcv2) {
    this.ccCcv2 = ccCcv2;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    BillingAddCcRequest billingAddCcRequest = (BillingAddCcRequest) o;
    return Objects.equals(name, billingAddCcRequest.name) &&
        Objects.equals(address, billingAddCcRequest.address) &&
        Objects.equals(city, billingAddCcRequest.city) &&
        Objects.equals(state, billingAddCcRequest.state) &&
        Objects.equals(country, billingAddCcRequest.country) &&
        Objects.equals(zip, billingAddCcRequest.zip) &&
        Objects.equals(cc, billingAddCcRequest.cc) &&
        Objects.equals(ccExp, billingAddCcRequest.ccExp) &&
        Objects.equals(ccCcv2, billingAddCcRequest.ccCcv2);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
