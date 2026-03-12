package org.openapitools.model;

import java.math.BigDecimal;

import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class GetOrderDetail200ResponsePackageCosts  {
  
  @ApiModelProperty(example = "11552", value = "")

  private BigDecimal packageId;

  @ApiModelProperty(example = "5", value = "")

  private BigDecimal packageCost;

  @ApiModelProperty(example = "USD", value = "")

  private String currency;

  @ApiModelProperty(example = "$", value = "")

  private String currencySymbol;
 /**
   * Get packageId
   * @return packageId
  **/
  @JsonProperty("package_id")
  public BigDecimal getPackageId() {
    return packageId;
  }

  public void setPackageId(BigDecimal packageId) {
    this.packageId = packageId;
  }

  public GetOrderDetail200ResponsePackageCosts packageId(BigDecimal packageId) {
    this.packageId = packageId;
    return this;
  }

 /**
   * Get packageCost
   * @return packageCost
  **/
  @JsonProperty("package_cost")
  public BigDecimal getPackageCost() {
    return packageCost;
  }

  public void setPackageCost(BigDecimal packageCost) {
    this.packageCost = packageCost;
  }

  public GetOrderDetail200ResponsePackageCosts packageCost(BigDecimal packageCost) {
    this.packageCost = packageCost;
    return this;
  }

 /**
   * Get currency
   * @return currency
  **/
  @JsonProperty("currency")
  public String getCurrency() {
    return currency;
  }

  public void setCurrency(String currency) {
    this.currency = currency;
  }

  public GetOrderDetail200ResponsePackageCosts currency(String currency) {
    this.currency = currency;
    return this;
  }

 /**
   * Get currencySymbol
   * @return currencySymbol
  **/
  @JsonProperty("currencySymbol")
  public String getCurrencySymbol() {
    return currencySymbol;
  }

  public void setCurrencySymbol(String currencySymbol) {
    this.currencySymbol = currencySymbol;
  }

  public GetOrderDetail200ResponsePackageCosts currencySymbol(String currencySymbol) {
    this.currencySymbol = currencySymbol;
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
    GetOrderDetail200ResponsePackageCosts getOrderDetail200ResponsePackageCosts = (GetOrderDetail200ResponsePackageCosts) o;
    return Objects.equals(this.packageId, getOrderDetail200ResponsePackageCosts.packageId) &&
        Objects.equals(this.packageCost, getOrderDetail200ResponsePackageCosts.packageCost) &&
        Objects.equals(this.currency, getOrderDetail200ResponsePackageCosts.currency) &&
        Objects.equals(this.currencySymbol, getOrderDetail200ResponsePackageCosts.currencySymbol);
  }

  @Override
  public int hashCode() {
    return Objects.hash(packageId, packageCost, currency, currencySymbol);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class GetOrderDetail200ResponsePackageCosts {\n");
    
    sb.append("    packageId: ").append(toIndentedString(packageId)).append("\n");
    sb.append("    packageCost: ").append(toIndentedString(packageCost)).append("\n");
    sb.append("    currency: ").append(toIndentedString(currency)).append("\n");
    sb.append("    currencySymbol: ").append(toIndentedString(currencySymbol)).append("\n");
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

