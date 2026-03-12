package io.swagger.model;

import io.swagger.model.AccountInfoMaxMindResponse;
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
  * Credit card information stored on the account.
 **/
@Schema(description="Credit card information stored on the account.")
public class AccountInfoDataCc   {
  
  @Schema(description = "")
  private String cc = null;
  
  @Schema(description = "")
  private String ccExp = null;
  
  @Schema(description = "")
  private String name = null;
  
  @Schema(description = "")
  private String address = null;
  
  @Schema(description = "")
  private String city = null;
  
  @Schema(description = "")
  private String state = null;
  
  @Schema(description = "")
  private String zip = null;
  
  @Schema(description = "")
  private String country = null;
  
  @Schema(description = "")
  private String maxmindRiskscore = null;
  
  @Schema(description = "")
  private AccountInfoMaxMindResponse maxmind = null;
  
  @Schema(description = "")
  private Boolean verified = null;
 /**
   * Get cc
   * @return cc
  **/
  @JsonProperty("cc")
  @NotNull
  public String getCc() {
    return cc;
  }

  public void setCc(String cc) {
    this.cc = cc;
  }

  public AccountInfoDataCc cc(String cc) {
    this.cc = cc;
    return this;
  }

 /**
   * Get ccExp
   * @return ccExp
  **/
  @JsonProperty("cc_exp")
  @NotNull
  public String getCcExp() {
    return ccExp;
  }

  public void setCcExp(String ccExp) {
    this.ccExp = ccExp;
  }

  public AccountInfoDataCc ccExp(String ccExp) {
    this.ccExp = ccExp;
    return this;
  }

 /**
   * Get name
   * @return name
  **/
  @JsonProperty("name")
  @NotNull
  public String getName() {
    return name;
  }

  public void setName(String name) {
    this.name = name;
  }

  public AccountInfoDataCc name(String name) {
    this.name = name;
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

  public AccountInfoDataCc address(String address) {
    this.address = address;
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

  public AccountInfoDataCc city(String city) {
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

  public AccountInfoDataCc state(String state) {
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

  public AccountInfoDataCc zip(String zip) {
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

  public AccountInfoDataCc country(String country) {
    this.country = country;
    return this;
  }

 /**
   * Get maxmindRiskscore
   * @return maxmindRiskscore
  **/
  @JsonProperty("maxmind_riskscore")
  @NotNull
  public String getMaxmindRiskscore() {
    return maxmindRiskscore;
  }

  public void setMaxmindRiskscore(String maxmindRiskscore) {
    this.maxmindRiskscore = maxmindRiskscore;
  }

  public AccountInfoDataCc maxmindRiskscore(String maxmindRiskscore) {
    this.maxmindRiskscore = maxmindRiskscore;
    return this;
  }

 /**
   * Get maxmind
   * @return maxmind
  **/
  @JsonProperty("maxmind")
  @NotNull
  public AccountInfoMaxMindResponse getMaxmind() {
    return maxmind;
  }

  public void setMaxmind(AccountInfoMaxMindResponse maxmind) {
    this.maxmind = maxmind;
  }

  public AccountInfoDataCc maxmind(AccountInfoMaxMindResponse maxmind) {
    this.maxmind = maxmind;
    return this;
  }

 /**
   * Get verified
   * @return verified
  **/
  @JsonProperty("verified")
  @NotNull
  public Boolean isVerified() {
    return verified;
  }

  public void setVerified(Boolean verified) {
    this.verified = verified;
  }

  public AccountInfoDataCc verified(Boolean verified) {
    this.verified = verified;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class AccountInfoDataCc {\n");
    
    sb.append("    cc: ").append(toIndentedString(cc)).append("\n");
    sb.append("    ccExp: ").append(toIndentedString(ccExp)).append("\n");
    sb.append("    name: ").append(toIndentedString(name)).append("\n");
    sb.append("    address: ").append(toIndentedString(address)).append("\n");
    sb.append("    city: ").append(toIndentedString(city)).append("\n");
    sb.append("    state: ").append(toIndentedString(state)).append("\n");
    sb.append("    zip: ").append(toIndentedString(zip)).append("\n");
    sb.append("    country: ").append(toIndentedString(country)).append("\n");
    sb.append("    maxmindRiskscore: ").append(toIndentedString(maxmindRiskscore)).append("\n");
    sb.append("    maxmind: ").append(toIndentedString(maxmind)).append("\n");
    sb.append("    verified: ").append(toIndentedString(verified)).append("\n");
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
