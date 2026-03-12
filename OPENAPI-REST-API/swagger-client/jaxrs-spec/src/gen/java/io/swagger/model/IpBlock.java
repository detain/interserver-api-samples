package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;
import java.math.BigDecimal;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * An IP address block option available for a dedicated server configuration.
 **/
import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
@Schema(description = "An IP address block option available for a dedicated server configuration.")

public class IpBlock   {

  private @Valid Integer id = null;

  private @Valid String shortDesc = null;

  private @Valid String qty = null;

  private @Valid BigDecimal monthlyPrice = null;

  /**
   **/
  public IpBlock id(Integer id) {
    this.id = id;
    return this;
  }

  
  @ApiModelProperty(value = "")
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
  public IpBlock shortDesc(String shortDesc) {
    this.shortDesc = shortDesc;
    return this;
  }

  
  @ApiModelProperty(value = "")
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
  public IpBlock qty(String qty) {
    this.qty = qty;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("qty")
  @NotNull

  public String getQty() {
    return qty;
  }
  public void setQty(String qty) {
    this.qty = qty;
  }

  /**
   **/
  public IpBlock monthlyPrice(BigDecimal monthlyPrice) {
    this.monthlyPrice = monthlyPrice;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("monthly_price")
  @NotNull

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
    IpBlock ipBlock = (IpBlock) o;
    return Objects.equals(id, ipBlock.id) &&
        Objects.equals(shortDesc, ipBlock.shortDesc) &&
        Objects.equals(qty, ipBlock.qty) &&
        Objects.equals(monthlyPrice, ipBlock.monthlyPrice);
  }

  @Override
  public int hashCode() {
    return Objects.hash(id, shortDesc, qty, monthlyPrice);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class IpBlock {\n");
    
    sb.append("    id: ").append(toIndentedString(id)).append("\n");
    sb.append("    shortDesc: ").append(toIndentedString(shortDesc)).append("\n");
    sb.append("    qty: ").append(toIndentedString(qty)).append("\n");
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
