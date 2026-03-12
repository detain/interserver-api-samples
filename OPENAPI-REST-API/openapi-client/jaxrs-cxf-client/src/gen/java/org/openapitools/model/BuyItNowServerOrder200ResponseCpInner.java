package org.openapitools.model;


import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class BuyItNowServerOrder200ResponseCpInner  {
  
  @ApiModelProperty(example = "1", value = "")

  private String id;

  @ApiModelProperty(example = "None", value = "")

  private String shortDesc;

  @ApiModelProperty(example = "", value = "")

  private String longDesc;

  @ApiModelProperty(example = "", value = "")

  private String osType;

  @ApiModelProperty(example = "0", value = "")

  private String monthlyPrice;
 /**
   * Get id
   * @return id
  **/
  @JsonProperty("id")
  public String getId() {
    return id;
  }

  public void setId(String id) {
    this.id = id;
  }

  public BuyItNowServerOrder200ResponseCpInner id(String id) {
    this.id = id;
    return this;
  }

 /**
   * Get shortDesc
   * @return shortDesc
  **/
  @JsonProperty("short_desc")
  public String getShortDesc() {
    return shortDesc;
  }

  public void setShortDesc(String shortDesc) {
    this.shortDesc = shortDesc;
  }

  public BuyItNowServerOrder200ResponseCpInner shortDesc(String shortDesc) {
    this.shortDesc = shortDesc;
    return this;
  }

 /**
   * Get longDesc
   * @return longDesc
  **/
  @JsonProperty("long_desc")
  public String getLongDesc() {
    return longDesc;
  }

  public void setLongDesc(String longDesc) {
    this.longDesc = longDesc;
  }

  public BuyItNowServerOrder200ResponseCpInner longDesc(String longDesc) {
    this.longDesc = longDesc;
    return this;
  }

 /**
   * Get osType
   * @return osType
  **/
  @JsonProperty("os_type")
  public String getOsType() {
    return osType;
  }

  public void setOsType(String osType) {
    this.osType = osType;
  }

  public BuyItNowServerOrder200ResponseCpInner osType(String osType) {
    this.osType = osType;
    return this;
  }

 /**
   * Get monthlyPrice
   * @return monthlyPrice
  **/
  @JsonProperty("monthly_price")
  public String getMonthlyPrice() {
    return monthlyPrice;
  }

  public void setMonthlyPrice(String monthlyPrice) {
    this.monthlyPrice = monthlyPrice;
  }

  public BuyItNowServerOrder200ResponseCpInner monthlyPrice(String monthlyPrice) {
    this.monthlyPrice = monthlyPrice;
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
    BuyItNowServerOrder200ResponseCpInner buyItNowServerOrder200ResponseCpInner = (BuyItNowServerOrder200ResponseCpInner) o;
    return Objects.equals(this.id, buyItNowServerOrder200ResponseCpInner.id) &&
        Objects.equals(this.shortDesc, buyItNowServerOrder200ResponseCpInner.shortDesc) &&
        Objects.equals(this.longDesc, buyItNowServerOrder200ResponseCpInner.longDesc) &&
        Objects.equals(this.osType, buyItNowServerOrder200ResponseCpInner.osType) &&
        Objects.equals(this.monthlyPrice, buyItNowServerOrder200ResponseCpInner.monthlyPrice);
  }

  @Override
  public int hashCode() {
    return Objects.hash(id, shortDesc, longDesc, osType, monthlyPrice);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class BuyItNowServerOrder200ResponseCpInner {\n");
    
    sb.append("    id: ").append(toIndentedString(id)).append("\n");
    sb.append("    shortDesc: ").append(toIndentedString(shortDesc)).append("\n");
    sb.append("    longDesc: ").append(toIndentedString(longDesc)).append("\n");
    sb.append("    osType: ").append(toIndentedString(osType)).append("\n");
    sb.append("    monthlyPrice: ").append(toIndentedString(monthlyPrice)).append("\n");
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

