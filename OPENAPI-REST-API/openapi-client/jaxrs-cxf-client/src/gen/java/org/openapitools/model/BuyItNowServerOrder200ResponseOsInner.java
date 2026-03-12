package org.openapitools.model;


import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class BuyItNowServerOrder200ResponseOsInner  {
  
  @ApiModelProperty(example = "5", value = "")

  private String id;

  @ApiModelProperty(example = "FreeBSD", value = "")

  private String shortDesc;

  @ApiModelProperty(example = "Latest FreeBSD 6.x OS<br><pre>CP(s): cPanel/DirectAdmin</pre>", value = "")

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

  public BuyItNowServerOrder200ResponseOsInner id(String id) {
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

  public BuyItNowServerOrder200ResponseOsInner shortDesc(String shortDesc) {
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

  public BuyItNowServerOrder200ResponseOsInner longDesc(String longDesc) {
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

  public BuyItNowServerOrder200ResponseOsInner monthlyPrice(String monthlyPrice) {
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
    BuyItNowServerOrder200ResponseOsInner buyItNowServerOrder200ResponseOsInner = (BuyItNowServerOrder200ResponseOsInner) o;
    return Objects.equals(this.id, buyItNowServerOrder200ResponseOsInner.id) &&
        Objects.equals(this.shortDesc, buyItNowServerOrder200ResponseOsInner.shortDesc) &&
        Objects.equals(this.longDesc, buyItNowServerOrder200ResponseOsInner.longDesc) &&
        Objects.equals(this.monthlyPrice, buyItNowServerOrder200ResponseOsInner.monthlyPrice);
  }

  @Override
  public int hashCode() {
    return Objects.hash(id, shortDesc, longDesc, monthlyPrice);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class BuyItNowServerOrder200ResponseOsInner {\n");
    
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

