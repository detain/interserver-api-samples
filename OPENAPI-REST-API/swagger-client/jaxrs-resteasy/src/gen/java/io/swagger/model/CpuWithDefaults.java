package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.model.Cpu;
import io.swagger.model.HardDrive;
import io.swagger.model.MemoryOption;
import java.math.BigDecimal;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;



public class CpuWithDefaults extends Cpu  {
  private MemoryOption memoryDet = null;  private HardDrive hdDet = null;  private String monthlyFee = null;

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("memory_det")
  @NotNull
  public MemoryOption getMemoryDet() {
    return memoryDet;
  }
  public void setMemoryDet(MemoryOption memoryDet) {
    this.memoryDet = memoryDet;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("hd_det")
  @NotNull
  public HardDrive getHdDet() {
    return hdDet;
  }
  public void setHdDet(HardDrive hdDet) {
    this.hdDet = hdDet;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("monthly_fee")
  @NotNull
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
    return Objects.equals(memoryDet, cpuWithDefaults.memoryDet) &&
        Objects.equals(hdDet, cpuWithDefaults.hdDet) &&
        Objects.equals(monthlyFee, cpuWithDefaults.monthlyFee);
  }

  @Override
  public int hashCode() {
    return Objects.hash(memoryDet, hdDet, monthlyFee);
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
