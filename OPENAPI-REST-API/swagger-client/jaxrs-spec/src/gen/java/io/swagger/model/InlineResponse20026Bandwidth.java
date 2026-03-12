package io.swagger.model;

import javax.validation.constraints.*;
import javax.validation.Valid;


import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class InlineResponse20026Bandwidth   {

  private @Valid String id = null;

  private @Valid String shortDesc = null;

  private @Valid String longDesc = null;

  private @Valid String monthlyPrice = null;

  /**
   **/
  public InlineResponse20026Bandwidth id(String id) {
    this.id = id;
    return this;
  }

  
  @ApiModelProperty(example = "10", value = "")
  @JsonProperty("id")
  @NotNull

  public String getId() {
    return id;
  }
  public void setId(String id) {
    this.id = id;
  }

  /**
   **/
  public InlineResponse20026Bandwidth shortDesc(String shortDesc) {
    this.shortDesc = shortDesc;
    return this;
  }

  
  @ApiModelProperty(example = "1GBPS Unmetered", value = "")
  @JsonProperty("short_desc")
  @NotNull

  public String getShortDesc() {
    return shortDesc;
  }
  public void setShortDesc(String shortDesc) {
    this.shortDesc = shortDesc;
  }

  /**
   **/
  public InlineResponse20026Bandwidth longDesc(String longDesc) {
    this.longDesc = longDesc;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("long_desc")
  @NotNull

  public String getLongDesc() {
    return longDesc;
  }
  public void setLongDesc(String longDesc) {
    this.longDesc = longDesc;
  }

  /**
   **/
  public InlineResponse20026Bandwidth monthlyPrice(String monthlyPrice) {
    this.monthlyPrice = monthlyPrice;
    return this;
  }

  
  @ApiModelProperty(example = "0", value = "")
  @JsonProperty("monthly_price")
  @NotNull

  public String getMonthlyPrice() {
    return monthlyPrice;
  }
  public void setMonthlyPrice(String monthlyPrice) {
    this.monthlyPrice = monthlyPrice;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    InlineResponse20026Bandwidth inlineResponse20026Bandwidth = (InlineResponse20026Bandwidth) o;
    return Objects.equals(id, inlineResponse20026Bandwidth.id) &&
        Objects.equals(shortDesc, inlineResponse20026Bandwidth.shortDesc) &&
        Objects.equals(longDesc, inlineResponse20026Bandwidth.longDesc) &&
        Objects.equals(monthlyPrice, inlineResponse20026Bandwidth.monthlyPrice);
  }

  @Override
  public int hashCode() {
    return Objects.hash(id, shortDesc, longDesc, monthlyPrice);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class InlineResponse20026Bandwidth {\n");
    
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
