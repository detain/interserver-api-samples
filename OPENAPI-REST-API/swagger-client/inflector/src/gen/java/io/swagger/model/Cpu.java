package io.swagger.model;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import java.math.BigDecimal;


/**
 * A CPU option available for dedicated server ordering.
 **/
@Schema(description = "A CPU option available for dedicated server ordering.")


public class Cpu   {
  @JsonProperty("id")
  private Integer id = null;
  @JsonProperty("short_desc")
  private String shortDesc = null;
  @JsonProperty("long_desc")
  private String longDesc = null;
  @JsonProperty("type")
  private String type = null;
  @JsonProperty("speed")
  private String speed = null;
  @JsonProperty("num_cores")
  private String numCores = null;
  @JsonProperty("num_cpus")
  private String numCpus = null;
  @JsonProperty("benchmark")
  private String benchmark = null;
  @JsonProperty("monthly_price")
  private BigDecimal monthlyPrice = null;
  @JsonProperty("monthly_price_display")
  private String monthlyPriceDisplay = null;
  @JsonProperty("max_ram")
  private String maxRam = null;
  @JsonProperty("min_ram")
  private String minRam = null;
  @JsonProperty("max_lff")
  private String maxLff = null;
  @JsonProperty("max_sff")
  private String maxSff = null;
  @JsonProperty("max_nve")
  private String maxNve = null;
  @JsonProperty("visible")
  private String visible = null;
  @JsonProperty("active")
  private String active = null;
  /**
   **/
  public Cpu id(Integer id) {
    this.id = id;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("id")
  public Integer getId() {
    return id;
  }
  public void setId(Integer id) {
    this.id = id;
  }

  /**
   **/
  public Cpu shortDesc(String shortDesc) {
    this.shortDesc = shortDesc;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("short_desc")
  public String getShortDesc() {
    return shortDesc;
  }
  public void setShortDesc(String shortDesc) {
    this.shortDesc = shortDesc;
  }

  /**
   **/
  public Cpu longDesc(String longDesc) {
    this.longDesc = longDesc;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("long_desc")
  public String getLongDesc() {
    return longDesc;
  }
  public void setLongDesc(String longDesc) {
    this.longDesc = longDesc;
  }

  /**
   **/
  public Cpu type(String type) {
    this.type = type;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("type")
  public String getType() {
    return type;
  }
  public void setType(String type) {
    this.type = type;
  }

  /**
   **/
  public Cpu speed(String speed) {
    this.speed = speed;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("speed")
  public String getSpeed() {
    return speed;
  }
  public void setSpeed(String speed) {
    this.speed = speed;
  }

  /**
   **/
  public Cpu numCores(String numCores) {
    this.numCores = numCores;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("num_cores")
  public String getNumCores() {
    return numCores;
  }
  public void setNumCores(String numCores) {
    this.numCores = numCores;
  }

  /**
   **/
  public Cpu numCpus(String numCpus) {
    this.numCpus = numCpus;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("num_cpus")
  public String getNumCpus() {
    return numCpus;
  }
  public void setNumCpus(String numCpus) {
    this.numCpus = numCpus;
  }

  /**
   **/
  public Cpu benchmark(String benchmark) {
    this.benchmark = benchmark;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("benchmark")
  public String getBenchmark() {
    return benchmark;
  }
  public void setBenchmark(String benchmark) {
    this.benchmark = benchmark;
  }

  /**
   **/
  public Cpu monthlyPrice(BigDecimal monthlyPrice) {
    this.monthlyPrice = monthlyPrice;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("monthly_price")
  public BigDecimal getMonthlyPrice() {
    return monthlyPrice;
  }
  public void setMonthlyPrice(BigDecimal monthlyPrice) {
    this.monthlyPrice = monthlyPrice;
  }

  /**
   **/
  public Cpu monthlyPriceDisplay(String monthlyPriceDisplay) {
    this.monthlyPriceDisplay = monthlyPriceDisplay;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("monthly_price_display")
  public String getMonthlyPriceDisplay() {
    return monthlyPriceDisplay;
  }
  public void setMonthlyPriceDisplay(String monthlyPriceDisplay) {
    this.monthlyPriceDisplay = monthlyPriceDisplay;
  }

  /**
   **/
  public Cpu maxRam(String maxRam) {
    this.maxRam = maxRam;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("max_ram")
  public String getMaxRam() {
    return maxRam;
  }
  public void setMaxRam(String maxRam) {
    this.maxRam = maxRam;
  }

  /**
   **/
  public Cpu minRam(String minRam) {
    this.minRam = minRam;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("min_ram")
  public String getMinRam() {
    return minRam;
  }
  public void setMinRam(String minRam) {
    this.minRam = minRam;
  }

  /**
   **/
  public Cpu maxLff(String maxLff) {
    this.maxLff = maxLff;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("max_lff")
  public String getMaxLff() {
    return maxLff;
  }
  public void setMaxLff(String maxLff) {
    this.maxLff = maxLff;
  }

  /**
   **/
  public Cpu maxSff(String maxSff) {
    this.maxSff = maxSff;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("max_sff")
  public String getMaxSff() {
    return maxSff;
  }
  public void setMaxSff(String maxSff) {
    this.maxSff = maxSff;
  }

  /**
   **/
  public Cpu maxNve(String maxNve) {
    this.maxNve = maxNve;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("max_nve")
  public String getMaxNve() {
    return maxNve;
  }
  public void setMaxNve(String maxNve) {
    this.maxNve = maxNve;
  }

  /**
   **/
  public Cpu visible(String visible) {
    this.visible = visible;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("visible")
  public String getVisible() {
    return visible;
  }
  public void setVisible(String visible) {
    this.visible = visible;
  }

  /**
   **/
  public Cpu active(String active) {
    this.active = active;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("active")
  public String getActive() {
    return active;
  }
  public void setActive(String active) {
    this.active = active;
  }


  @Override
  public boolean equals(java.lang.Object o) {
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
