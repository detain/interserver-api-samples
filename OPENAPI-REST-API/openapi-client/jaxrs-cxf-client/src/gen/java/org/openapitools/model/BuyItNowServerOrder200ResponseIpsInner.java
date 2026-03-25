package org.openapitools.model;


import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class BuyItNowServerOrder200ResponseIpsInner  {
  
  @ApiModelProperty(example = "9", value = "")

  private String id;

  @ApiModelProperty(example = "1 Vlan Ip (/30)", value = "")

  private String shortDesc;

  @ApiModelProperty(example = "1 IP In personal Vlan", value = "")

  private String longDesc;

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

  public BuyItNowServerOrder200ResponseIpsInner id(String id) {
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

  public BuyItNowServerOrder200ResponseIpsInner shortDesc(String shortDesc) {
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

  public BuyItNowServerOrder200ResponseIpsInner longDesc(String longDesc) {
    this.longDesc = longDesc;
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

  public BuyItNowServerOrder200ResponseIpsInner monthlyPrice(String monthlyPrice) {
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
    BuyItNowServerOrder200ResponseIpsInner buyItNowServerOrder200ResponseIpsInner = (BuyItNowServerOrder200ResponseIpsInner) o;
    return Objects.equals(this.id, buyItNowServerOrder200ResponseIpsInner.id) &&
        Objects.equals(this.shortDesc, buyItNowServerOrder200ResponseIpsInner.shortDesc) &&
        Objects.equals(this.longDesc, buyItNowServerOrder200ResponseIpsInner.longDesc) &&
        Objects.equals(this.monthlyPrice, buyItNowServerOrder200ResponseIpsInner.monthlyPrice);
  }

  @Override
  public int hashCode() {
    return Objects.hash(id, shortDesc, longDesc, monthlyPrice);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class BuyItNowServerOrder200ResponseIpsInner {\n");
    
    sb.append("    id: ").append(toIndentedString(id)).append("\n");
    sb.append("    shortDesc: ").append(toIndentedString(shortDesc)).append("\n");
    sb.append("    longDesc: ").append(toIndentedString(longDesc)).append("\n");
    sb.append("    monthlyPrice: ").append(toIndentedString(monthlyPrice)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private static String toIndentedString(Object o) {
    return o == null ? "null" : o.toString().replace("\n", "\n    ");
  }
}

