package io.swagger.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import org.springframework.validation.annotation.Validated;
import org.openapitools.jackson.nullable.JsonNullable;
import io.swagger.configuration.NotUndefined;
import com.fasterxml.jackson.annotation.JsonInclude;
import com.fasterxml.jackson.annotation.JsonSetter;
import com.fasterxml.jackson.annotation.Nulls;
import javax.validation.Valid;
import javax.validation.constraints.*;

/**
 * InlineResponse20026Bandwidth
 */
@Validated
@NotUndefined



public class InlineResponse20026Bandwidth   {
  @JsonProperty("id")

  @JsonInclude(JsonInclude.Include.NON_ABSENT)  // Exclude from JSON if absent
  @JsonSetter(nulls = Nulls.FAIL)    // FAIL setting if the value is null
  private String id = null;

  @JsonProperty("short_desc")

  @JsonInclude(JsonInclude.Include.NON_ABSENT)  // Exclude from JSON if absent
  @JsonSetter(nulls = Nulls.FAIL)    // FAIL setting if the value is null
  private String shortDesc = null;

  @JsonProperty("long_desc")

  @JsonInclude(JsonInclude.Include.NON_ABSENT)  // Exclude from JSON if absent
  @JsonSetter(nulls = Nulls.FAIL)    // FAIL setting if the value is null
  private String longDesc = null;

  @JsonProperty("monthly_price")

  @JsonInclude(JsonInclude.Include.NON_ABSENT)  // Exclude from JSON if absent
  @JsonSetter(nulls = Nulls.FAIL)    // FAIL setting if the value is null
  private String monthlyPrice = null;


  public InlineResponse20026Bandwidth id(String id) { 

    this.id = id;
    return this;
  }

  /**
   * Get id
   * @return id
   **/
  
  @Schema(example = "10", description = "")
  
  public String getId() {  
    return id;
  }



  public void setId(String id) { 
    this.id = id;
  }

  public InlineResponse20026Bandwidth shortDesc(String shortDesc) { 

    this.shortDesc = shortDesc;
    return this;
  }

  /**
   * Get shortDesc
   * @return shortDesc
   **/
  
  @Schema(example = "1GBPS Unmetered", description = "")
  
  public String getShortDesc() {  
    return shortDesc;
  }



  public void setShortDesc(String shortDesc) { 
    this.shortDesc = shortDesc;
  }

  public InlineResponse20026Bandwidth longDesc(String longDesc) { 

    this.longDesc = longDesc;
    return this;
  }

  /**
   * Get longDesc
   * @return longDesc
   **/
  
  @Schema(description = "")
  
  public String getLongDesc() {  
    return longDesc;
  }



  public void setLongDesc(String longDesc) { 
    this.longDesc = longDesc;
  }

  public InlineResponse20026Bandwidth monthlyPrice(String monthlyPrice) { 

    this.monthlyPrice = monthlyPrice;
    return this;
  }

  /**
   * Get monthlyPrice
   * @return monthlyPrice
   **/
  
  @Schema(example = "0", description = "")
  
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
    InlineResponse20026Bandwidth inlineResponse20026Bandwidth = (InlineResponse20026Bandwidth) o;
    return Objects.equals(this.id, inlineResponse20026Bandwidth.id) &&
        Objects.equals(this.shortDesc, inlineResponse20026Bandwidth.shortDesc) &&
        Objects.equals(this.longDesc, inlineResponse20026Bandwidth.longDesc) &&
        Objects.equals(this.monthlyPrice, inlineResponse20026Bandwidth.monthlyPrice);
  }

  @Override
  public int hashCode() {
    return Objects.hash(id, shortDesc, longDesc, monthlyPrice);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class InlineResponse20026Bandwidth {\n");
    
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
