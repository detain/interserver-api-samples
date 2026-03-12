package org.openapitools.model;

import java.math.BigDecimal;

import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * An IP address block option available for a dedicated server configuration.
 */
@ApiModel(description="An IP address block option available for a dedicated server configuration.")

public class IpBlock  {
  
  @ApiModelProperty(value = "")

  private Integer id;

  @ApiModelProperty(value = "")

  private String shortDesc;

  @ApiModelProperty(value = "")

  private String qty;

  @ApiModelProperty(value = "")

  private BigDecimal monthlyPrice;
 /**
   * Get id
   * @return id
  **/
  @JsonProperty("id")
  public Integer getId() {
    return id;
  }

  public void setId(Integer id) {
    this.id = id;
  }

  public IpBlock id(Integer id) {
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

  public IpBlock shortDesc(String shortDesc) {
    this.shortDesc = shortDesc;
    return this;
  }

 /**
   * Get qty
   * @return qty
  **/
  @JsonProperty("qty")
  public String getQty() {
    return qty;
  }

  public void setQty(String qty) {
    this.qty = qty;
  }

  public IpBlock qty(String qty) {
    this.qty = qty;
    return this;
  }

 /**
   * Get monthlyPrice
   * @return monthlyPrice
  **/
  @JsonProperty("monthly_price")
  public BigDecimal getMonthlyPrice() {
    return monthlyPrice;
  }

  public void setMonthlyPrice(BigDecimal monthlyPrice) {
    this.monthlyPrice = monthlyPrice;
  }

  public IpBlock monthlyPrice(BigDecimal monthlyPrice) {
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
    IpBlock ipBlock = (IpBlock) o;
    return Objects.equals(this.id, ipBlock.id) &&
        Objects.equals(this.shortDesc, ipBlock.shortDesc) &&
        Objects.equals(this.qty, ipBlock.qty) &&
        Objects.equals(this.monthlyPrice, ipBlock.monthlyPrice);
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
  private static String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

