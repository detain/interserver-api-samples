package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import java.math.BigDecimal;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;

@Schema(description="A CPU option available for dedicated server ordering.")

public class Cpu   {
  private Integer id = null;
  private String shortDesc = null;
  private String longDesc = null;
  private String type = null;
  private String speed = null;
  private String numCores = null;
  private String numCpus = null;
  private String benchmark = null;
  private BigDecimal monthlyPrice = null;
  private String monthlyPriceDisplay = null;
  private String maxRam = null;
  private String minRam = null;
  private String maxLff = null;
  private String maxSff = null;
  private String maxNve = null;
  private String visible = null;
  private String active = null;

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("id")
  @NotNull
  public Integer getId() {
    return id;
  }
  public void setId(Integer id) {
    this.id = id;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("short_desc")
  @NotNull
  public String getShortDesc() {
    return shortDesc;
  }
  public void setShortDesc(String shortDesc) {
    this.shortDesc = shortDesc;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("long_desc")
  @NotNull
  public String getLongDesc() {
    return longDesc;
  }
  public void setLongDesc(String longDesc) {
    this.longDesc = longDesc;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("type")
  @NotNull
  public String getType() {
    return type;
  }
  public void setType(String type) {
    this.type = type;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("speed")
  @NotNull
  public String getSpeed() {
    return speed;
  }
  public void setSpeed(String speed) {
    this.speed = speed;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("num_cores")
  @NotNull
  public String getNumCores() {
    return numCores;
  }
  public void setNumCores(String numCores) {
    this.numCores = numCores;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("num_cpus")
  @NotNull
  public String getNumCpus() {
    return numCpus;
  }
  public void setNumCpus(String numCpus) {
    this.numCpus = numCpus;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("benchmark")
  @NotNull
  public String getBenchmark() {
    return benchmark;
  }
  public void setBenchmark(String benchmark) {
    this.benchmark = benchmark;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("monthly_price")
  @NotNull
  public BigDecimal getMonthlyPrice() {
    return monthlyPrice;
  }
  public void setMonthlyPrice(BigDecimal monthlyPrice) {
    this.monthlyPrice = monthlyPrice;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("monthly_price_display")
  @NotNull
  public String getMonthlyPriceDisplay() {
    return monthlyPriceDisplay;
  }
  public void setMonthlyPriceDisplay(String monthlyPriceDisplay) {
    this.monthlyPriceDisplay = monthlyPriceDisplay;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("max_ram")
  @NotNull
  public String getMaxRam() {
    return maxRam;
  }
  public void setMaxRam(String maxRam) {
    this.maxRam = maxRam;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("min_ram")
  @NotNull
  public String getMinRam() {
    return minRam;
  }
  public void setMinRam(String minRam) {
    this.minRam = minRam;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("max_lff")
  @NotNull
  public String getMaxLff() {
    return maxLff;
  }
  public void setMaxLff(String maxLff) {
    this.maxLff = maxLff;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("max_sff")
  @NotNull
  public String getMaxSff() {
    return maxSff;
  }
  public void setMaxSff(String maxSff) {
    this.maxSff = maxSff;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("max_nve")
  @NotNull
  public String getMaxNve() {
    return maxNve;
  }
  public void setMaxNve(String maxNve) {
    this.maxNve = maxNve;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("visible")
  @NotNull
  public String getVisible() {
    return visible;
  }
  public void setVisible(String visible) {
    this.visible = visible;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("active")
  @NotNull
  public String getActive() {
    return active;
  }
  public void setActive(String active) {
    this.active = active;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    Cpu cpu = (Cpu) o;
    return Objects.equals(id, cpu.id) &&
        Objects.equals(shortDesc, cpu.shortDesc) &&
        Objects.equals(longDesc, cpu.longDesc) &&
        Objects.equals(type, cpu.type) &&
        Objects.equals(speed, cpu.speed) &&
        Objects.equals(numCores, cpu.numCores) &&
        Objects.equals(numCpus, cpu.numCpus) &&
        Objects.equals(benchmark, cpu.benchmark) &&
        Objects.equals(monthlyPrice, cpu.monthlyPrice) &&
        Objects.equals(monthlyPriceDisplay, cpu.monthlyPriceDisplay) &&
        Objects.equals(maxRam, cpu.maxRam) &&
        Objects.equals(minRam, cpu.minRam) &&
        Objects.equals(maxLff, cpu.maxLff) &&
        Objects.equals(maxSff, cpu.maxSff) &&
        Objects.equals(maxNve, cpu.maxNve) &&
        Objects.equals(visible, cpu.visible) &&
        Objects.equals(active, cpu.active);
  }

  @Override
  public int hashCode() {
    return Objects.hash(id, shortDesc, longDesc, type, speed, numCores, numCpus, benchmark, monthlyPrice, monthlyPriceDisplay, maxRam, minRam, maxLff, maxSff, maxNve, visible, active);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class Cpu {\n");
    
    sb.append("    id: ").append(toIndentedString(id)).append("\n");
    sb.append("    shortDesc: ").append(toIndentedString(shortDesc)).append("\n");
    sb.append("    longDesc: ").append(toIndentedString(longDesc)).append("\n");
    sb.append("    type: ").append(toIndentedString(type)).append("\n");
    sb.append("    speed: ").append(toIndentedString(speed)).append("\n");
    sb.append("    numCores: ").append(toIndentedString(numCores)).append("\n");
    sb.append("    numCpus: ").append(toIndentedString(numCpus)).append("\n");
    sb.append("    benchmark: ").append(toIndentedString(benchmark)).append("\n");
    sb.append("    monthlyPrice: ").append(toIndentedString(monthlyPrice)).append("\n");
    sb.append("    monthlyPriceDisplay: ").append(toIndentedString(monthlyPriceDisplay)).append("\n");
    sb.append("    maxRam: ").append(toIndentedString(maxRam)).append("\n");
    sb.append("    minRam: ").append(toIndentedString(minRam)).append("\n");
    sb.append("    maxLff: ").append(toIndentedString(maxLff)).append("\n");
    sb.append("    maxSff: ").append(toIndentedString(maxSff)).append("\n");
    sb.append("    maxNve: ").append(toIndentedString(maxNve)).append("\n");
    sb.append("    visible: ").append(toIndentedString(visible)).append("\n");
    sb.append("    active: ").append(toIndentedString(active)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
