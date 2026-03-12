package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;

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

/**
  * A CPU option available when ordering a dedicated server.
 **/
@Schema(description="A CPU option available when ordering a dedicated server.")
public class ServerOrderCPU   {
  
  @Schema(example = "254", description = "CPU ID.")
 /**
   * CPU ID.  
  **/
  private String id = null;
  
  @Schema(example = "0", description = "CPU price.")
 /**
   * CPU price.  
  **/
  private Integer price = null;
  
  @Schema(example = "ryzen.png", description = "CPU image.")
 /**
   * CPU image.  
  **/
  private String img = null;
  
  @Schema(example = "AMD RYZEN 7900X", description = "Short description of the CPU.")
 /**
   * Short description of the CPU.  
  **/
  private String shortDesc = null;
  
  @Schema(example = "High core and thread count...", description = "Long description of the CPU.")
 /**
   * Long description of the CPU.  
  **/
  private String longDesc = null;
  
  @Schema(example = "New York", description = "Location of the CPU.")
 /**
   * Location of the CPU.  
  **/
  private String location = null;
  
  @Schema(description = "Front Side Bus information.")
 /**
   * Front Side Bus information.  
  **/
  private String fsb = null;
  
  @Schema(description = "Manufacturer information.")
 /**
   * Manufacturer information.  
  **/
  private String manu = null;
  
  @Schema(example = "AMD", description = "CPU type.")
 /**
   * CPU type.  
  **/
  private String type = null;
  
  @Schema(example = "4.7", description = "CPU speed.")
 /**
   * CPU speed.  
  **/
  private String speed = null;
  
  @Schema(description = "Cache information.")
 /**
   * Cache information.  
  **/
  private String cache = null;
  
  @Schema(example = "1", description = "Active status.")
 /**
   * Active status.  
  **/
  private String active = null;
  
  @Schema(example = "12", description = "Number of cores.")
 /**
   * Number of cores.  
  **/
  private String numCores = null;
  
  @Schema(example = "1", description = "Number of CPUs.")
 /**
   * Number of CPUs.  
  **/
  private String numCpus = null;
  
  @Schema(example = "121148", description = "CPU benchmark.")
 /**
   * CPU benchmark.  
  **/
  private String benchmark = null;
  
  @Schema(example = "75", description = "Monthly price.")
 /**
   * Monthly price.  
  **/
  private Integer monthlyPrice = null;
  
  @Schema(example = "128", description = "Maximum RAM supported.")
 /**
   * Maximum RAM supported.  
  **/
  private String maxRam = null;
  
  @Schema(example = "128", description = "Minimum RAM required.")
 /**
   * Minimum RAM required.  
  **/
  private String minRam = null;
  
  @Schema(example = "4", description = "Maximum LFF (Large Form Factor) supported.")
 /**
   * Maximum LFF (Large Form Factor) supported.  
  **/
  private String maxLff = null;
  
  @Schema(example = "4", description = "Maximum SFF (Small Form Factor) supported.")
 /**
   * Maximum SFF (Small Form Factor) supported.  
  **/
  private String maxSff = null;
  
  @Schema(example = "2", description = "Maximum NVMe drives supported.")
 /**
   * Maximum NVMe drives supported.  
  **/
  private String maxNve = null;
  
  @Schema(example = "yes", description = "Visibility status.")
 /**
   * Visibility status.  
  **/
  private String visible = null;
  
  @Schema(description = "Hard drive IDs.")
 /**
   * Hard drive IDs.  
  **/
  private Object hdIds = null;
  
  @Schema(example = "$0.00", description = "Display of CPU price.")
 /**
   * Display of CPU price.  
  **/
  private String priceDisplay = null;
  
  @Schema(example = "$75.00", description = "Display of monthly CPU price.")
 /**
   * Display of monthly CPU price.  
  **/
  private String monthlyPriceDisplay = null;
 /**
   * CPU ID.
   * @return id
  **/
  @JsonProperty("id")
  @NotNull
  public String getId() {
    return id;
  }

  public void setId(String id) {
    this.id = id;
  }

  public ServerOrderCPU id(String id) {
    this.id = id;
    return this;
  }

 /**
   * CPU price.
   * @return price
  **/
  @JsonProperty("price")
  @NotNull
  public Integer getPrice() {
    return price;
  }

  public void setPrice(Integer price) {
    this.price = price;
  }

  public ServerOrderCPU price(Integer price) {
    this.price = price;
    return this;
  }

 /**
   * CPU image.
   * @return img
  **/
  @JsonProperty("img")
  @NotNull
  public String getImg() {
    return img;
  }

  public void setImg(String img) {
    this.img = img;
  }

  public ServerOrderCPU img(String img) {
    this.img = img;
    return this;
  }

 /**
   * Short description of the CPU.
   * @return shortDesc
  **/
  @JsonProperty("short_desc")
  @NotNull
  public String getShortDesc() {
    return shortDesc;
  }

  public void setShortDesc(String shortDesc) {
    this.shortDesc = shortDesc;
  }

  public ServerOrderCPU shortDesc(String shortDesc) {
    this.shortDesc = shortDesc;
    return this;
  }

 /**
   * Long description of the CPU.
   * @return longDesc
  **/
  @JsonProperty("long_desc")
  @NotNull
  public String getLongDesc() {
    return longDesc;
  }

  public void setLongDesc(String longDesc) {
    this.longDesc = longDesc;
  }

  public ServerOrderCPU longDesc(String longDesc) {
    this.longDesc = longDesc;
    return this;
  }

 /**
   * Location of the CPU.
   * @return location
  **/
  @JsonProperty("location")
  @NotNull
  public String getLocation() {
    return location;
  }

  public void setLocation(String location) {
    this.location = location;
  }

  public ServerOrderCPU location(String location) {
    this.location = location;
    return this;
  }

 /**
   * Front Side Bus information.
   * @return fsb
  **/
  @JsonProperty("fsb")
  @NotNull
  public String getFsb() {
    return fsb;
  }

  public void setFsb(String fsb) {
    this.fsb = fsb;
  }

  public ServerOrderCPU fsb(String fsb) {
    this.fsb = fsb;
    return this;
  }

 /**
   * Manufacturer information.
   * @return manu
  **/
  @JsonProperty("manu")
  @NotNull
  public String getManu() {
    return manu;
  }

  public void setManu(String manu) {
    this.manu = manu;
  }

  public ServerOrderCPU manu(String manu) {
    this.manu = manu;
    return this;
  }

 /**
   * CPU type.
   * @return type
  **/
  @JsonProperty("type")
  @NotNull
  public String getType() {
    return type;
  }

  public void setType(String type) {
    this.type = type;
  }

  public ServerOrderCPU type(String type) {
    this.type = type;
    return this;
  }

 /**
   * CPU speed.
   * @return speed
  **/
  @JsonProperty("speed")
  @NotNull
  public String getSpeed() {
    return speed;
  }

  public void setSpeed(String speed) {
    this.speed = speed;
  }

  public ServerOrderCPU speed(String speed) {
    this.speed = speed;
    return this;
  }

 /**
   * Cache information.
   * @return cache
  **/
  @JsonProperty("cache")
  @NotNull
  public String getCache() {
    return cache;
  }

  public void setCache(String cache) {
    this.cache = cache;
  }

  public ServerOrderCPU cache(String cache) {
    this.cache = cache;
    return this;
  }

 /**
   * Active status.
   * @return active
  **/
  @JsonProperty("active")
  @NotNull
  public String getActive() {
    return active;
  }

  public void setActive(String active) {
    this.active = active;
  }

  public ServerOrderCPU active(String active) {
    this.active = active;
    return this;
  }

 /**
   * Number of cores.
   * @return numCores
  **/
  @JsonProperty("num_cores")
  @NotNull
  public String getNumCores() {
    return numCores;
  }

  public void setNumCores(String numCores) {
    this.numCores = numCores;
  }

  public ServerOrderCPU numCores(String numCores) {
    this.numCores = numCores;
    return this;
  }

 /**
   * Number of CPUs.
   * @return numCpus
  **/
  @JsonProperty("num_cpus")
  @NotNull
  public String getNumCpus() {
    return numCpus;
  }

  public void setNumCpus(String numCpus) {
    this.numCpus = numCpus;
  }

  public ServerOrderCPU numCpus(String numCpus) {
    this.numCpus = numCpus;
    return this;
  }

 /**
   * CPU benchmark.
   * @return benchmark
  **/
  @JsonProperty("benchmark")
  @NotNull
  public String getBenchmark() {
    return benchmark;
  }

  public void setBenchmark(String benchmark) {
    this.benchmark = benchmark;
  }

  public ServerOrderCPU benchmark(String benchmark) {
    this.benchmark = benchmark;
    return this;
  }

 /**
   * Monthly price.
   * @return monthlyPrice
  **/
  @JsonProperty("monthly_price")
  @NotNull
  public Integer getMonthlyPrice() {
    return monthlyPrice;
  }

  public void setMonthlyPrice(Integer monthlyPrice) {
    this.monthlyPrice = monthlyPrice;
  }

  public ServerOrderCPU monthlyPrice(Integer monthlyPrice) {
    this.monthlyPrice = monthlyPrice;
    return this;
  }

 /**
   * Maximum RAM supported.
   * @return maxRam
  **/
  @JsonProperty("max_ram")
  @NotNull
  public String getMaxRam() {
    return maxRam;
  }

  public void setMaxRam(String maxRam) {
    this.maxRam = maxRam;
  }

  public ServerOrderCPU maxRam(String maxRam) {
    this.maxRam = maxRam;
    return this;
  }

 /**
   * Minimum RAM required.
   * @return minRam
  **/
  @JsonProperty("min_ram")
  @NotNull
  public String getMinRam() {
    return minRam;
  }

  public void setMinRam(String minRam) {
    this.minRam = minRam;
  }

  public ServerOrderCPU minRam(String minRam) {
    this.minRam = minRam;
    return this;
  }

 /**
   * Maximum LFF (Large Form Factor) supported.
   * @return maxLff
  **/
  @JsonProperty("max_lff")
  @NotNull
  public String getMaxLff() {
    return maxLff;
  }

  public void setMaxLff(String maxLff) {
    this.maxLff = maxLff;
  }

  public ServerOrderCPU maxLff(String maxLff) {
    this.maxLff = maxLff;
    return this;
  }

 /**
   * Maximum SFF (Small Form Factor) supported.
   * @return maxSff
  **/
  @JsonProperty("max_sff")
  @NotNull
  public String getMaxSff() {
    return maxSff;
  }

  public void setMaxSff(String maxSff) {
    this.maxSff = maxSff;
  }

  public ServerOrderCPU maxSff(String maxSff) {
    this.maxSff = maxSff;
    return this;
  }

 /**
   * Maximum NVMe drives supported.
   * @return maxNve
  **/
  @JsonProperty("max_nve")
  @NotNull
  public String getMaxNve() {
    return maxNve;
  }

  public void setMaxNve(String maxNve) {
    this.maxNve = maxNve;
  }

  public ServerOrderCPU maxNve(String maxNve) {
    this.maxNve = maxNve;
    return this;
  }

 /**
   * Visibility status.
   * @return visible
  **/
  @JsonProperty("visible")
  @NotNull
  public String getVisible() {
    return visible;
  }

  public void setVisible(String visible) {
    this.visible = visible;
  }

  public ServerOrderCPU visible(String visible) {
    this.visible = visible;
    return this;
  }

 /**
   * Hard drive IDs.
   * @return hdIds
  **/
  @JsonProperty("hd_ids")
  @NotNull
  public Object getHdIds() {
    return hdIds;
  }

  public void setHdIds(Object hdIds) {
    this.hdIds = hdIds;
  }

  public ServerOrderCPU hdIds(Object hdIds) {
    this.hdIds = hdIds;
    return this;
  }

 /**
   * Display of CPU price.
   * @return priceDisplay
  **/
  @JsonProperty("price_display")
  @NotNull
  public String getPriceDisplay() {
    return priceDisplay;
  }

  public void setPriceDisplay(String priceDisplay) {
    this.priceDisplay = priceDisplay;
  }

  public ServerOrderCPU priceDisplay(String priceDisplay) {
    this.priceDisplay = priceDisplay;
    return this;
  }

 /**
   * Display of monthly CPU price.
   * @return monthlyPriceDisplay
  **/
  @JsonProperty("monthly_price_display")
  @NotNull
  public String getMonthlyPriceDisplay() {
    return monthlyPriceDisplay;
  }

  public void setMonthlyPriceDisplay(String monthlyPriceDisplay) {
    this.monthlyPriceDisplay = monthlyPriceDisplay;
  }

  public ServerOrderCPU monthlyPriceDisplay(String monthlyPriceDisplay) {
    this.monthlyPriceDisplay = monthlyPriceDisplay;
    return this;
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
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
