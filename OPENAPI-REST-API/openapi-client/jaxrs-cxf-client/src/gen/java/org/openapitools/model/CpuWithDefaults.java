package org.openapitools.model;

import java.math.BigDecimal;
import org.openapitools.model.HardDrive;
import org.openapitools.model.MemoryOption;

import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class CpuWithDefaults  {
  
  @ApiModelProperty(value = "")

  private Integer id;

  @ApiModelProperty(value = "")

  private String shortDesc;

  @ApiModelProperty(value = "")

  private String longDesc;

  @ApiModelProperty(value = "")

  private String type;

  @ApiModelProperty(value = "")

  private String speed;

  @ApiModelProperty(value = "")

  private String numCores;

  @ApiModelProperty(value = "")

  private String numCpus;

  @ApiModelProperty(value = "")

  private String benchmark;

  @ApiModelProperty(value = "")

  private BigDecimal monthlyPrice;

  @ApiModelProperty(value = "")

  private String monthlyPriceDisplay;

  @ApiModelProperty(value = "")

  private String maxRam;

  @ApiModelProperty(value = "")

  private String minRam;

  @ApiModelProperty(value = "")

  private String maxLff;

  @ApiModelProperty(value = "")

  private String maxSff;

  @ApiModelProperty(value = "")

  private String maxNve;

  @ApiModelProperty(value = "")

  private String visible;

  @ApiModelProperty(value = "")

  private String active;

  @ApiModelProperty(value = "")

  private MemoryOption memoryDet;

  @ApiModelProperty(value = "")

  private HardDrive hdDet;

  @ApiModelProperty(value = "")

  private String monthlyFee;
 /**
   * Get id
   * @return id
  **/
  @JsonProperty("id")
  public Integer getId() {
    return id;
  }

  public void setId(Integer id) {
    this.id = id;
  }

  public CpuWithDefaults id(Integer id) {
    this.id = id;
    return this;
  }

 /**
   * Get shortDesc
   * @return shortDesc
  **/
  @JsonProperty("short_desc")
  public String getShortDesc() {
    return shortDesc;
  }

  public void setShortDesc(String shortDesc) {
    this.shortDesc = shortDesc;
  }

  public CpuWithDefaults shortDesc(String shortDesc) {
    this.shortDesc = shortDesc;
    return this;
  }

 /**
   * Get longDesc
   * @return longDesc
  **/
  @JsonProperty("long_desc")
  public String getLongDesc() {
    return longDesc;
  }

  public void setLongDesc(String longDesc) {
    this.longDesc = longDesc;
  }

  public CpuWithDefaults longDesc(String longDesc) {
    this.longDesc = longDesc;
    return this;
  }

 /**
   * Get type
   * @return type
  **/
  @JsonProperty("type")
  public String getType() {
    return type;
  }

  public void setType(String type) {
    this.type = type;
  }

  public CpuWithDefaults type(String type) {
    this.type = type;
    return this;
  }

 /**
   * Get speed
   * @return speed
  **/
  @JsonProperty("speed")
  public String getSpeed() {
    return speed;
  }

  public void setSpeed(String speed) {
    this.speed = speed;
  }

  public CpuWithDefaults speed(String speed) {
    this.speed = speed;
    return this;
  }

 /**
   * Get numCores
   * @return numCores
  **/
  @JsonProperty("num_cores")
  public String getNumCores() {
    return numCores;
  }

  public void setNumCores(String numCores) {
    this.numCores = numCores;
  }

  public CpuWithDefaults numCores(String numCores) {
    this.numCores = numCores;
    return this;
  }

 /**
   * Get numCpus
   * @return numCpus
  **/
  @JsonProperty("num_cpus")
  public String getNumCpus() {
    return numCpus;
  }

  public void setNumCpus(String numCpus) {
    this.numCpus = numCpus;
  }

  public CpuWithDefaults numCpus(String numCpus) {
    this.numCpus = numCpus;
    return this;
  }

 /**
   * Get benchmark
   * @return benchmark
  **/
  @JsonProperty("benchmark")
  public String getBenchmark() {
    return benchmark;
  }

  public void setBenchmark(String benchmark) {
    this.benchmark = benchmark;
  }

  public CpuWithDefaults benchmark(String benchmark) {
    this.benchmark = benchmark;
    return this;
  }

 /**
   * Get monthlyPrice
   * @return monthlyPrice
  **/
  @JsonProperty("monthly_price")
  public BigDecimal getMonthlyPrice() {
    return monthlyPrice;
  }

  public void setMonthlyPrice(BigDecimal monthlyPrice) {
    this.monthlyPrice = monthlyPrice;
  }

  public CpuWithDefaults monthlyPrice(BigDecimal monthlyPrice) {
    this.monthlyPrice = monthlyPrice;
    return this;
  }

 /**
   * Get monthlyPriceDisplay
   * @return monthlyPriceDisplay
  **/
  @JsonProperty("monthly_price_display")
  public String getMonthlyPriceDisplay() {
    return monthlyPriceDisplay;
  }

  public void setMonthlyPriceDisplay(String monthlyPriceDisplay) {
    this.monthlyPriceDisplay = monthlyPriceDisplay;
  }

  public CpuWithDefaults monthlyPriceDisplay(String monthlyPriceDisplay) {
    this.monthlyPriceDisplay = monthlyPriceDisplay;
    return this;
  }

 /**
   * Get maxRam
   * @return maxRam
  **/
  @JsonProperty("max_ram")
  public String getMaxRam() {
    return maxRam;
  }

  public void setMaxRam(String maxRam) {
    this.maxRam = maxRam;
  }

  public CpuWithDefaults maxRam(String maxRam) {
    this.maxRam = maxRam;
    return this;
  }

 /**
   * Get minRam
   * @return minRam
  **/
  @JsonProperty("min_ram")
  public String getMinRam() {
    return minRam;
  }

  public void setMinRam(String minRam) {
    this.minRam = minRam;
  }

  public CpuWithDefaults minRam(String minRam) {
    this.minRam = minRam;
    return this;
  }

 /**
   * Get maxLff
   * @return maxLff
  **/
  @JsonProperty("max_lff")
  public String getMaxLff() {
    return maxLff;
  }

  public void setMaxLff(String maxLff) {
    this.maxLff = maxLff;
  }

  public CpuWithDefaults maxLff(String maxLff) {
    this.maxLff = maxLff;
    return this;
  }

 /**
   * Get maxSff
   * @return maxSff
  **/
  @JsonProperty("max_sff")
  public String getMaxSff() {
    return maxSff;
  }

  public void setMaxSff(String maxSff) {
    this.maxSff = maxSff;
  }

  public CpuWithDefaults maxSff(String maxSff) {
    this.maxSff = maxSff;
    return this;
  }

 /**
   * Get maxNve
   * @return maxNve
  **/
  @JsonProperty("max_nve")
  public String getMaxNve() {
    return maxNve;
  }

  public void setMaxNve(String maxNve) {
    this.maxNve = maxNve;
  }

  public CpuWithDefaults maxNve(String maxNve) {
    this.maxNve = maxNve;
    return this;
  }

 /**
   * Get visible
   * @return visible
  **/
  @JsonProperty("visible")
  public String getVisible() {
    return visible;
  }

  public void setVisible(String visible) {
    this.visible = visible;
  }

  public CpuWithDefaults visible(String visible) {
    this.visible = visible;
    return this;
  }

 /**
   * Get active
   * @return active
  **/
  @JsonProperty("active")
  public String getActive() {
    return active;
  }

  public void setActive(String active) {
    this.active = active;
  }

  public CpuWithDefaults active(String active) {
    this.active = active;
    return this;
  }

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
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    CpuWithDefaults cpuWithDefaults = (CpuWithDefaults) o;
    return Objects.equals(this.id, cpuWithDefaults.id) &&
        Objects.equals(this.shortDesc, cpuWithDefaults.shortDesc) &&
        Objects.equals(this.longDesc, cpuWithDefaults.longDesc) &&
        Objects.equals(this.type, cpuWithDefaults.type) &&
        Objects.equals(this.speed, cpuWithDefaults.speed) &&
        Objects.equals(this.numCores, cpuWithDefaults.numCores) &&
        Objects.equals(this.numCpus, cpuWithDefaults.numCpus) &&
        Objects.equals(this.benchmark, cpuWithDefaults.benchmark) &&
        Objects.equals(this.monthlyPrice, cpuWithDefaults.monthlyPrice) &&
        Objects.equals(this.monthlyPriceDisplay, cpuWithDefaults.monthlyPriceDisplay) &&
        Objects.equals(this.maxRam, cpuWithDefaults.maxRam) &&
        Objects.equals(this.minRam, cpuWithDefaults.minRam) &&
        Objects.equals(this.maxLff, cpuWithDefaults.maxLff) &&
        Objects.equals(this.maxSff, cpuWithDefaults.maxSff) &&
        Objects.equals(this.maxNve, cpuWithDefaults.maxNve) &&
        Objects.equals(this.visible, cpuWithDefaults.visible) &&
        Objects.equals(this.active, cpuWithDefaults.active) &&
        Objects.equals(this.memoryDet, cpuWithDefaults.memoryDet) &&
        Objects.equals(this.hdDet, cpuWithDefaults.hdDet) &&
        Objects.equals(this.monthlyFee, cpuWithDefaults.monthlyFee);
  }

  @Override
  public int hashCode() {
    return Objects.hash(id, shortDesc, longDesc, type, speed, numCores, numCpus, benchmark, monthlyPrice, monthlyPriceDisplay, maxRam, minRam, maxLff, maxSff, maxNve, visible, active, memoryDet, hdDet, monthlyFee);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class CpuWithDefaults {\n");
    
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
  private static String toIndentedString(Object o) {
    return o == null ? "null" : o.toString().replace("\n", "\n    ");
  }
}

