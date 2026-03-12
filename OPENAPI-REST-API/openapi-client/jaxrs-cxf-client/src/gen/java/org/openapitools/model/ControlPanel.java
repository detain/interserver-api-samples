package org.openapitools.model;

import java.math.BigDecimal;

import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * A hosting control panel option (e.g., cPanel, Plesk) available for server provisioning.
 */
@ApiModel(description="A hosting control panel option (e.g., cPanel, Plesk) available for server provisioning.")

public class ControlPanel  {
  
  @ApiModelProperty(value = "")

  private Integer id;

  @ApiModelProperty(value = "")

  private String shortDesc;

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

  public ControlPanel id(Integer id) {
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

  public ControlPanel shortDesc(String shortDesc) {
    this.shortDesc = shortDesc;
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

  public ControlPanel monthlyPrice(BigDecimal monthlyPrice) {
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
  private static String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

