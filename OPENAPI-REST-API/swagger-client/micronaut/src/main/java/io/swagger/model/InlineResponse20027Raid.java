package io.swagger.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import io.micronaut.core.annotation.Introspected;
import io.micronaut.validation.Validated;
import javax.validation.Valid;
import javax.validation.constraints.*;

/**
 * InlineResponse20027Raid
 */
@Validated
@Introspected

public class InlineResponse20027Raid   {
  @JsonProperty("id")
  private String id = null;

  @JsonProperty("short_desc")
  private String shortDesc = null;

  @JsonProperty("long_desc")
  private String longDesc = null;

  @JsonProperty("monthly_price")
  private String monthlyPrice = null;

  public InlineResponse20027Raid id(String id) {
    this.id = id;
    return this;
  }

  /**
   * Get id
   * @return id
  **/
  @Schema(example = "0", description = "")
  @NotNull

  public String getId() {
    return id;
  }

  public void setId(String id) {
    this.id = id;
  }

  public InlineResponse20027Raid shortDesc(String shortDesc) {
    this.shortDesc = shortDesc;
    return this;
  }

  /**
   * Get shortDesc
   * @return shortDesc
  **/
  @Schema(example = "No Raid", description = "")
  @NotNull

  public String getShortDesc() {
    return shortDesc;
  }

  public void setShortDesc(String shortDesc) {
    this.shortDesc = shortDesc;
  }

  public InlineResponse20027Raid longDesc(String longDesc) {
    this.longDesc = longDesc;
    return this;
  }

  /**
   * Get longDesc
   * @return longDesc
  **/
  @Schema(example = "No Raid", description = "")
  @NotNull

  public String getLongDesc() {
    return longDesc;
  }

  public void setLongDesc(String longDesc) {
    this.longDesc = longDesc;
  }

  public InlineResponse20027Raid monthlyPrice(String monthlyPrice) {
    this.monthlyPrice = monthlyPrice;
    return this;
  }

  /**
   * Get monthlyPrice
   * @return monthlyPrice
  **/
  @Schema(example = "0", description = "")
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
    InlineResponse20027Raid inlineResponse20027Raid = (InlineResponse20027Raid) o;
    return Objects.equals(this.id, inlineResponse20027Raid.id) &&
        Objects.equals(this.shortDesc, inlineResponse20027Raid.shortDesc) &&
        Objects.equals(this.longDesc, inlineResponse20027Raid.longDesc) &&
        Objects.equals(this.monthlyPrice, inlineResponse20027Raid.monthlyPrice);
  }

  @Override
  public int hashCode() {
    return Objects.hash(id, shortDesc, longDesc, monthlyPrice);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class InlineResponse20027Raid {\n");
    
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
