package org.openapitools.model;

import java.math.BigDecimal;

import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * A CPU option available for dedicated server ordering.
 */
@ApiModel(description="A CPU option available for dedicated server ordering.")

public class Cpu  {
  
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

  public Cpu id(Integer id) {
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

  public Cpu shortDesc(String shortDesc) {
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

  public Cpu longDesc(String longDesc) {
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

  public Cpu type(String type) {
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

  public Cpu speed(String speed) {
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

  public Cpu numCores(String numCores) {
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

  public Cpu numCpus(String numCpus) {
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

  public Cpu benchmark(String benchmark) {
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

  public Cpu monthlyPrice(BigDecimal monthlyPrice) {
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

  public Cpu monthlyPriceDisplay(String monthlyPriceDisplay) {
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

  public Cpu maxRam(String maxRam) {
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

  public Cpu minRam(String minRam) {
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

  public Cpu maxLff(String maxLff) {
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

  public Cpu maxSff(String maxSff) {
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

  public Cpu maxNve(String maxNve) {
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

  public Cpu visible(String visible) {
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

  public Cpu active(String active) {
    this.active = active;
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
    Cpu cpu = (Cpu) o;
    return Objects.equals(this.id, cpu.id) &&
        Objects.equals(this.shortDesc, cpu.shortDesc) &&
        Objects.equals(this.longDesc, cpu.longDesc) &&
        Objects.equals(this.type, cpu.type) &&
        Objects.equals(this.speed, cpu.speed) &&
        Objects.equals(this.numCores, cpu.numCores) &&
        Objects.equals(this.numCpus, cpu.numCpus) &&
        Objects.equals(this.benchmark, cpu.benchmark) &&
        Objects.equals(this.monthlyPrice, cpu.monthlyPrice) &&
        Objects.equals(this.monthlyPriceDisplay, cpu.monthlyPriceDisplay) &&
        Objects.equals(this.maxRam, cpu.maxRam) &&
        Objects.equals(this.minRam, cpu.minRam) &&
        Objects.equals(this.maxLff, cpu.maxLff) &&
        Objects.equals(this.maxSff, cpu.maxSff) &&
        Objects.equals(this.maxNve, cpu.maxNve) &&
        Objects.equals(this.visible, cpu.visible) &&
        Objects.equals(this.active, cpu.active);
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
  private static String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

