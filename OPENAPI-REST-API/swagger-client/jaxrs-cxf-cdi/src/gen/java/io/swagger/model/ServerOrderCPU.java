package io.swagger.model;

import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
/**
 * A CPU option available when ordering a dedicated server.
 **/
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.Objects;

import javax.xml.bind.annotation.*;

@Schema(description = "A CPU option available when ordering a dedicated server.")

public class ServerOrderCPU   {
  private String id = null;
  private Integer price = null;
  private String img = null;
  private String shortDesc = null;
  private String longDesc = null;
  private String location = null;
  private String fsb = null;
  private String manu = null;
  private String type = null;
  private String speed = null;
  private String cache = null;
  private String active = null;
  private String numCores = null;
  private String numCpus = null;
  private String benchmark = null;
  private Integer monthlyPrice = null;
  private String maxRam = null;
  private String minRam = null;
  private String maxLff = null;
  private String maxSff = null;
  private String maxNve = null;
  private String visible = null;
  private String hdIds = null;
  private String priceDisplay = null;
  private String monthlyPriceDisplay = null;

  /**
   * CPU ID.
   **/
  public ServerOrderCPU id(String id) {
    this.id = id;
    return this;
  }

  
  
  @Schema(example = "254", description = "CPU ID.")
  @JsonProperty("id")
  @NotNull
  public String getId() {
    return id;
  }
  public void setId(String id) {
    this.id = id;
  }

  /**
   * CPU price.
   **/
  public ServerOrderCPU price(Integer price) {
    this.price = price;
    return this;
  }

  
  
  @Schema(example = "0", description = "CPU price.")
  @JsonProperty("price")
  @NotNull
  public Integer getPrice() {
    return price;
  }
  public void setPrice(Integer price) {
    this.price = price;
  }

  /**
   * CPU image.
   **/
  public ServerOrderCPU img(String img) {
    this.img = img;
    return this;
  }

  
  
  @Schema(example = "ryzen.png", description = "CPU image.")
  @JsonProperty("img")
  @NotNull
  public String getImg() {
    return img;
  }
  public void setImg(String img) {
    this.img = img;
  }

  /**
   * Short description of the CPU.
   **/
  public ServerOrderCPU shortDesc(String shortDesc) {
    this.shortDesc = shortDesc;
    return this;
  }

  
  
  @Schema(example = "AMD RYZEN 7900X", description = "Short description of the CPU.")
  @JsonProperty("short_desc")
  @NotNull
  public String getShortDesc() {
    return shortDesc;
  }
  public void setShortDesc(String shortDesc) {
    this.shortDesc = shortDesc;
  }

  /**
   * Long description of the CPU.
   **/
  public ServerOrderCPU longDesc(String longDesc) {
    this.longDesc = longDesc;
    return this;
  }

  
  
  @Schema(example = "High core and thread count...", description = "Long description of the CPU.")
  @JsonProperty("long_desc")
  @NotNull
  public String getLongDesc() {
    return longDesc;
  }
  public void setLongDesc(String longDesc) {
    this.longDesc = longDesc;
  }

  /**
   * Location of the CPU.
   **/
  public ServerOrderCPU location(String location) {
    this.location = location;
    return this;
  }

  
  
  @Schema(example = "New York", description = "Location of the CPU.")
  @JsonProperty("location")
  @NotNull
  public String getLocation() {
    return location;
  }
  public void setLocation(String location) {
    this.location = location;
  }

  /**
   * Front Side Bus information.
   **/
  public ServerOrderCPU fsb(String fsb) {
    this.fsb = fsb;
    return this;
  }

  
  
  @Schema(description = "Front Side Bus information.")
  @JsonProperty("fsb")
  @NotNull
  public String getFsb() {
    return fsb;
  }
  public void setFsb(String fsb) {
    this.fsb = fsb;
  }

  /**
   * Manufacturer information.
   **/
  public ServerOrderCPU manu(String manu) {
    this.manu = manu;
    return this;
  }

  
  
  @Schema(description = "Manufacturer information.")
  @JsonProperty("manu")
  @NotNull
  public String getManu() {
    return manu;
  }
  public void setManu(String manu) {
    this.manu = manu;
  }

  /**
   * CPU type.
   **/
  public ServerOrderCPU type(String type) {
    this.type = type;
    return this;
  }

  
  
  @Schema(example = "AMD", description = "CPU type.")
  @JsonProperty("type")
  @NotNull
  public String getType() {
    return type;
  }
  public void setType(String type) {
    this.type = type;
  }

  /**
   * CPU speed.
   **/
  public ServerOrderCPU speed(String speed) {
    this.speed = speed;
    return this;
  }

  
  
  @Schema(example = "4.7", description = "CPU speed.")
  @JsonProperty("speed")
  @NotNull
  public String getSpeed() {
    return speed;
  }
  public void setSpeed(String speed) {
    this.speed = speed;
  }

  /**
   * Cache information.
   **/
  public ServerOrderCPU cache(String cache) {
    this.cache = cache;
    return this;
  }

  
  
  @Schema(description = "Cache information.")
  @JsonProperty("cache")
  @NotNull
  public String getCache() {
    return cache;
  }
  public void setCache(String cache) {
    this.cache = cache;
  }

  /**
   * Active status.
   **/
  public ServerOrderCPU active(String active) {
    this.active = active;
    return this;
  }

  
  
  @Schema(example = "1", description = "Active status.")
  @JsonProperty("active")
  @NotNull
  public String getActive() {
    return active;
  }
  public void setActive(String active) {
    this.active = active;
  }

  /**
   * Number of cores.
   **/
  public ServerOrderCPU numCores(String numCores) {
    this.numCores = numCores;
    return this;
  }

  
  
  @Schema(example = "12", description = "Number of cores.")
  @JsonProperty("num_cores")
  @NotNull
  public String getNumCores() {
    return numCores;
  }
  public void setNumCores(String numCores) {
    this.numCores = numCores;
  }

  /**
   * Number of CPUs.
   **/
  public ServerOrderCPU numCpus(String numCpus) {
    this.numCpus = numCpus;
    return this;
  }

  
  
  @Schema(example = "1", description = "Number of CPUs.")
  @JsonProperty("num_cpus")
  @NotNull
  public String getNumCpus() {
    return numCpus;
  }
  public void setNumCpus(String numCpus) {
    this.numCpus = numCpus;
  }

  /**
   * CPU benchmark.
   **/
  public ServerOrderCPU benchmark(String benchmark) {
    this.benchmark = benchmark;
    return this;
  }

  
  
  @Schema(example = "121148", description = "CPU benchmark.")
  @JsonProperty("benchmark")
  @NotNull
  public String getBenchmark() {
    return benchmark;
  }
  public void setBenchmark(String benchmark) {
    this.benchmark = benchmark;
  }

  /**
   * Monthly price.
   **/
  public ServerOrderCPU monthlyPrice(Integer monthlyPrice) {
    this.monthlyPrice = monthlyPrice;
    return this;
  }

  
  
  @Schema(example = "75", description = "Monthly price.")
  @JsonProperty("monthly_price")
  @NotNull
  public Integer getMonthlyPrice() {
    return monthlyPrice;
  }
  public void setMonthlyPrice(Integer monthlyPrice) {
    this.monthlyPrice = monthlyPrice;
  }

  /**
   * Maximum RAM supported.
   **/
  public ServerOrderCPU maxRam(String maxRam) {
    this.maxRam = maxRam;
    return this;
  }

  
  
  @Schema(example = "128", description = "Maximum RAM supported.")
  @JsonProperty("max_ram")
  @NotNull
  public String getMaxRam() {
    return maxRam;
  }
  public void setMaxRam(String maxRam) {
    this.maxRam = maxRam;
  }

  /**
   * Minimum RAM required.
   **/
  public ServerOrderCPU minRam(String minRam) {
    this.minRam = minRam;
    return this;
  }

  
  
  @Schema(example = "128", description = "Minimum RAM required.")
  @JsonProperty("min_ram")
  @NotNull
  public String getMinRam() {
    return minRam;
  }
  public void setMinRam(String minRam) {
    this.minRam = minRam;
  }

  /**
   * Maximum LFF (Large Form Factor) supported.
   **/
  public ServerOrderCPU maxLff(String maxLff) {
    this.maxLff = maxLff;
    return this;
  }

  
  
  @Schema(example = "4", description = "Maximum LFF (Large Form Factor) supported.")
  @JsonProperty("max_lff")
  @NotNull
  public String getMaxLff() {
    return maxLff;
  }
  public void setMaxLff(String maxLff) {
    this.maxLff = maxLff;
  }

  /**
   * Maximum SFF (Small Form Factor) supported.
   **/
  public ServerOrderCPU maxSff(String maxSff) {
    this.maxSff = maxSff;
    return this;
  }

  
  
  @Schema(example = "4", description = "Maximum SFF (Small Form Factor) supported.")
  @JsonProperty("max_sff")
  @NotNull
  public String getMaxSff() {
    return maxSff;
  }
  public void setMaxSff(String maxSff) {
    this.maxSff = maxSff;
  }

  /**
   * Maximum NVMe drives supported.
   **/
  public ServerOrderCPU maxNve(String maxNve) {
    this.maxNve = maxNve;
    return this;
  }

  
  
  @Schema(example = "2", description = "Maximum NVMe drives supported.")
  @JsonProperty("max_nve")
  @NotNull
  public String getMaxNve() {
    return maxNve;
  }
  public void setMaxNve(String maxNve) {
    this.maxNve = maxNve;
  }

  /**
   * Visibility status.
   **/
  public ServerOrderCPU visible(String visible) {
    this.visible = visible;
    return this;
  }

  
  
  @Schema(example = "yes", description = "Visibility status.")
  @JsonProperty("visible")
  @NotNull
  public String getVisible() {
    return visible;
  }
  public void setVisible(String visible) {
    this.visible = visible;
  }

  /**
   * Hard drive IDs.
   **/
  public ServerOrderCPU hdIds(String hdIds) {
    this.hdIds = hdIds;
    return this;
  }

  
  
  @Schema(description = "Hard drive IDs.")
  @JsonProperty("hd_ids")
  @NotNull
  public String getHdIds() {
    return hdIds;
  }
  public void setHdIds(String hdIds) {
    this.hdIds = hdIds;
  }

  /**
   * Display of CPU price.
   **/
  public ServerOrderCPU priceDisplay(String priceDisplay) {
    this.priceDisplay = priceDisplay;
    return this;
  }

  
  
  @Schema(example = "$0.00", description = "Display of CPU price.")
  @JsonProperty("price_display")
  @NotNull
  public String getPriceDisplay() {
    return priceDisplay;
  }
  public void setPriceDisplay(String priceDisplay) {
    this.priceDisplay = priceDisplay;
  }

  /**
   * Display of monthly CPU price.
   **/
  public ServerOrderCPU monthlyPriceDisplay(String monthlyPriceDisplay) {
    this.monthlyPriceDisplay = monthlyPriceDisplay;
    return this;
  }

  
  
  @Schema(example = "$75.00", description = "Display of monthly CPU price.")
  @JsonProperty("monthly_price_display")
  @NotNull
  public String getMonthlyPriceDisplay() {
    return monthlyPriceDisplay;
  }
  public void setMonthlyPriceDisplay(String monthlyPriceDisplay) {
    this.monthlyPriceDisplay = monthlyPriceDisplay;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ServerOrderCPU serverOrderCPU = (ServerOrderCPU) o;
    return Objects.equals(id, serverOrderCPU.id) &&
        Objects.equals(price, serverOrderCPU.price) &&
        Objects.equals(img, serverOrderCPU.img) &&
        Objects.equals(shortDesc, serverOrderCPU.shortDesc) &&
        Objects.equals(longDesc, serverOrderCPU.longDesc) &&
        Objects.equals(location, serverOrderCPU.location) &&
        Objects.equals(fsb, serverOrderCPU.fsb) &&
        Objects.equals(manu, serverOrderCPU.manu) &&
        Objects.equals(type, serverOrderCPU.type) &&
        Objects.equals(speed, serverOrderCPU.speed) &&
        Objects.equals(cache, serverOrderCPU.cache) &&
        Objects.equals(active, serverOrderCPU.active) &&
        Objects.equals(numCores, serverOrderCPU.numCores) &&
        Objects.equals(numCpus, serverOrderCPU.numCpus) &&
        Objects.equals(benchmark, serverOrderCPU.benchmark) &&
        Objects.equals(monthlyPrice, serverOrderCPU.monthlyPrice) &&
        Objects.equals(maxRam, serverOrderCPU.maxRam) &&
        Objects.equals(minRam, serverOrderCPU.minRam) &&
        Objects.equals(maxLff, serverOrderCPU.maxLff) &&
        Objects.equals(maxSff, serverOrderCPU.maxSff) &&
        Objects.equals(maxNve, serverOrderCPU.maxNve) &&
        Objects.equals(visible, serverOrderCPU.visible) &&
        Objects.equals(hdIds, serverOrderCPU.hdIds) &&
        Objects.equals(priceDisplay, serverOrderCPU.priceDisplay) &&
        Objects.equals(monthlyPriceDisplay, serverOrderCPU.monthlyPriceDisplay);
  }

  @Override
  public int hashCode() {
    return Objects.hash(id, price, img, shortDesc, longDesc, location, fsb, manu, type, speed, cache, active, numCores, numCpus, benchmark, monthlyPrice, maxRam, minRam, maxLff, maxSff, maxNve, visible, hdIds, priceDisplay, monthlyPriceDisplay);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ServerOrderCPU {\n");
    
    sb.append("    id: ").append(toIndentedString(id)).append("\n");
    sb.append("    price: ").append(toIndentedString(price)).append("\n");
    sb.append("    img: ").append(toIndentedString(img)).append("\n");
    sb.append("    shortDesc: ").append(toIndentedString(shortDesc)).append("\n");
    sb.append("    longDesc: ").append(toIndentedString(longDesc)).append("\n");
    sb.append("    location: ").append(toIndentedString(location)).append("\n");
    sb.append("    fsb: ").append(toIndentedString(fsb)).append("\n");
    sb.append("    manu: ").append(toIndentedString(manu)).append("\n");
    sb.append("    type: ").append(toIndentedString(type)).append("\n");
    sb.append("    speed: ").append(toIndentedString(speed)).append("\n");
    sb.append("    cache: ").append(toIndentedString(cache)).append("\n");
    sb.append("    active: ").append(toIndentedString(active)).append("\n");
    sb.append("    numCores: ").append(toIndentedString(numCores)).append("\n");
    sb.append("    numCpus: ").append(toIndentedString(numCpus)).append("\n");
    sb.append("    benchmark: ").append(toIndentedString(benchmark)).append("\n");
    sb.append("    monthlyPrice: ").append(toIndentedString(monthlyPrice)).append("\n");
    sb.append("    maxRam: ").append(toIndentedString(maxRam)).append("\n");
    sb.append("    minRam: ").append(toIndentedString(minRam)).append("\n");
    sb.append("    maxLff: ").append(toIndentedString(maxLff)).append("\n");
    sb.append("    maxSff: ").append(toIndentedString(maxSff)).append("\n");
    sb.append("    maxNve: ").append(toIndentedString(maxNve)).append("\n");
    sb.append("    visible: ").append(toIndentedString(visible)).append("\n");
    sb.append("    hdIds: ").append(toIndentedString(hdIds)).append("\n");
    sb.append("    priceDisplay: ").append(toIndentedString(priceDisplay)).append("\n");
    sb.append("    monthlyPriceDisplay: ").append(toIndentedString(monthlyPriceDisplay)).append("\n");
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
