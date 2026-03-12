package io.swagger.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import java.math.BigDecimal;
import org.springframework.validation.annotation.Validated;
import org.openapitools.jackson.nullable.JsonNullable;
import io.swagger.configuration.NotUndefined;
import com.fasterxml.jackson.annotation.JsonInclude;
import com.fasterxml.jackson.annotation.JsonSetter;
import com.fasterxml.jackson.annotation.Nulls;
import javax.validation.Valid;
import javax.validation.constraints.*;

/**
 * InlineResponse20018PackageCosts
 */
@Validated
@NotUndefined



public class InlineResponse20018PackageCosts   {
  @JsonProperty("package_id")

  @JsonInclude(JsonInclude.Include.NON_ABSENT)  // Exclude from JSON if absent
  @JsonSetter(nulls = Nulls.FAIL)    // FAIL setting if the value is null
  private BigDecimal packageId = null;

  @JsonProperty("package_cost")

  @JsonInclude(JsonInclude.Include.NON_ABSENT)  // Exclude from JSON if absent
  @JsonSetter(nulls = Nulls.FAIL)    // FAIL setting if the value is null
  private BigDecimal packageCost = null;

  @JsonProperty("currency")

  @JsonInclude(JsonInclude.Include.NON_ABSENT)  // Exclude from JSON if absent
  @JsonSetter(nulls = Nulls.FAIL)    // FAIL setting if the value is null
  private String currency = null;

  @JsonProperty("currencySymbol")

  @JsonInclude(JsonInclude.Include.NON_ABSENT)  // Exclude from JSON if absent
  @JsonSetter(nulls = Nulls.FAIL)    // FAIL setting if the value is null
  private String currencySymbol = null;


  public InlineResponse20018PackageCosts packageId(BigDecimal packageId) { 

    this.packageId = packageId;
    return this;
  }

  /**
   * Get packageId
   * @return packageId
   **/
  
  @Schema(example = "11552", description = "")
  
@Valid
  public BigDecimal getPackageId() {  
    return packageId;
  }



  public void setPackageId(BigDecimal packageId) { 
    this.packageId = packageId;
  }

  public InlineResponse20018PackageCosts packageCost(BigDecimal packageCost) { 

    this.packageCost = packageCost;
    return this;
  }

  /**
   * Get packageCost
   * @return packageCost
   **/
  
  @Schema(example = "5", description = "")
  
@Valid
  public BigDecimal getPackageCost() {  
    return packageCost;
  }



  public void setPackageCost(BigDecimal packageCost) { 
    this.packageCost = packageCost;
  }

  public InlineResponse20018PackageCosts currency(String currency) { 

    this.currency = currency;
    return this;
  }

  /**
   * Get currency
   * @return currency
   **/
  
  @Schema(example = "USD", description = "")
  
  public String getCurrency() {  
    return currency;
  }



  public void setCurrency(String currency) { 
    this.currency = currency;
  }

  public InlineResponse20018PackageCosts currencySymbol(String currencySymbol) { 

    this.currencySymbol = currencySymbol;
    return this;
  }

  /**
   * Get currencySymbol
   * @return currencySymbol
   **/
  
  @Schema(example = "$", description = "")
  
  public String getCurrencySymbol() {  
    return currencySymbol;
  }



  public void setCurrencySymbol(String currencySymbol) { 
    this.currencySymbol = currencySymbol;
  }

  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    InlineResponse20018PackageCosts inlineResponse20018PackageCosts = (InlineResponse20018PackageCosts) o;
    return Objects.equals(this.packageId, inlineResponse20018PackageCosts.packageId) &&
        Objects.equals(this.packageCost, inlineResponse20018PackageCosts.packageCost) &&
        Objects.equals(this.currency, inlineResponse20018PackageCosts.currency) &&
        Objects.equals(this.currencySymbol, inlineResponse20018PackageCosts.currencySymbol);
  }

  @Override
  public int hashCode() {
    return Objects.hash(packageId, packageCost, currency, currencySymbol);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class InlineResponse20018PackageCosts {\n");
    
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
