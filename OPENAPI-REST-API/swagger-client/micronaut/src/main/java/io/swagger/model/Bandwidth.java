package io.swagger.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import java.math.BigDecimal;
import io.micronaut.core.annotation.Introspected;
import io.micronaut.validation.Validated;
import javax.validation.Valid;
import javax.validation.constraints.*;

/**
 * A bandwidth option available for a dedicated server configuration.
 */
@Schema(description = "A bandwidth option available for a dedicated server configuration.")
@Validated
@Introspected

public class Bandwidth   {
  @JsonProperty("id")
  private Integer id = null;

  @JsonProperty("short_desc")
  private String shortDesc = null;

  @JsonProperty("monthly_price")
  private BigDecimal monthlyPrice = null;

  @JsonProperty("monthly_price_display")
  private String monthlyPriceDisplay = null;

  public Bandwidth id(Integer id) {
    this.id = id;
    return this;
  }

  /**
   * Get id
   * @return id
  **/
  @Schema(description = "")
  @NotNull

  public Integer getId() {
    return id;
  }

  public void setId(Integer id) {
    this.id = id;
  }

  public Bandwidth shortDesc(String shortDesc) {
    this.shortDesc = shortDesc;
    return this;
  }

  /**
   * Get shortDesc
   * @return shortDesc
  **/
  @Schema(description = "")
  @NotNull

  public String getShortDesc() {
    return shortDesc;
  }

  public void setShortDesc(String shortDesc) {
    this.shortDesc = shortDesc;
  }

  public Bandwidth monthlyPrice(BigDecimal monthlyPrice) {
    this.monthlyPrice = monthlyPrice;
    return this;
  }

  /**
   * Get monthlyPrice
   * @return monthlyPrice
  **/
  @Schema(description = "")
  @NotNull

  @Valid
  public BigDecimal getMonthlyPrice() {
    return monthlyPrice;
  }

  public void setMonthlyPrice(BigDecimal monthlyPrice) {
    this.monthlyPrice = monthlyPrice;
  }

  public Bandwidth monthlyPriceDisplay(String monthlyPriceDisplay) {
    this.monthlyPriceDisplay = monthlyPriceDisplay;
    return this;
  }

  /**
   * Get monthlyPriceDisplay
   * @return monthlyPriceDisplay
  **/
  @Schema(description = "")
  @NotNull

  public String getMonthlyPriceDisplay() {
    return monthlyPriceDisplay;
  }

  public void setMonthlyPriceDisplay(String monthlyPriceDisplay) {
    this.monthlyPriceDisplay = monthlyPriceDisplay;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    Bandwidth bandwidth = (Bandwidth) o;
    return Objects.equals(this.id, bandwidth.id) &&
        Objects.equals(this.shortDesc, bandwidth.shortDesc) &&
        Objects.equals(this.monthlyPrice, bandwidth.monthlyPrice) &&
        Objects.equals(this.monthlyPriceDisplay, bandwidth.monthlyPriceDisplay);
  }

  @Override
  public int hashCode() {
    return Objects.hash(id, shortDesc, monthlyPrice, monthlyPriceDisplay);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class Bandwidth {\n");
    
    sb.append("    id: ").append(toIndentedString(id)).append("\n");
    sb.append("    shortDesc: ").append(toIndentedString(shortDesc)).append("\n");
    sb.append("    monthlyPrice: ").append(toIndentedString(monthlyPrice)).append("\n");
    sb.append("    monthlyPriceDisplay: ").append(toIndentedString(monthlyPriceDisplay)).append("\n");
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
