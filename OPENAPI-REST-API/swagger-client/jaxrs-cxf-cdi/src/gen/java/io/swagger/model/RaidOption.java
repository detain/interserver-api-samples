package io.swagger.model;

import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import java.math.BigDecimal;
import javax.validation.Valid;
import javax.validation.constraints.*;
/**
 * A RAID configuration option available for a dedicated server.
 **/
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.Objects;

import javax.xml.bind.annotation.*;

@Schema(description = "A RAID configuration option available for a dedicated server.")

public class RaidOption   {
  private Integer id = null;
  private String shortDesc = null;
  private BigDecimal monthlyPrice = null;

  /**
   **/
  public RaidOption id(Integer id) {
    this.id = id;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("id")
  @NotNull
  public Integer getId() {
    return id;
  }
  public void setId(Integer id) {
    this.id = id;
  }

  /**
   **/
  public RaidOption shortDesc(String shortDesc) {
    this.shortDesc = shortDesc;
    return this;
  }

  
  
  @Schema(description = "")
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
  public RaidOption monthlyPrice(BigDecimal monthlyPrice) {
    this.monthlyPrice = monthlyPrice;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("monthly_price")
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
    RaidOption raidOption = (RaidOption) o;
    return Objects.equals(id, raidOption.id) &&
        Objects.equals(shortDesc, raidOption.shortDesc) &&
        Objects.equals(monthlyPrice, raidOption.monthlyPrice);
  }

  @Override
  public int hashCode() {
    return Objects.hash(id, shortDesc, monthlyPrice);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class RaidOption {\n");
    
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
