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
 * An IP address block option available for a dedicated server configuration.
 */
@Schema(description = "An IP address block option available for a dedicated server configuration.")
@Validated
@NotUndefined



public class IpBlock   {
  @JsonProperty("id")

  @JsonInclude(JsonInclude.Include.NON_ABSENT)  // Exclude from JSON if absent
  @JsonSetter(nulls = Nulls.FAIL)    // FAIL setting if the value is null
  private Integer id = null;

  @JsonProperty("short_desc")

  @JsonInclude(JsonInclude.Include.NON_ABSENT)  // Exclude from JSON if absent
  @JsonSetter(nulls = Nulls.FAIL)    // FAIL setting if the value is null
  private String shortDesc = null;

  @JsonProperty("qty")

  @JsonInclude(JsonInclude.Include.NON_ABSENT)  // Exclude from JSON if absent
  @JsonSetter(nulls = Nulls.FAIL)    // FAIL setting if the value is null
  private String qty = null;

  @JsonProperty("monthly_price")

  @JsonInclude(JsonInclude.Include.NON_ABSENT)  // Exclude from JSON if absent
  @JsonSetter(nulls = Nulls.FAIL)    // FAIL setting if the value is null
  private BigDecimal monthlyPrice = null;


  public IpBlock id(Integer id) { 

    this.id = id;
    return this;
  }

  /**
   * Get id
   * @return id
   **/
  
  @Schema(description = "")
  
  public Integer getId() {  
    return id;
  }



  public void setId(Integer id) { 
    this.id = id;
  }

  public IpBlock shortDesc(String shortDesc) { 

    this.shortDesc = shortDesc;
    return this;
  }

  /**
   * Get shortDesc
   * @return shortDesc
   **/
  
  @Schema(description = "")
  
  public String getShortDesc() {  
    return shortDesc;
  }



  public void setShortDesc(String shortDesc) { 
    this.shortDesc = shortDesc;
  }

  public IpBlock qty(String qty) { 

    this.qty = qty;
    return this;
  }

  /**
   * Get qty
   * @return qty
   **/
  
  @Schema(description = "")
  
  public String getQty() {  
    return qty;
  }



  public void setQty(String qty) { 
    this.qty = qty;
  }

  public IpBlock monthlyPrice(BigDecimal monthlyPrice) { 

    this.monthlyPrice = monthlyPrice;
    return this;
  }

  /**
   * Get monthlyPrice
   * @return monthlyPrice
   **/
  
  @Schema(description = "")
  
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
