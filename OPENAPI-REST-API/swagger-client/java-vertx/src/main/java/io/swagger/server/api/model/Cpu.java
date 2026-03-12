package io.swagger.server.api.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import java.math.BigDecimal;
import io.vertx.core.json.JsonObject;
import io.vertx.codegen.annotations.DataObject;
/**
 * A CPU option available for dedicated server ordering.
 */




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

  public Cpu id(Integer id) {
    this.id = id;
    return this;
  }

  /**
   * Get id
   * @return id
   **/
    public Integer getId() {
    return id;
  }

  public void setId(Integer id) {
    this.id = id;
  }

  public Cpu shortDesc(String shortDesc) {
    this.shortDesc = shortDesc;
    return this;
  }

  /**
   * Get shortDesc
   * @return shortDesc
   **/
    public String getShortDesc() {
    return shortDesc;
  }

  public void setShortDesc(String shortDesc) {
    this.shortDesc = shortDesc;
  }

  public Cpu longDesc(String longDesc) {
    this.longDesc = longDesc;
    return this;
  }

  /**
   * Get longDesc
   * @return longDesc
   **/
    public String getLongDesc() {
    return longDesc;
  }

  public void setLongDesc(String longDesc) {
    this.longDesc = longDesc;
  }

  public Cpu type(String type) {
    this.type = type;
    return this;
  }

  /**
   * Get type
   * @return type
   **/
    public String getType() {
    return type;
  }

  public void setType(String type) {
    this.type = type;
  }

  public Cpu speed(String speed) {
    this.speed = speed;
    return this;
  }

  /**
   * Get speed
   * @return speed
   **/
    public String getSpeed() {
    return speed;
  }

  public void setSpeed(String speed) {
    this.speed = speed;
  }

  public Cpu numCores(String numCores) {
    this.numCores = numCores;
    return this;
  }

  /**
   * Get numCores
   * @return numCores
   **/
    public String getNumCores() {
    return numCores;
  }

  public void setNumCores(String numCores) {
    this.numCores = numCores;
  }

  public Cpu numCpus(String numCpus) {
    this.numCpus = numCpus;
    return this;
  }

  /**
   * Get numCpus
   * @return numCpus
   **/
    public String getNumCpus() {
    return numCpus;
  }

  public void setNumCpus(String numCpus) {
    this.numCpus = numCpus;
  }

  public Cpu benchmark(String benchmark) {
    this.benchmark = benchmark;
    return this;
  }

  /**
   * Get benchmark
   * @return benchmark
   **/
    public String getBenchmark() {
    return benchmark;
  }

  public void setBenchmark(String benchmark) {
    this.benchmark = benchmark;
  }

  public Cpu monthlyPrice(BigDecimal monthlyPrice) {
    this.monthlyPrice = monthlyPrice;
    return this;
  }

  /**
   * Get monthlyPrice
   * @return monthlyPrice
   **/
    public BigDecimal getMonthlyPrice() {
    return monthlyPrice;
  }

  public void setMonthlyPrice(BigDecimal monthlyPrice) {
    this.monthlyPrice = monthlyPrice;
  }

  public Cpu monthlyPriceDisplay(String monthlyPriceDisplay) {
    this.monthlyPriceDisplay = monthlyPriceDisplay;
    return this;
  }

  /**
   * Get monthlyPriceDisplay
   * @return monthlyPriceDisplay
   **/
    public String getMonthlyPriceDisplay() {
    return monthlyPriceDisplay;
  }

  public void setMonthlyPriceDisplay(String monthlyPriceDisplay) {
    this.monthlyPriceDisplay = monthlyPriceDisplay;
  }

  public Cpu maxRam(String maxRam) {
    this.maxRam = maxRam;
    return this;
  }

  /**
   * Get maxRam
   * @return maxRam
   **/
    public String getMaxRam() {
    return maxRam;
  }

  public void setMaxRam(String maxRam) {
    this.maxRam = maxRam;
  }

  public Cpu minRam(String minRam) {
    this.minRam = minRam;
    return this;
  }

  /**
   * Get minRam
   * @return minRam
   **/
    public String getMinRam() {
    return minRam;
  }

  public void setMinRam(String minRam) {
    this.minRam = minRam;
  }

  public Cpu maxLff(String maxLff) {
    this.maxLff = maxLff;
    return this;
  }

  /**
   * Get maxLff
   * @return maxLff
   **/
    public String getMaxLff() {
    return maxLff;
  }

  public void setMaxLff(String maxLff) {
    this.maxLff = maxLff;
  }

  public Cpu maxSff(String maxSff) {
    this.maxSff = maxSff;
    return this;
  }

  /**
   * Get maxSff
   * @return maxSff
   **/
    public String getMaxSff() {
    return maxSff;
  }

  public void setMaxSff(String maxSff) {
    this.maxSff = maxSff;
  }

  public Cpu maxNve(String maxNve) {
    this.maxNve = maxNve;
    return this;
  }

  /**
   * Get maxNve
   * @return maxNve
   **/
    public String getMaxNve() {
    return maxNve;
  }

  public void setMaxNve(String maxNve) {
    this.maxNve = maxNve;
  }

  public Cpu visible(String visible) {
    this.visible = visible;
    return this;
  }

  /**
   * Get visible
   * @return visible
   **/
    public String getVisible() {
    return visible;
  }

  public void setVisible(String visible) {
    this.visible = visible;
  }

  public Cpu active(String active) {
    this.active = active;
    return this;
  }

  /**
   * Get active
   * @return active
   **/
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
