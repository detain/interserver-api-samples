package org.openapitools.model;


import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class BuyItNowServerOrder200ResponseBandwidthInner  {
  
  @ApiModelProperty(example = "10", value = "")

  private String id;

  @ApiModelProperty(example = "1GBPS Unmetered", value = "")

  private String shortDesc;

  @ApiModelProperty(example = "", value = "")

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

  public BuyItNowServerOrder200ResponseBandwidthInner id(String id) {
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

  public BuyItNowServerOrder200ResponseBandwidthInner shortDesc(String shortDesc) {
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

  public BuyItNowServerOrder200ResponseBandwidthInner longDesc(String longDesc) {
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

  public BuyItNowServerOrder200ResponseBandwidthInner monthlyPrice(String monthlyPrice) {
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
    BuyItNowServerOrder200ResponseBandwidthInner buyItNowServerOrder200ResponseBandwidthInner = (BuyItNowServerOrder200ResponseBandwidthInner) o;
    return Objects.equals(this.id, buyItNowServerOrder200ResponseBandwidthInner.id) &&
        Objects.equals(this.shortDesc, buyItNowServerOrder200ResponseBandwidthInner.shortDesc) &&
        Objects.equals(this.longDesc, buyItNowServerOrder200ResponseBandwidthInner.longDesc) &&
        Objects.equals(this.monthlyPrice, buyItNowServerOrder200ResponseBandwidthInner.monthlyPrice);
  }

  @Override
  public int hashCode() {
    return Objects.hash(id, shortDesc, longDesc, monthlyPrice);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class BuyItNowServerOrder200ResponseBandwidthInner {\n");
    
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
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

