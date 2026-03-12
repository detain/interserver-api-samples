package io.swagger.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.model.Cpu;
import io.swagger.model.HardDrive;
import io.swagger.model.MemoryOption;
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
 * CpuWithDefaults
 */
@Validated
@NotUndefined



public class CpuWithDefaults extends Cpu  {
  @JsonProperty("memory_det")

  @JsonInclude(JsonInclude.Include.NON_ABSENT)  // Exclude from JSON if absent
  @JsonSetter(nulls = Nulls.FAIL)    // FAIL setting if the value is null
  private MemoryOption memoryDet = null;

  @JsonProperty("hd_det")

  @JsonInclude(JsonInclude.Include.NON_ABSENT)  // Exclude from JSON if absent
  @JsonSetter(nulls = Nulls.FAIL)    // FAIL setting if the value is null
  private HardDrive hdDet = null;

  @JsonProperty("monthly_fee")

  @JsonInclude(JsonInclude.Include.NON_ABSENT)  // Exclude from JSON if absent
  @JsonSetter(nulls = Nulls.FAIL)    // FAIL setting if the value is null
  private String monthlyFee = null;


  public CpuWithDefaults memoryDet(MemoryOption memoryDet) { 

    this.memoryDet = memoryDet;
    return this;
  }

  /**
   * Get memoryDet
   * @return memoryDet
   **/
  
  @Schema(description = "")
  
@Valid
  public MemoryOption getMemoryDet() {  
    return memoryDet;
  }



  public void setMemoryDet(MemoryOption memoryDet) { 
    this.memoryDet = memoryDet;
  }

  public CpuWithDefaults hdDet(HardDrive hdDet) { 

    this.hdDet = hdDet;
    return this;
  }

  /**
   * Get hdDet
   * @return hdDet
   **/
  
  @Schema(description = "")
  
@Valid
  public HardDrive getHdDet() {  
    return hdDet;
  }



  public void setHdDet(HardDrive hdDet) { 
    this.hdDet = hdDet;
  }

  public CpuWithDefaults monthlyFee(String monthlyFee) { 

    this.monthlyFee = monthlyFee;
    return this;
  }

  /**
   * Get monthlyFee
   * @return monthlyFee
   **/
  
  @Schema(description = "")
  
  public String getMonthlyFee() {  
    return monthlyFee;
  }



  public void setMonthlyFee(String monthlyFee) { 
    this.monthlyFee = monthlyFee;
  }

  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    CpuWithDefaults cpuWithDefaults = (CpuWithDefaults) o;
    return Objects.equals(this.memoryDet, cpuWithDefaults.memoryDet) &&
        Objects.equals(this.hdDet, cpuWithDefaults.hdDet) &&
        Objects.equals(this.monthlyFee, cpuWithDefaults.monthlyFee) &&
        super.equals(o);
  }

  @Override
  public int hashCode() {
    return Objects.hash(memoryDet, hdDet, monthlyFee, super.hashCode());
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class CpuWithDefaults {\n");
    sb.append("    ").append(toIndentedString(super.toString())).append("\n");
    sb.append("    memoryDet: ").append(toIndentedString(memoryDet)).append("\n");
    sb.append("    hdDet: ").append(toIndentedString(hdDet)).append("\n");
    sb.append("    monthlyFee: ").append(toIndentedString(monthlyFee)).append("\n");
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
