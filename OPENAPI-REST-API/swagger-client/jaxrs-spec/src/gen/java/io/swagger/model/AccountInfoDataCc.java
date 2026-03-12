package io.swagger.model;

import io.swagger.model.AccountInfoMaxMindResponse;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * Credit card information stored on the account.
 **/
import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
@Schema(description = "Credit card information stored on the account.")

public class AccountInfoDataCc   {

  private @Valid String cc = null;

  private @Valid String ccExp = null;

  private @Valid String name = null;

  private @Valid String address = null;

  private @Valid String city = null;

  private @Valid String state = null;

  private @Valid String zip = null;

  private @Valid String country = null;

  private @Valid String maxmindRiskscore = null;

  private @Valid AccountInfoMaxMindResponse maxmind = null;

  private @Valid Boolean verified = null;

  /**
   **/
  public AccountInfoDataCc cc(String cc) {
    this.cc = cc;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("cc")
  @NotNull

  public String getCc() {
    return cc;
  }
  public void setCc(String cc) {
    this.cc = cc;
  }

  /**
   **/
  public AccountInfoDataCc ccExp(String ccExp) {
    this.ccExp = ccExp;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("cc_exp")
  @NotNull

  public String getCcExp() {
    return ccExp;
  }
  public void setCcExp(String ccExp) {
    this.ccExp = ccExp;
  }

  /**
   **/
  public AccountInfoDataCc name(String name) {
    this.name = name;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("name")
  @NotNull

  public String getName() {
    return name;
  }
  public void setName(String name) {
    this.name = name;
  }

  /**
   **/
  public AccountInfoDataCc address(String address) {
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
  public AccountInfoDataCc city(String city) {
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
  public AccountInfoDataCc state(String state) {
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
  public AccountInfoDataCc zip(String zip) {
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
  public AccountInfoDataCc country(String country) {
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
  public AccountInfoDataCc maxmindRiskscore(String maxmindRiskscore) {
    this.maxmindRiskscore = maxmindRiskscore;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("maxmind_riskscore")
  @NotNull

  public String getMaxmindRiskscore() {
    return maxmindRiskscore;
  }
  public void setMaxmindRiskscore(String maxmindRiskscore) {
    this.maxmindRiskscore = maxmindRiskscore;
  }

  /**
   **/
  public AccountInfoDataCc maxmind(AccountInfoMaxMindResponse maxmind) {
    this.maxmind = maxmind;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("maxmind")
  @NotNull

  public AccountInfoMaxMindResponse getMaxmind() {
    return maxmind;
  }
  public void setMaxmind(AccountInfoMaxMindResponse maxmind) {
    this.maxmind = maxmind;
  }

  /**
   **/
  public AccountInfoDataCc verified(Boolean verified) {
    this.verified = verified;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("verified")
  @NotNull

  public Boolean isVerified() {
    return verified;
  }
  public void setVerified(Boolean verified) {
    this.verified = verified;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    AccountInfoDataCc accountInfoDataCc = (AccountInfoDataCc) o;
    return Objects.equals(cc, accountInfoDataCc.cc) &&
        Objects.equals(ccExp, accountInfoDataCc.ccExp) &&
        Objects.equals(name, accountInfoDataCc.name) &&
        Objects.equals(address, accountInfoDataCc.address) &&
        Objects.equals(city, accountInfoDataCc.city) &&
        Objects.equals(state, accountInfoDataCc.state) &&
        Objects.equals(zip, accountInfoDataCc.zip) &&
        Objects.equals(country, accountInfoDataCc.country) &&
        Objects.equals(maxmindRiskscore, accountInfoDataCc.maxmindRiskscore) &&
        Objects.equals(maxmind, accountInfoDataCc.maxmind) &&
        Objects.equals(verified, accountInfoDataCc.verified);
  }

  @Override
  public int hashCode() {
    return Objects.hash(cc, ccExp, name, address, city, state, zip, country, maxmindRiskscore, maxmind, verified);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
