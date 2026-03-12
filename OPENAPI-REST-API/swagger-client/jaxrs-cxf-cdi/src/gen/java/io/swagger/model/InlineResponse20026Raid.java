package io.swagger.model;

import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import javax.validation.constraints.*;

import io.swagger.v3.oas.annotations.media.Schema;
import java.util.Objects;

import javax.xml.bind.annotation.*;



public class InlineResponse20026Raid   {
  private String id = null;
  private String shortDesc = null;
  private String longDesc = null;
  private String monthlyPrice = null;

  /**
   **/
  public InlineResponse20026Raid id(String id) {
    this.id = id;
    return this;
  }

  
  
  @Schema(example = "0", description = "")
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
  public InlineResponse20026Raid shortDesc(String shortDesc) {
    this.shortDesc = shortDesc;
    return this;
  }

  
  
  @Schema(example = "No Raid", description = "")
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
  public InlineResponse20026Raid longDesc(String longDesc) {
    this.longDesc = longDesc;
    return this;
  }

  
  
  @Schema(example = "No Raid", description = "")
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
  public InlineResponse20026Raid monthlyPrice(String monthlyPrice) {
    this.monthlyPrice = monthlyPrice;
    return this;
  }

  
  
  @Schema(example = "0", description = "")
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
    InlineResponse20026Raid inlineResponse20026Raid = (InlineResponse20026Raid) o;
    return Objects.equals(id, inlineResponse20026Raid.id) &&
        Objects.equals(shortDesc, inlineResponse20026Raid.shortDesc) &&
        Objects.equals(longDesc, inlineResponse20026Raid.longDesc) &&
        Objects.equals(monthlyPrice, inlineResponse20026Raid.monthlyPrice);
  }

  @Override
  public int hashCode() {
    return Objects.hash(id, shortDesc, longDesc, monthlyPrice);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class InlineResponse20026Raid {\n");
    
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
