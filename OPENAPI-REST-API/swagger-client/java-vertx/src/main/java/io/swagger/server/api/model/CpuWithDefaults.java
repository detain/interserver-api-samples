package io.swagger.server.api.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.server.api.model.Cpu;
import io.swagger.server.api.model.HardDrive;
import io.swagger.server.api.model.MemoryOption;
import java.math.BigDecimal;
import io.vertx.core.json.JsonObject;
import io.vertx.codegen.annotations.DataObject;
/**
 * CpuWithDefaults
 */




public class CpuWithDefaults extends Cpu  {
  private MemoryOption memoryDet = null;

  private HardDrive hdDet = null;

  private String monthlyFee = null;

  public CpuWithDefaults memoryDet(MemoryOption memoryDet) {
    this.memoryDet = memoryDet;
    return this;
  }

  /**
   * Get memoryDet
   * @return memoryDet
   **/
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
