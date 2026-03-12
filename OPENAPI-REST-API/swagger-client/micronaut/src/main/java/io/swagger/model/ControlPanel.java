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
 * A hosting control panel option (e.g., cPanel, Plesk) available for server provisioning.
 */
@Schema(description = "A hosting control panel option (e.g., cPanel, Plesk) available for server provisioning.")
@Validated
@Introspected

public class ControlPanel   {
  @JsonProperty("id")
  private Integer id = null;

  @JsonProperty("short_desc")
  private String shortDesc = null;

  @JsonProperty("monthly_price")
  private BigDecimal monthlyPrice = null;

  public ControlPanel id(Integer id) {
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

  public ControlPanel shortDesc(String shortDesc) {
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

  public ControlPanel monthlyPrice(BigDecimal monthlyPrice) {
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


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ControlPanel controlPanel = (ControlPanel) o;
    return Objects.equals(this.id, controlPanel.id) &&
        Objects.equals(this.shortDesc, controlPanel.shortDesc) &&
        Objects.equals(this.monthlyPrice, controlPanel.monthlyPrice);
  }

  @Override
  public int hashCode() {
    return Objects.hash(id, shortDesc, monthlyPrice);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ControlPanel {\n");
    
    sb.append("    id: ").append(toIndentedString(id)).append("\n");
    sb.append("    shortDesc: ").append(toIndentedString(shortDesc)).append("\n");
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
