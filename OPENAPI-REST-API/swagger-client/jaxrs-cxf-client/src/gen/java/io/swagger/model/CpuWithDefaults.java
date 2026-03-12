package io.swagger.model;

import io.swagger.model.Cpu;
import io.swagger.model.HardDrive;
import io.swagger.model.MemoryOption;
import java.math.BigDecimal;

import io.swagger.v3.oas.annotations.media.Schema;
import javax.xml.bind.annotation.XmlElement;
import javax.xml.bind.annotation.XmlRootElement;
import javax.xml.bind.annotation.XmlAccessType;
import javax.xml.bind.annotation.XmlAccessorType;
import javax.xml.bind.annotation.XmlType;
import javax.xml.bind.annotation.XmlEnum;
import javax.xml.bind.annotation.XmlEnumValue;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonValue;
import com.fasterxml.jackson.annotation.JsonCreator;

public class CpuWithDefaults extends Cpu  {
  
  @Schema(description = "")
  private MemoryOption memoryDet = null;
  
  @Schema(description = "")
  private HardDrive hdDet = null;
  
  @Schema(description = "")
  private String monthlyFee = null;
 /**
   * Get memoryDet
   * @return memoryDet
  **/
  @JsonProperty("memory_det")
  public MemoryOption getMemoryDet() {
    return memoryDet;
  }

  public void setMemoryDet(MemoryOption memoryDet) {
    this.memoryDet = memoryDet;
  }

  public CpuWithDefaults memoryDet(MemoryOption memoryDet) {
    this.memoryDet = memoryDet;
    return this;
  }

 /**
   * Get hdDet
   * @return hdDet
  **/
  @JsonProperty("hd_det")
  public HardDrive getHdDet() {
    return hdDet;
  }

  public void setHdDet(HardDrive hdDet) {
    this.hdDet = hdDet;
  }

  public CpuWithDefaults hdDet(HardDrive hdDet) {
    this.hdDet = hdDet;
    return this;
  }

 /**
   * Get monthlyFee
   * @return monthlyFee
  **/
  @JsonProperty("monthly_fee")
  public String getMonthlyFee() {
    return monthlyFee;
  }

  public void setMonthlyFee(String monthlyFee) {
    this.monthlyFee = monthlyFee;
  }

  public CpuWithDefaults monthlyFee(String monthlyFee) {
    this.monthlyFee = monthlyFee;
    return this;
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
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
