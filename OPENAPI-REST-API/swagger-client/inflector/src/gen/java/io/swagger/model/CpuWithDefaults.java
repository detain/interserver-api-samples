package io.swagger.model;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.model.Cpu;
import io.swagger.model.HardDrive;
import io.swagger.model.MemoryOption;
import io.swagger.v3.oas.annotations.media.Schema;
import java.math.BigDecimal;





public class CpuWithDefaults extends Cpu  {
  @JsonProperty("memory_det")
  private MemoryOption memoryDet = null;
  @JsonProperty("hd_det")
  private HardDrive hdDet = null;
  @JsonProperty("monthly_fee")
  private String monthlyFee = null;
  /**
   **/
  public CpuWithDefaults memoryDet(MemoryOption memoryDet) {
    this.memoryDet = memoryDet;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("memory_det")
  public MemoryOption getMemoryDet() {
    return memoryDet;
  }
  public void setMemoryDet(MemoryOption memoryDet) {
    this.memoryDet = memoryDet;
  }

  /**
   **/
  public CpuWithDefaults hdDet(HardDrive hdDet) {
    this.hdDet = hdDet;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("hd_det")
  public HardDrive getHdDet() {
    return hdDet;
  }
  public void setHdDet(HardDrive hdDet) {
    this.hdDet = hdDet;
  }

  /**
   **/
  public CpuWithDefaults monthlyFee(String monthlyFee) {
    this.monthlyFee = monthlyFee;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("monthly_fee")
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
